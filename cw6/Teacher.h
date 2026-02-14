#pragma once
#include "Worker.h"
#include "Pupil.h"
class Teacher : public Worker
{
protected:
    Subjects mSubject;
    string mSupervise;
public:
    void setSubject( Subjects newSubject);
    string getSubject() const;
    void setSupervise( string newSupervise );
    string getSupervise() const;

    Teacher(string name = "", int age = 0, Subjects subject = POLSKI, string supervise = "", double salary = 0, int seniority = 0) noexcept;
    virtual ~Teacher();

    virtual void printWorker();
    virtual void calcSalary();
};
inline void Teacher::setSubject( Subjects newSubject)
{
    this->mSubject = newSubject;
}
inline string Teacher::getSubject() const
{
    switch(this->mSubject)
    {
    case 0: return "Polski";
    case 1: return "Matematyka";
    case 2: return "Fizyka";
    case 3: return "Chemia";
    case 4: return "Informatyka";
    case 5: return "Angielski";
    case 6: return "Niemiecki";
    default: throw SchoolException{SUBJECT_ERROR}; return "";
    }
}
inline void Teacher::setSupervise( string newSupervise)
{
    this->mSupervise = newSupervise;
}
inline string Teacher::getSupervise() const
{
    if( this->mSupervise == "" )
        return "BRAK";
    return this->mSupervise;
}

