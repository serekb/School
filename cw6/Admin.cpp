#include "Admin.h"
Admin::Admin(string name, int age, Positions position, double salary, int seniority) noexcept : Worker( name, age, salary, seniority )
{
    setPosition( position );
}
Admin::~Admin()
{

}
void Admin::printWorker()
{
    cout << getName() << " " << getAge() << " lat " << endl;
    cout << "stanowisko: " << getPosition() << endl;
    cout << "Staz pracy: " << getSeniority() << " pensja: ";
    calcSalary();
    cout << "\t";
}
void Admin::calcSalary()
{
    cout << "pensja brutto: " << calcBrutto() << " podatek: " << calcTax(calcBrutto(), KOSZTY_UZYSKU) << 
        " pensja netto (po podatku): " << calcBrutto()-calcTax(calcBrutto(), KOSZTY_UZYSKU) << endl;
}