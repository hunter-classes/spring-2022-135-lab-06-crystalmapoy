#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift){
    for (int i = 1; i <= rshift; i++){
        if (isalpha(c) == true){ 
            if (c == 'z' || c == 'Z'){
                if (c == 'z'){
                    c = 'a';
                }
                else if (c == 'Z'){
                    c = 'A';
                }
            }
            else {
            c = c + 1; 
            }
        }
        else { 
            c = c;
        }
    }
    return c;
}

std::string encryptCaesar(std::string c, int rshift) {
    std::string result = "";

    int index = -1;

    while (c[++index])
        result += shiftChar(c[index], rshift);

    return result;
}