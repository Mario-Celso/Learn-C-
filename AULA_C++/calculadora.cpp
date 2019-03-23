//CALCULADORA.CPP

#include <iostream>
#include <clocale>
using namespace std;

int main(void)
{
  setlocale(LC_ALL, "");

  float A, B, R;
  int ESCOLHA, REPETICAO;


do{

  cout << "Informe o primeiro valor: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Informe o segundo valor: "; cin >> B;
  cin.ignore(80, '\n');


   printf("\nEscolha entre as opções:\n1 >> soma\n2 >> subtração \n3 >> divisão\n4 >> multiplicação\n\n");

  cout << "Informe sua opção: "; cin >> ESCOLHA;
  cin.ignore(80, '\n');

  if (ESCOLHA == 1)
    {

  R = A + B;

  cout << "Resultado "<< endl;
  cout << A << " + " << B << " = " << R << endl;
  cout << endl;

    }
  else

    { if( ESCOLHA == 2 )

     {


   R = A - B;

  cout << "Resultado "<< endl;
  cout << A << " - " << B << " = " << R << endl;
  cout << endl; }

       else { if (ESCOLHA == 3)
        {
            R = A / B;

 cout << "Resultado "<< endl;
  cout << A << " / " << B << " = " << R << endl;
  cout << endl;
        }
        else {
                R = A * B;

  cout << "Resultado "<< endl;
  cout << A << " x " << B << " = " << R << endl;
  cout << endl; }
            }

  }

  printf ("Deseja continuar ? \n 1 >> SIM\n 2 >> NÃO\n\n");
  cout << "Informe sua escolha: "; cin >> REPETICAO;
  cin.ignore(80, '\n');
}
while (REPETICAO == 1);





  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
