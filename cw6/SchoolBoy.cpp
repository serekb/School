#include "SchoolBoy.h"
SchoolBoy::SchoolBoy(string name, int age, string className): Pupil(name,age,className)
{
    Pupil::mID = "M_" + Pupil::mID;
}
void SchoolBoy::printOutfit()
{
    cout << "Biala koszula, krawat szkolny, czarne/granatowe spodnie, polbuty\n";
}
