#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "Digite o seu nome: ";

    string nome;
    getline(cin, nome);

    cout << "Ola " << nome << " !\n";

    return 0;
}