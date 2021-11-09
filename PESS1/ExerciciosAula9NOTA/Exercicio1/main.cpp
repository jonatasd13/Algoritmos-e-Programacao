#include <iostream>
#include <locale>
#include <cstring>
#include <iomanip>
#define NLOJA 1
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
      struct EstruturaLOJA{
        char nomesocial[40];
        long long int CNPJ;
        int CEP;
        char produtos[20];
        int qtdfunc;
        float folha_salarial = 0.00;
        } strLoja[NLOJA];
        cout << fixed << setprecision(2);
        int i;
        for(i =0;i<NLOJA;i++){
            cout << "Informe o nome social da loja:   ";
            cin >> strLoja[i].nomesocial;
            cout << "Informe CNPJ da loja:   ";
            cin >> strLoja[i].CNPJ;
            cout << "Informe CEP da loja:   ";
            cin >> strLoja[i].CEP;
            cout << "Informe o que a loja vende:   ";
            cin >> strLoja[i].produtos;
            cout << "Informe a quantidade de funcionários:   ";
            cin >> strLoja[i].qtdfunc;
            cout << "Informe o montante da folha salarial:   R$ ";
            cin >> strLoja[i].folha_salarial;
            cout << endl;
            getchar();
        }
        cout << "\nLoja cadastrada no sistema com sucesso!\n\n";
        for(i=0;i<NLOJA;i++){
        cout << "Loja: " << strLoja[i].nomesocial << endl;
        cout << "CNPJ: " << strLoja[i].CNPJ << endl;
        cout << "CEP: " << strLoja[i].CEP << endl;
        cout << "Produtos: " << strLoja[i].produtos << endl;
        cout << "Funcionários: " << strLoja[i].qtdfunc << endl;
        cout << "Folha Salarial: R$ " << strLoja[i].folha_salarial << endl << endl << endl;
        }
    return 0;
}
