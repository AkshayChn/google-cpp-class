// 3_input.cc: Akshay C.
// Desc: Use cin to get user input

#include <iostream>
using namespace std;

int main() {
  int input_var = 0;
  //do...while until good
  // cin returns FALSE if input FAILS
  do {
    cout << "Enter a number (-1 = quit): ";
    //note we have not put endl here
    
    if (!(cin >> input_var)) {
      cout << "Non-numeric value entered. Exit.." << endl;
      break;
      //exit the do while loop with the break
    }
    
    if (input_var != -1) {
      cout << "You entered " << input_var  << endl;
    }
    
  } while (input_var != -1);
  
  cout << "All done." << endl;
  return 0;
} 
