//C06EX03.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int IDADE = 25;
   int *PIDADE = &IDADE;


   cout << " o valor idade " << *PIDADE << " est� no endere�o de mem�ria " << PIDADE << endl;


   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
