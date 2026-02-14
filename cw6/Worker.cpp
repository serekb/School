#include "Worker.h"
Worker::Worker(string name, int age, double salary, int seniority) noexcept : Person(name, age)
{
    setSalary( salary );
    setSeniority( seniority );
}
Worker::~Worker()
{

}
double Worker::calcTax( double brutto, double cost )
{
    double tax = (brutto - cost) * 0.18 - KWOTA_WOLNA;
    if( tax < 0 )
        tax=0;
    return tax;
}
double Worker::calcBrutto()
{
    int senBonus;
    if(getSeniority() >= 5 && getSeniority() <= 20)
        senBonus = getSeniority();
    else if(getSeniority() > 20)
        senBonus = 20;
    else
        senBonus = 0;
    double brutto = getSalary()*(1 + senBonus * 0.01);
    return brutto;
}