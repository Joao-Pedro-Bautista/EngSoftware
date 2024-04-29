#include <bits/stdc++.h>
using namespace std;


class Forma{
    public:
        void desenhar();
};

class Circulo: public Forma {
    public:
        void desenhar(){
            cout<< "\n";

            const int radius = 5;
            const int diameter = radius * 2;
            const int centerX = radius;
            const int centerY = radius;

            for (int y = 0; y <= diameter; ++y) {
                for (int x = 0; x <= diameter; ++x) {
                    int distanceSquared = (x - centerX) * (x - centerX) + (y - centerY) * (y - centerY);

                    if (distanceSquared >= radius * radius - 1 && distanceSquared <= radius * radius + 1) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
            }
                cout << endl;
            }
        }
};

class Quadrado: public Forma {
    public:
        void desenhar(){
            cout<< "\n";
            const int size = 5;

            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
        }
};

class Triangulo: public Forma {
    public:
        void desenhar(){
            cout<< "\n";
            const int size = 5;

            for (int i = 0; i < size; ++i) {
                for (int j = 0; j <= i; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
        }
};


class Retangulo: public Forma {
    public:
        void desenhar(){
            cout<< "\n";    
            const int width = 7;
            const int height = 4;

            for (int i = 0; i < height; ++i) {
                for (int j = 0; j < width; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }

        }
};

int main(){

    Circulo   c1;
    Quadrado  q1;
    Triangulo t1;
    Retangulo r1;


    c1.desenhar();
    q1.desenhar();
    t1.desenhar();
    r1.desenhar();


    return 0;
}