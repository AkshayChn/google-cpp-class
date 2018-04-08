// 3_input.cc: Akshay C.
// Desc: Use cin to get user input
// uses cin.clear() to recover from bad input 

#include <iostream>
using namespace std;

int main() {
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
    
    else if (input_var != -1) {
      cout << "You entered " << input_var  << endl;
    }
    
  } while (input_var != -1);
  
  cout << "All done." << endl;
  return 0;
} 
