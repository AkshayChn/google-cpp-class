// weekly_sales.cc: Akshay C
// Desc: This program finds the best option for a given WeeklySales in no_of_shoes
int UserInput();
float CalcMethod1(int a);
float CalcMethod2(int a);
float CalcMethod3(int a);

#include <iostream>
using namespace std;

int main() {
  int WeeklySales = UserInput();
  
  float salary_1 = CalcMethod1(WeeklySales);
  float salary_2 = CalcMethod2(WeeklySales);
  float salary_3 = CalcMethod3(WeeklySales);
  cout << "Assuming 6 hour work day" << endl; 
  cout << "Option 1 pays : $" << salary_1 << endl;
  cout << "Option 2 pays : $" << salary_2 << endl;
  cout << "Option 3 pays : $" << salary_3 << endl;
  
  return 0;
}

float CalcMethod1(int a) {
  return 600;
}
float CalcMethod2(int a) {
  return (6*7*6) + (((float)10/100) * 225 * a);
}
float CalcMethod3(int a) {
  return (((float)10/100) * 225 * a) + (20 * a);
}


int UserInput() {
  int input_var = 0;
  //do...while until good
  // cin returns FALSE if input FAILS
  do {
    cout << "Enter a number (-1 = quit): ";
    //note we have not put endl here
    
    if (!(cin >> input_var)) {
      cout << "Please input Weekly Sales in number of shoes sold!" << endl;
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

