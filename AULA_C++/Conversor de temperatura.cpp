

#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{

  float F, C, K;
  int ESCOLHA, CONVERSAO;

  printf("\nEscolha entre as opcoes de temperatura:\n1 >> Celsius \n2 >> Fahrenheit \n3 >> Kelvin");

  cout << "\nInforme sua escolha: "; cin >> ESCOLHA;
  cin.ignore(80, '\n');

if (ESCOLHA == 1)

 {
     cout << "Informe temperatura em Celsius : "; cin >> C;
     cin.ignore(80, '\n');

     printf("\nEscolha entre as opcoes de conversao:\n1 >> para Fahrenheit \n2 >> para Kelvin\n");


     cout << "\nInforme sua opçao de conversao: "; cin >> CONVERSAO;
     cin.ignore(80, '\n');

       if (CONVERSAO == 1)
           {
               C = ( F - 32)/ 1,8 ;
             }
       else
       {
           K = C + 273;
       }


      cout << "\n O valor de  Fahrenheit para Celsius e : " << C << endl;
 }
 else

{


  cout << "Informe valor para a variavel Celsius: "; cin >> C;
  cin.ignore(80, '\n');

 F = (9* C + 160)/ 5;


  cout << "\n O valor de Celsius para Fahrenheit e : " << F << endl;
}
  cout << endl;


  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
