#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    void add(int a, int b) {

        int res = a + b;

        cout << "Resultado: " << res;
    }
};

int main() {

    Calculator calc;

    calc.add(20,60);

    
    return 0;
}