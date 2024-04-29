#include <iostream>

using namespace std;

class Animal {
public:
    virtual void comer() const = 0;
    virtual void dormir() const = 0;
    virtual void voar() const = 0;
};

class Pato : public Animal {
public:
    void comer() const override {
        cout << "Pato comendo" << endl;
    }

    void dormir() const override {
        cout << "Pato dormindo" << endl;
    }

    void voar() const override {
        cout << "Pato voando" << endl;
    }
};

class Cachorro : public Animal {
public:
    void comer() const override {
        cout << "Cachorro comendo" << endl;
    }

    void dormir() const override {
        cout << "Cachorro dormindo" << endl;
    }

    void voar() const override {
        // cachorro nao consegue voar
    }
};

int main() {
    Pato pato;
    Cachorro cachorro;

    cout << "Pato:" << endl;
    pato.comer();
    pato.dormir();
    pato.voar();

    cout << "\nCachorro:" << endl;
    cachorro.comer();
    cachorro.dormir();
    // cachorro.voar(); // Não é possível chamar a função voar() para o cachorro, pois não foi implementada para ele.

    return 0;
}