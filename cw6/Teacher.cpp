#include "Teacher.h"
Teacher::Teacher(string name, int age, Subjects subject, string supervise, double salary, int seniority) noexcept : Worker( name, age, salary, seniority )
{
    setSubject( subject );
    setSupervise( supervise );
}
Teacher::~Teacher()
{

}
void Teacher::printWorker()
{
    cout << getName() << " " << getAge() << " lat " << endl;
    cout << "Przedmiot: " << getSubject() << " wychowawstwo: " << getSupervise() << endl;
    cout << "Staz pracy: " << getSeniority() << " pensja: ";
    calcSalary();
    cout << "\t";
}
void Teacher::calcSalary()
{
    double brutto = calcBrutto();
    if(getSupervise() != "BRAK")
        brutto += 400;
    double tax = calcTax(0.2*brutto,KOSZTY_UZYSKU) + calcTax(0.8*brutto,0.5*0.8*brutto) + KWOTA_WOLNA;
    cout << "pensja brutto: " << brutto << " podatek: " << tax << " pensja netto (po podatku): " << brutto-tax << endl;
}
