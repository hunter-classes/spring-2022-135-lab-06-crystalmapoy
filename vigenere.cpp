#include <iostream>


char shiftChar(char o, int sh){
    int index;
    if(sh == 0 || !isalpha(o)){
        return o;
    }
    if (sh > 0){
        int a;
        if(isupper(o)){
            a = (int) 'A';
        }
        else {
            a = (int) 'a';
        }
        index = (((int) o + sh - a) % 26) + a;
    }
    else {
        int z = isupper(o) ? (int) 'Z' : (int) 'z';
        index = (((int) o + sh - z) % 26) + z;
    }
    return (char) index;
}

int charIndex(char o) {
    int ascii = (int) o;
    if((isupper(o))){
       ascii -= (int) 'A';
    }
    else{
        ascii -= (int)'a';
    }
    return ascii % 26;
}

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    std::string result = "";
    int i = -1;
    int index = -1;

    while(plaintext[++i]){
        if(!isalpha(plaintext[i])){
            result = result + plaintext[i];
        }
        else{
            result = result + shiftChar(plaintext[i], charIndex(keyword[++index % keyword.length()]));
        }
    }
    return result;
}