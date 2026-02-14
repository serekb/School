#pragma once
#include "Person.h"
class Worker : public Person
{
protected:
    double mSalary;
    int mSeniority;
public:
    void setSalary( double newSalary );
    double getSalary() const;
    void setSeniority( int newSeniority );
    int getSeniority() const;

    Worker(string name = "", int age = 0, double salary=0, int seniority = 0) noexcept;
    virtual ~Worker();

    virtual void printWorker() = 0;
    virtual void calcSalary() = 0;
    double calcTax( double brutto, double cost );
    double calcBrutto();
};
//INLINE FUNCTIONS
inline void Worker::setSalary( double newSalary )
{
    this->mSalary = newSalary;
}
inline double Worker::getSalary() const
{
    return this->mSalary;
}
inline void Worker::setSeniority( int newSeniority )
{
    this->mSeniority = newSeniority;
}
inline int Worker::getSeniority() const
{
    return this->mSeniority;
}

