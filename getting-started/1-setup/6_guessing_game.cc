/* guessing_game.cc : Akshay C.
 Desc: this implements a guessing game
 Make a func that generated a random num of given range
 get user input and validate it
 repeat this until she guesses right
 repeat the game with new numbers
*/
#include <iostream>
#include <cstdlib> // we need this to use rand()
using namespace std;

int GenerateRandIntInRange(int range_max) {
  // returns a rand num in range [1, range_max] both inclusive
  return (rand() % range_max) + 1;  
}

int UserInput() {
  int input_var = 0;
  //do...while until good
  // cin returns FALSE if input FAILS
  do {
    cout << "Enter a number (-1 = quit): ";
    //note we have not put endl here
    
    if (!(cin >> input_var)) {
      cout << "Please input a number only!" << endl;
      //don't break
      //use cin.clear() to clear input stream
      cin.clear();
      cin.ignore(10000, '\n');
      //single quotes need to be used here
      cout << "\n" << endl;
      // this enters an infinite loop
      //changes the input_var value to 0
    }
    
    else if (input_var != -1) {
      //cout << "You entered " << input_var  << endl;
      return input_var;
    }
    
  } while (input_var != -1);
  
  cout << "Alright Bye!\n" << endl;
  return -1;
}

void GuessingGame() {
  cout << "*****************************************************" << endl;
  cout << "Ok I have a number in mind and it's between 1 and 100" << endl;
  cout << "            You have to guess it!"                     << endl;
  cout << "*****************************************************" << endl;
  
  int rand_int = GenerateRandIntInRange(100);
  int user_int;
  
  do{
    user_int = UserInput();
    if(user_int == -1) exit(0);
    if(user_int > rand_int) cout << "\nToo *BIG*, Guess agian!\n" << endl;
    if(user_int < rand_int) cout << "\nToo SMALL, Guess again!\n" << endl;
  
  }while(user_int != rand_int);
  
  cout << "\n!!!!!!! You guessed right! It was indeed " << rand_int << " !!!!!!!!!!\n" <<endl; 
}

int main() {
  srand(time(0));
  while(1) GuessingGame();
}
