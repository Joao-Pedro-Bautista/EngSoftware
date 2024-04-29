#include <bits/stdc++.h>
using namespace std;



class Arquivo{

    //metodos e atributos necessarios para um arquivo

};

class ArquivoPDF: public Arquivo {
    void gerarArquivo(string nomeArquivo) {
        //metodo abstrato para gerar um arquivo de extensão PDF
    }
};

class ArquivoDOCX: public Arquivo {
    void gerarArquivo(string nomeArquivo) {
        //metodo abstrato para gerar um arquivo de extensão DOCX

    }
};

class ArquivoXLSX: public Arquivo {
    void gerarArquivo(string nomeArquivo) {
        //metodo abstrato para gerar um arquivo de extensão XLSX
    }
};






int main(){

    


    return 0;
}