

#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{

  float F, C, ESCOLHA;

  printf("\nEscolha entre as opcoes:\n1 >> de F para C\n2 >> de C para F");

  cout << "\nInforme valor para a variavel <ESCOLHA>: "; cin >> ESCOLHA;
  cin.ignore(80, '\n');

if (ESCOLHA == 1)

 {
  cout << "Informe valor para a variavel Fahrenheit : "; cin >> F;
  cin.ignore(80, '\n');

 C= ( F - 32)/ 1,8 ;


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
