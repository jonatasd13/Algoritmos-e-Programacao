#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main () {
    string linha;
    fstream arq; //fstream - leitura e escrita
    int qtdpessoas;
 
    cout << "Digite quantas pessoas você quer atribuir as informações: ";
    cin >> qtdpessoas;
    arq.open ("pessoas.txt", ios::out | ios::app); //abre para escrita (ios::out)
 
    if (arq.is_open()) {
        //realiza uma escritra
        for (int i = 0; i <= qtdpessoas; i++){
            cout << "Digite o nome da " << (i+1) << "ª pessoa: ";
            getline (arq, linha);
            cout << "Digite a idade da " << (i+1) << "ª pessoa: ";
            getline (arq, linha);
        }
        arq.close();
        arq.open("pessoas.txt", ios::in); //abre no modo de leitura (ios::in)
        
        while (! arq.eof() ) {
            getline (arq, linha);
            cout << linha << endl;
        }
        arq.close();
    } else {
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}