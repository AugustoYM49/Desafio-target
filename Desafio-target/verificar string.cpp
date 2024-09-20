#include <iostream>
using namespace std;









int main() {
  
    char palavra[50];   
    char caractere = 'a';           
    int cont = 0;        

    cout << "Digite uma string:  ";
    cin.getline(palavra, 50); 

    for (int i = 0; palavra[i] != '\0'; i++) {  
        if (palavra[i] == caractere) {
            cont++;  
        }
    }

   cout << "A letra 'a' aparece " << cont  << " vezes";

    return 0;
}