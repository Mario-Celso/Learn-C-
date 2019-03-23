#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
    int I, A [10], B [10];
    char LETRA;

    cout << setiosflags (ios::right);
    cout << "Exemplo de checagem de indice\n\n";

    for (I = 0; I <=9; I++)
        {
            cout << "Informe um valor para elemento nr. ";
            cout << setw(2);
            cout << I + 1 << ": ";
            cin >> A[I];
            cin.ignore(80, '\n');

        }
    for (I = 0; I <=9; I++)
        if ((I + 1) % 2 == 0)
            B[I] = A[I] * 5;
        else
            B[I] = A[I] + 5;


    for (I = 0; I <= 9; I++)
        cout << "\nA[" << setw(2) << I + 1 << "] = " << setw(3) << A[I];
        cout << endl;

    for (I = 0; I <= 9; I++)
        cout << "\nB[" << setw(2) << I + 1 << "] = " << setw(3) << B[I];

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;

}
