#include <iostream>
#include <string>
#include <algorithm>

#define MAX 100

using namespace std;

class ListaSeq {
private:
    int dados[MAX];
    int tamAtual;
    int tamMax;

public:
    ListaSeq() {
        tamMax = MAX;
        tamAtual = 0;
    }

    bool vazia() {
        if (tamAtual == 0){
            return true;
        }
        return false;
    }

    bool cheia() {
         if(tamAtual == tamMax){
            return true;
         }
         return false;
    }

    int tamanho() {
        return tamAtual;
    }

    bool modificaElemento(int e, int p) {
        
        if (cheia() || p > tamAtual + 1 || p <= 0) {
            return false;
        }

        if (p <= tamAtual) {
            dados[p - 1] = e; 
        } else
            { 
                for (int i = tamAtual; i >= p; i--) {
                    dados[i] = dados[i - 1];
                }
                dados[p - 1] = e;
                tamAtual++;
            }

        
        return true;
    }

    int removeElemento(int p) {
       
        if (p > tamAtual || p < 1) {
            return -1;
        }

        int elementoRemovido = dados[p - 1];

        
        for (int i = p - 1; i < tamAtual - 1; i++) {
            dados[i] = dados[i + 1];
        }

        tamAtual--;
        return elementoRemovido;
    }

    void showList() {
        for (int i = 0; i < tamAtual; i++) {  
            cout << dados[i] << endl;
        }
    }
};

int main() {
    ListaSeq lista;

    if (lista.vazia()) {
        cout << "lista vazia!" << endl;
    }

    
    lista.modificaElemento(10, 1);  
    lista.modificaElemento(20, 2); 
    lista.modificaElemento(30, 3);  
    lista.modificaElemento(40, 4);   

    lista.showList();  
    cout << "------------------------------" << endl;

    cout << lista.tamanho() << endl;

    cout << "------------------------------" << endl;
    lista.modificaElemento(50, 1);
    
    
    lista.modificaElemento(60, 2);  

    cout << "------------------------------" << endl;

    cout << lista.tamanho() << endl;

    cout << "------------------------------" << endl;

   
    lista.showList();  


    cout << "------------------------------" << endl;

    lista.modificaElemento(60, 5); 
    lista.showList(); 

    cout << "------------------------------" << endl;

    cout << lista.tamanho() << endl;


    cout << "------------------------------" << endl;

    
    lista.removeElemento(1);  
    cout << "apos remocao:" << endl;
    lista.showList();  


    cout << "------------------------------" << endl;

    cout << lista.tamanho() << endl;




   
    return 0;
}
