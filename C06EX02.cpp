//C06EX02.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
   setlocale(LC_ALL, "");

   int IDADE = 25;
   int *PIDADE = 0;

   PIDADE = &IDADE;

   cout << "IDADE = "  << IDADE << "  | End: = " << &IDADE;
   cout << endl;
   cout << "PIDADE = " << *PIDADE;
   cout << " | End: = " << &PIDADE << endl;


   cout << endl;
   cout << " Tecle <Enter> para encerrar ... ";
   cin.get ();
   return 0;
}
