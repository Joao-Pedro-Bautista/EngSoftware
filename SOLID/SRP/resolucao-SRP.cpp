#include <bits/stdc++.h>
using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a+b;
        }
};

class Visor{
    public:
        void imprime_res(int x){
            cout << "Resultado: " << x;
        }
};


int main() {

    Calculator c1;
    Visor v1;

    int resultado = c1.add(20,60);
    v1.imprime_res(resultado);

    
    return 0;
}