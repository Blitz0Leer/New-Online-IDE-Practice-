#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <ctime>


int selection, guess, randNumber;  

int main() {
  
  srand((unsigned int)time(NULL));

  std::cout << "Welcome to the random number game!" << std::endl << sleep(1) << "Press enter to continue...";
    while (std::cin.get() != '\n'); 
  std::cout << "\033[0;0H\033[2J";

  std::cout << "Please select your number range \n";
  std::cout << "[1] Easy (1 - 10) \n";
  std::cout << "[2] Medium (1 - 50) \n";
  std::cout << "[3] Hard (1 - 100) \n";
  std::cin >> selection; 
  std::cout << "\033[0;0H\033[2J";
    if (selection == 1) {
      int randNumber = rand() % 10 + 1;
      
      } else (selection = 2); {
      int randNumber = rand() % 50 + 1;
      
      }
  
    std::cout << randNumber;
  }
