//C06EX01.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int IDADE = 25;
   int *PIDADE = 0;

   PIDADE = &IDADE;

   cout << " O valor idade " << IDADE << " est� armazenado" << " no endere�o de mem�ria " << PIDADE << endl;

   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
