// cricket_chirps.cc : Akshayc C
// Desc: This program computes temperature as a function of cricket chirps per min

#include <iostream>
#include <cstdlib>
using namespace std;

int UserInput() {
  int input_var = 0;
  do {
    cout << "Enter chirps per minute (-1 = quit): ";
    bool check = cin >> input_var; //check the return val
  
    if(!check) {
      cout << "Please input a number only!" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "\n" << endl;
    } else if (input_var != -1) {
      return input_var;
    }
    
  } while(input_var != -1);
  cout << "Alright Bye!\n" << endl;
  exit(0);
}

float temperature(int chirps_per_min){
  return (chirps_per_min + 40) / (float) 4;
}

int main() {
  int cpm = UserInput();
  cout << "The temperature is : " << temperature(cpm) << " degree F." << endl;
  return 0; 
}


