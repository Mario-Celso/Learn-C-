//C06EX03.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int IDADE = 25;
   int *PIDADE = &IDADE;


   cout << " o valor idade " << *PIDADE << " está no endereço de memória " << PIDADE << endl;


   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
