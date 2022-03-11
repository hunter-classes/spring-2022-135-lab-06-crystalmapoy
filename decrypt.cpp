#include <iostream>
#include "decrypt.h"
#include "vigenere.h"

std::string decryptCaesar(std::string plaintext, int rshift){
    std::string s = "";
    int i = -1;
    while(plaintext[++i]){
        s = s + shiftChar(plaintext[i], -rshift);
    }
    return s;
}

std::string decryptVigenere(std::string plaintext, std::string keyword){
    std::string result = "";
    int i = -1;
    int index = -1;

    while(plaintext[++i]){
        if(!isalpha(plaintext[i])){
            result = result + plaintext[i];
        }
        else{
            result = result + shiftChar(plaintext[i], -charIndex(keyword[++index % keyword.length()]));
        }
    }
    return result;
}