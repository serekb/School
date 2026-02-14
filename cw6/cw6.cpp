#include <iostream>
using namespace std;
#include "SchoolGirl.h"
#include "SchoolBoy.h"
#include "Admin.h"
#include "Teacher.h"
void printAllPupils( Pupil** pPupils, int nSize );
void printAllWorkers( Worker** pWorkers, int nSize );
void sortWorkers( Worker** pWorkers, int nSize );

int main()
{
    SchoolGirl g1( "Sobota Beata", 17, "2a");
    g1.setNote(POLSKI, 3.5);
    g1.setNote(ANGIELSKI, 4.0);
    g1.setNote(MATEMATYKA, 4.5);
    g1.setNote(FIZYKA, 4.5);

    SchoolGirl g2("Nowak Anna", 17, "2a");
    g2.setNote(POLSKI, 3.0);
    g2.setNote(MATEMATYKA, 3.5);
    g2.setNote(FIZYKA, 4.0);

    SchoolGirl g3("Trojan Alicja", 18, "3b");
    g3.setNote(POLSKI, 4.5);
    g3.setNote(FIZYKA, 4.0);

    SchoolBoy b1( "Kowalski Janusz", 17, "3a" );
    b1.setNote( ANGIELSKI, 4.5 );
    b1.setNote( INFORMATYKA, 5.0);
    b1.setNote( NIEMIECKI, 4.0);
    b1.setNote( FIZYKA, 4.0);

    SchoolBoy b2( "Zaorski Andrzej", 18, "4b" );
    b2.setNote(ANGIELSKI, 4.5);
    b2.setNote(INFORMATYKA, 3.0);
    b2.setNote(NIEMIECKI, 4.0);

    Pupil* pupils[] {&g1, &g2, &g3, &b1, &b2};
    printAllPupils( pupils, sizeof(pupils)/sizeof(Pupil*) );

    Teacher t1( "Kowalski Jan", 47, POLSKI, "2a", 6200.50, 12 );
    Teacher t2( "Nowak Tomasz", 33, INFORMATYKA, "", 10000.50, 10);
    Teacher t3( "Koperta Anna", 55, FIZYKA, "3c", 5000.98, 30 );
    Teacher t4( "Kapusta Kamil", 23, ANGIELSKI, "1a", 10000.50, 2 );
    Teacher t5( "Cebula Nina", 30, POLSKI, "", 5000.98, 8 );
    
    Admin a1("Piana Szymon", 63, STARSZY_SPECJALISTA, 10000.50, 15);
    Admin a2("Piana Michalina", 61, SPECJALISTA, 10000.50, 4);

    Worker* workers[] {&t1, &t2, &t3, &t4, &t5, &a1, &a2};
    sortWorkers(workers, sizeof(workers) / sizeof(Worker*));
    printAllWorkers( workers, sizeof(workers) / sizeof(Worker*));
    return 0;
}
void printAllPupils( Pupil** pPupils, int nSize )
{
    for( int i = 0; i < nSize; i++ ) 
    {
        pPupils[i]->printPupil();
        cout << endl;
    }
    cout << endl;
}
void sortWorkers( Worker** pWorkers, int nSize )
{
    for( int i = 0; i < nSize; i++ )
    {
        Worker* x = pWorkers[i];
        int j = i - 1;
        while(j >= 0 && pWorkers[j]->getSalary() > x->getSalary() )
        {
            pWorkers[j + 1] = pWorkers[j--];
        }
        pWorkers[j + 1] = x;
    }
}
void printAllWorkers( Worker** pWorkers, int nSize )
{
    for(int i = 0; i < nSize; i++)
    {
        pWorkers[i]->printWorker();
        cout << endl;
    }
    cout << endl;
    //jeszcze sortowanie wedlug pensji
}
/*prywatna szko³a
dziedziczenie osoba,uczen
*/
/*
PRACA W£ASNA --- bedzie na teamsie
klasa Worker - dziedziczy po osobie
pensja, staz pracy, 
nauczyciel,admin - dzidzicz¹ po worker
naiczyciel - przedmiot, wychowawca
drukowanie listy pracownikow
pensja z opodatkowaniem
maksymalnie 20 lat stazu dla >20 jest 20
jesli podatek <0 to 0
funkcja liczaca podatek jest wirtualna w worker
da sie lata stazu w workerze a reszta w zalznosci od rodzaju
2 tygodnie // wyjatki dla chetnych
*/