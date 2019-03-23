// C06EX09.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int IDADE = 25;
   int *PIDADE = 0;

   PIDADE = &IDADE;

   cout << " Variável idade ....: " << IDADE << endl;
   cout << " Ponteiro PIDADE ..: " << PIDADE << endl;

   *PIDADE = 30;

   cout << " Variável idade ....: " << IDADE << endl;
   cout << " Ponteiro PIDADE ..: " << PIDADE << endl;

   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
