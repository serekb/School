#include "Pupil.h"

int Pupil::mBaseID = 10000;

Pupil::Pupil( string name, int age, string className ) noexcept : Person(name,age)
{
    setClassName(className);
    clearNotes();
    mID = to_string( mBaseID++ );
}
Pupil::~Pupil()
{
}
void Pupil::clearNotes()
{
    memset( mNotes, 0, MAXSUBJECTS*sizeof(double) );
    mAve = 0;
}
double Pupil::calcAve()
{
    int noteNo = 0;
    double sum = 0;
    for(int sub = POLSKI; sub < MAXSUBJECTS; sub++)
    {
        if( mNotes[sub] > 1 )
        {
            noteNo++;
            sum += mNotes[sub];
        }
    }
    return mAve = (noteNo)? sum/=noteNo : 0;
}
void Pupil::setNote( Subjects subject, double note )
{
    if( subject >= POLSKI && subject<MAXSUBJECTS && note >= 2 && note<=5 )
        mNotes[subject] = note;
}
void Pupil::printPupil()
{
    cout << getID() << " " << getName() << " (" << getClassName() << ") " << getAge() << " lat ";
    cout << "average = " << calcAve() << endl;
    cout << "\t";
    printOutfit(); // wirtualna jeszcze nie ma definicji
}
