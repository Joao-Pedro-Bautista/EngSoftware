#include <bits/stdc++.h>
using namespace std;


class Forma {
    public:
        void desenhar(int tipo){
            if(tipo == 1) { //circulo
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
            
            } else if(tipo == 2) {//quadrado
                const int size = 5;

                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j < size; ++j) {
                        cout << "* ";
                    }
                    cout << endl;
                }

            } else if (tipo==3) { //triangulo
                const int size = 5;

                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j <= i; ++j) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            } else if(tipo == 4){//retangulo
                const int width = 7;
                const int height = 4;

                for (int i = 0; i < height; ++i) {
                    for (int j = 0; j < width; ++j) {
                        cout << "* ";
                    }
                    cout << endl;
                }            
            } 


        }
}; 


int main() {
    Forma v1;

    cout << "\n";
    v1.desenhar(4);

}