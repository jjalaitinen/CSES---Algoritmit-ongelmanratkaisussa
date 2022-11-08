#include <iostream>
#include <vector>
using namespace std;

vector<int> funktio(int numero) 
{   
    vector<int> lista;
    while (true) {
        lista.push_back(numero);
        if (numero == 1) {
            break;
        } else if (numero%2 == 0) {
            numero = numero / 2;
        } else {
            numero = numero*3+1;
        }
    }
    return lista;
}

int main()
{
    int numero = 10000;
    vector<int> vastaus = funktio(numero);
    for (int i = 0; i<vastaus.size(); i++) {
        cout << vastaus[i] << " ";
    }
}