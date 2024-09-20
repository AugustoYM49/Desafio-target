#include <iostream>
using namespace std;



int fibonacci(int n) {
    if (n > 2) {
    	
        return fibonacci(n - 1) + fibonacci(n - 2);
        
    } else {
    	
        return 1;
        
    }
}


bool VerificaFibonacci(int num, int inicial = 1) {
	
    int ultimo = fibonacci(inicial);
    
    if (ultimo == num) {
    	
        return true;  
        
    } else if (ultimo > num) {
    	
        return false; 
    } else {
        return VerificaFibonacci(num, inicial + 1);  
    }
}

int main() {
    int num;

    cout << "Insira um numero: ";
    cin >> num;

    if (VerificaFibonacci(num)) {
    	
        cout << "O numero inserido pertence a sequencia";
        
    } else {
    	
        cout << "O numero inserido nao pertence a sequencia";
        
    }

    return 0;
}