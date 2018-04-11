// stopwatch.cc : Akshay C.
// Desc : This program takes in user input in seconds and outputs equivalent Hours, min and secs

#include <iostream>
#include <cstdlib>
using namespace std;

int UserInput() {
  int input_var = 0;
  do {
    cout << "Enter number of seconds (-1 = quit): ";
    bool check = cin >> input_var; //check the return val
  
    if(!check) {
      cout << "Please input a number only!" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "\n" << endl;
    } else if (input_var != -1) {
      return input_var; // can return non three-dig nums
    }
    
  } while(input_var != -1);
  cout << "Alright Bye!\n" << endl;
  exit(0);
}

void ShowAsHMS(int inp) {
  int hours = inp / (60*60);
  inp -= hours * (60*60);
  int mins = inp / (60);
  inp -= mins * 60;
  int secs = inp;
  
  cout << "Hours : " << hours << endl;
  cout << "Minutes : " << mins << endl;
  cout << "Seconds : " << secs << endl; 
}

int main() {
  //int inp_secs = UserInput();
  ShowAsHMS(UserInput());
}
