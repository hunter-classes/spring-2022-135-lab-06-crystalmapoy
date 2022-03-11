#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{  
  std::cout << encryptCaesar("A Light-Year Apart", 5) << "\n";
  std::cout << encryptCaesar("Hello, World!", 10) << "\n";

  std::cout << encryptVigenere("Hello, World!", "cake") << "\n";
  
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << "\n";
  std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << "\n";
  
  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << "\n";
  std::cout << decryptVigenere("Jevpq, Wyvnd!", "CAKE") << "\n";
  
  std::cout << "\n";


  return 0;
  }