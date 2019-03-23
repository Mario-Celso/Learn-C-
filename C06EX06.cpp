// C06EX06.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int VALOR, *PVALOR, **PPONT;

   cout << " Entre valor inteiro: ";
   cin >> VALOR;
   cin.ignore (80, '\n');

   PVALOR = &VALOR;
   PPONT = &PVALOR;

   cout << "\ Valor informado = " << **PPONT << endl;

   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
