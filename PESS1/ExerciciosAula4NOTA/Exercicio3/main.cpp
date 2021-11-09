#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");
    
    char nome[30]; 
    float salario, IRPF1, IRPF2, IRPF3, IRPF4;
    
      cout << "Digite o nome: " << endl;
      cin >> nome;
      cout << "Digite o salário: " << endl;
      cin >> salario;
      
      IRPF1 = salario * 0.15;
      IRPF2 = salario * 0.20;
      IRPF3 = salario * 0.23;
      IRPF4 = salario * 0.27;
              
      if(salario < 0)
      {
          cout << "Salário inválido!";
      }
      else{
          if(salario < 2000)
          {
              cout << nome << ", você tem isenção de pagamento do IRPF";
          }
          else{
              if(salario >= 2000 && salario < 3000){
                  cout << nome << ", você deverá pagar R$" 
                          << IRPF1 << " de IRPF";
              }
              else{
                  if(salario >= 3000 && salario < 5000)
                  {
                      cout << nome << ", você deverá pagar R$" 
                          << IRPF2 << " de IRPF";
                  } else{
                      if(salario >= 5000 && salario < 10000)
                      {
                          cout << nome << ", você deverá pagar R$" 
                                  << IRPF3 << " de IRPF";
                      } else{
                          if(salario >= 10000)
                          {
                              cout << nome << ", você deverá pagar R$" 
                                      << IRPF4 << " de IRPF";
                          }
                      }
                  } 
              }
          }
      }
      return 0;
}

