//CALCULADORA2.CPP

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main(void)
{
  setlocale(LC_ALL, "");

  float A, B, R;
  int ESCOLHA, REPETICAO;

do{

  printf("Escolha entre as opções:\n1 >> Soma\n2 >> Subtração \n3 >> Divisão\n4 >> Multiplicação\n5 >> Exponenciação\n");

  cout << "\nInforme sua opção: "; cin >> ESCOLHA;
  cin.ignore(80, '\n');

  if (ESCOLHA == 1)
    {

  cout << "\nInforme o primeiro valor: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Informe o segundo valor: "; cin >> B;
  cin.ignore(80, '\n');

  R = A + B;

  cout << "\nResultado "<< endl;
  cout << A << " + " << B << " = " << R << endl;
  cout << endl;

    }
  else

    { if( ESCOLHA == 2 )

     {

  cout << "\nInforme o primeiro valor: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Informe o segundo valor: "; cin >> B;
  cin.ignore(80, '\n');

   R = A - B;

  cout << "\nResultado "<< endl;
  cout << A << " - " << B << " = " << R << endl;
  cout << endl; }

       else { if (ESCOLHA == 3)
        {
            cout << "\nInforme o primeiro valor: "; cin >> A;
            cin.ignore(80, '\n');

            cout << "Informe o segundo valor: "; cin >> B;
            cin.ignore(80, '\n');

            R = A / B;

            cout << "\nResultado "<< endl;
            cout << A << " / " << B << " = " << R << endl;
            cout << endl;
        }

        else
            {if (ESCOLHA == 4)
                {

                cout << "\nInforme o primeiro valor: "; cin >> A;
                cin.ignore(80, '\n');

                cout << "Informe o segundo valor: "; cin >> B;
                cin.ignore(80, '\n');

                R = A * B;

                cout << "\nResultado "<< endl;
                cout << A << " x " << B << " = " << R << endl;
                cout << endl;
                }
                else { if (ESCOLHA == 5)

                        {
                            cout << "\nInforme o primeiro valor: "; cin >> A;
                            cin.ignore(80, '\n');

                            cout << "Informe o segundo valor: "; cin >> B;
                            cin.ignore(80, '\n');

                            R = pow (A , B);

                            cout << "\nResultado "<< endl;
                            cout << A << " ^ " << B << " = " << R << endl;
                            cout << endl;

                        } else {

                              printf("\nOPÇÃO INVALIDA");

                        }
                }
            }
       }
  }

  printf ("\n\nDeseja continuar ? \n 1 >> SIM\n 2 >> NÃO\n\n");
  cout << "Informe sua escolha: "; cin >> REPETICAO;
  cin.ignore(80, '\n');
}
while (REPETICAO == 1);

  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
