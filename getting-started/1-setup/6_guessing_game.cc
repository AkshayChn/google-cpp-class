// guessing_game.cc : Akshay C.
// Desc: this implements a guessing game
// Make a func that generated a random num of given range
// get user input and validate it
// repeat this until she guesses right
// repeat the game with new numbers
#include <iostream>
#include <cstdlib> // we need this to use rand()
using namespace std;

int GenerateRandIntInRange(int range_max) {
  // returns a rand num in range [1, range_max] both inclusive
  return (rand() % range_max) + 1;  
}

int UserInput() {
  int input_var = 4;
  //do...while until good
  // cin returns FALSE if input FAILS
  do {
    cout << "Enter a number (-1 = quit): ";
    //note we have not put endl here
    
    if (!(cin >> input_var)) {
      cout << "Non-numeric value entered. Exit.." << endl;
      //don't break
      //use cin.clear() to clear input stream
      cin.clear();
      cin.ignore(10000, '\n');
      //single quotes need to be used here
      cout << "Input stream cleared" << endl;
      // this enters an infinite loop
      //changes the input_var value to 0
    }
    
    if (input_var != -1) {
      cout << "You entered " << input_var  << endl;
      return input_var;
    }
    
  } while (input_var != -1);
  
  cout << "All done." << endl;
}



int main() {
  //cout << RAND_MAX << endl; RNAD_MAX is not globally defined
  for(int i = 0; i < 10; i++)cout << GenerateRandIntInRange(5) << "  ";
  cout << endl;
  UserInput();
}
