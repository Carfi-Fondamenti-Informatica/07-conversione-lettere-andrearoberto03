//
// Created by asus on 08/12/2022.
//

#include "libreriaaa.h"
bool carattere(int x) {
    if ((x>=65&&x<=90) || (x>=97&&x<=122)) {
        return true;
    } else {
        return false;
    }
}

char conversione(char x){
    char z;
    if(x >= "a" && x <= "z"){
        z=x-32;
    }else if(x>="A" && x<="Z"){
        z=x+32;
    }
    return z;
}
