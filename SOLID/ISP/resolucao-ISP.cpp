#include <iostream>

using namespace std;

class Animal {
public:
    virtual void comer() const = 0;
    virtual void dormir() const = 0;
};

class Ave: public Animal {
public:
    virtual void voar() const = 0;
};

class Pato :public Ave {
public:
    void comer() const override {
        cout << "Pato comendo\n" << endl;
    }

    void dormir() const override {
        cout << "Pato dormindo\n" << endl;
    }

    void voar() const override {
        cout << "Pato voando\n" << endl;
    }
};

class Cachorro : public Animal {
public:
    void comer() const override {
        cout << "Cachorro comendo\n" << endl;
    }

    void dormir() const override {
        cout << "Cachorro dormindo\n" << endl;
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

    return 0;
}
