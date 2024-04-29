#include <bits/stdc++.h>
using namespace std;

class Calculadora {
public:
    void add(int a, int b) {

        int res = a + b;

        cout << "Resultado: " << res;
    }
};

int main() {

    Calculadora calc;

    calc.add(20,60);

    
    return 0;
}