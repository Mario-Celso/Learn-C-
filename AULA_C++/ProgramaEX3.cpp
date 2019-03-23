//CAP2EX03.CPP

#include <iostream>
using namespace std;

int main(void)
{
  char NOME2[100];



  cout << "Informe seu nome:";
  cin.getline(NOME2, sizeof(NOME2));


  cout << "Ola, " << NOME2;
  cout << endl;


  cout << "Tecle <Enter> para encerrar...";
  cin.get();
  return 0;
}
