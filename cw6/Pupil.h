#pragma once
#include "Person.h"
enum Subjects { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI };
#define MAXSUBJECTS NIEMIECKI + 1
class Pupil : public Person
{
protected:
    string mID;
private:
    string mClassName;
    double mAve;
    double mNotes[MAXSUBJECTS];

    static int mBaseID;
public:
    Pupil(string name = "", int age = 0, string className = "") noexcept;
    virtual ~Pupil();

    void setClassName( string newClassName );
    string getClassName() const;
    string getID() const;

    void clearNotes();
    double calcAve();
    double getAve() const;
    void setNote( Subjects sub, double note );
    void printPupil();
    virtual void printOutfit() = 0;//nie da sie jejj zainpmlementowac tu wiec musi byc wirtualna
//jest to metoda czysta -> klasa jest czysta // klasa jest abstrakcyjna -> nie wolno tworzyc wobiektów tej klasy
};
//INLINE FUNCTIONS
inline void Pupil::setClassName(string newClassName)
{
    mClassName= newClassName;
}
inline string Pupil::getClassName() const
{
    return this->mClassName;
}
inline string Pupil::getID() const
{
    return this->mID;
}
inline double Pupil::getAve() const
{
    return mAve;
}
