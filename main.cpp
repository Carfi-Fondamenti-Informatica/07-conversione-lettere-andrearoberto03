#include <iostream>
#include "libreriaaa.h"

bool carattere(char x);

char conversione(char x);

using namespace std;

int main() {
    char a;
    char y;
    cin >> a;
    if (carattere(a)==true){
        y=conversione(a);
        cout<< y<< endl;
    }else{
        cout<<"errore"<<endl;
    }
    return 0;
}


