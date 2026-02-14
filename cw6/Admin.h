#pragma once
#include "Worker.h"
enum Positions { MLODSZY_SPECJALISTA, SPECJALISTA, STARSZY_SPECJALISTA };
class Admin : public Worker
{
protected:
    Positions mPosition;
public:
    void setPosition( Positions newPosition );
    string getPosition() const;

    Admin(string name = "", int age = 0, Positions position = MLODSZY_SPECJALISTA, double salary = 0, int seniority = 0) noexcept;
    virtual ~Admin();

    virtual void printWorker();
    virtual void calcSalary();
};
inline void Admin::setPosition( Positions newPosition )
{
    this->mPosition = newPosition;
}
inline string Admin::getPosition() const
{
    switch(this->mPosition)
    {
    case 0: return "Mlodszy specjalista";
    case 1: return "Specjalista";
    case 2: return "Starszy specjalista";
    default: throw SchoolException{POSITION_ERROR}; return "";
    }
}
