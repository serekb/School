#pragma once
#include <iostream>
using namespace std;
#include <string>
#define OTHER_ERROR 0xFF
#define ALLOC_ERROR 0x01
#define SIZE_ERROR 0x02
#define SUBJECT_ERROR 0x03
#define POSITION_ERROR 0x05
#define INDEX_OUT_OF_RANGE 0x04
#define INCOMPATIBLE_SIZES 0x08
#define KWOTA_WOLNA 46.34
#define KOSZTY_UZYSKU 111.25
class SchoolException
{
public:
    SchoolException(int errCode = OTHER_ERROR) { mErrCode = errCode; }
    const char* getReason();
private:
    int mErrCode;
};
inline const char* SchoolException::getReason()
{
    switch(mErrCode)
    {
    case OTHER_ERROR: return "ERROR: other ERROR\n";
    case SUBJECT_ERROR : return "ERROR: SUBJECT is not a correct name\n";
    case POSITION_ERROR: return "ERROR: POSITION is not a correct name\n";
    default: return "Other ERROR than other ERROR\n";
    }
}
class Person
{
private:
    string mName;
    int mAge;
public:
    Person( string mName = "", int age = 0);
    virtual ~Person();

    Person& operator = ( const Person& p ) = default;

    void setPerson( string newName, int newAge );
    void setName( string newName );
    void setAge( int newAge );

    string getName() const;
    int getAge() const;
};
//INLINE FUNCRTIONS
inline void Person::setPerson(string newName, int newAge)
{
    setName(newName);
    setAge(newAge);
}
inline void Person::setName(string newName)
{
    mName = newName;
}
inline void Person::setAge(int newAge)
{
    mAge = newAge;
}
inline string Person::getName() const
{
    return this->mName;
}
inline int Person::getAge() const
{
    return this->mAge;
}

