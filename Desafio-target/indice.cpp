#include <iostream>
using namespace std;

int main() {
    int soma = 0, K = 1, indice = 12;  
  


  
    while (K < indice) {
        soma = soma + K;  
        K = K + 1;        
    }

    cout << "Soma total: " << soma;
  

    return 0;
}