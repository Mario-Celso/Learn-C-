// C06EX08.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int IDADE = 25;
   int *PIDADE1 = 0;
   int *PIDADE2 = 0;

   PIDADE1 = &IDADE;
   PIDADE2 = PIDADE1;

   cout << " Variável idade ....: " << IDADE << endl;
   cout << " Ponteiro PIDADE1 ..: " << PIDADE1 << endl;
   cout << " Ponteiro PIDADE2 ..: " << PIDADE2 << endl;

   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
