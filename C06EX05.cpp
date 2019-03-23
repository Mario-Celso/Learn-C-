//C06EX05.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int A, *PA;

   PA = &A;

   cout << " Entre valor inteiro: ";
   cin >> *PA;
   cin.ignore (80, '\n');

   cout << "\ Valor informado = " << A << endl;

   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
