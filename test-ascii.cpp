#include <iostream>
#include <cctype>

//isalphs(c) checks if character c is alphabetic
//isdigit(c) chekcs if character c is decimal digit
//isspace(c) checks if character is a white-space


//s.size() s.length() return number of characters in string s
//s + s returns concatenation of strings s and t
//s += t appends t to string s (append at end)
//s == t checks string equality (returns true or false)
//s[i] returns character at index i
//getline extracts all characters until end-of-line reached

int main () {
    
    /*
    std::string cat = "Cat";
    std::string emoji = ":3";
    std::string dog = "Dog"; 

    std::string message = cat + " " + emoji + " " + dog;
    */

    std::string message;
    std::cout << "Input: " << std::endl;
    std::getline(std::cin, message);

    for (int i = 0; i < message.length(); i++){
        std::cout << (char)message[i] << " " << (int)message[i] << std::endl;
    }

    return 0;
}