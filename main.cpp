#include <iostream>
#include "libreriaaa.h"

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


