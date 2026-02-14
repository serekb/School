#include "SchoolGirl.h"
SchoolGirl::SchoolGirl(string name, int age, string className) : Pupil( name,age,className )
{
    Pupil::mID = "F_"+Pupil::mID;
}
void SchoolGirl::printOutfit()
{
    cout << "Biala bluzka, krawat szkolny, czarna/granatowa spodniczka, plaskie obuwie\n";
}
