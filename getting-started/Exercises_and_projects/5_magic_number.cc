// magic_number.cc : Akshay C
// This program manipulated a three digit number given by the user and produces a constant 1089
// This program also prints a list of three digit numbers that do not have this magic property

#include <iostream>
#include <cstdlib>
using namespace std;

int UserInput() {
  int input_var = 0;
  do {
    cout << "Enter a number (-1 = quit): ";
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

int ReverseThreeDigNum(int three_dig_num) {
  int units_dig = three_dig_num % 10;
  int tens_dig  = ((three_dig_num % 100) - units_dig) / 10;
  int hunds_dig = ((three_dig_num - (tens_dig * 10)) - units_dig) / 100;
      
  return (units_dig * 100) + (tens_dig * 10) + (hunds_dig); 
}

bool CheckMagicProperty(int i){
  int input = i;
  int reverse = ReverseThreeDigNum(input);
  //cout << "reverse it : " << reverse << endl;
  
  int sub = input - reverse;
  //cout << "subract : " << sub << endl;
  
  int reverse_sub = ReverseThreeDigNum(sub);
  //cout << "reverse it : " << reverse_sub << endl;
  
  int add = reverse_sub + sub;
  //cout << "add : " << add << endl;
  return (add == 1089 || add == -1089);
}

int main() {
  int input = UserInput();
  int reverse = ReverseThreeDigNum(input);
  cout << "reverse it : " << reverse << endl;
  
  int sub = input - reverse;
  cout << "subract : " << sub << endl;
  
  int reverse_sub = ReverseThreeDigNum(sub);
  cout << "reverse it : " << reverse_sub << endl;
  
  int add = reverse_sub + sub;
  cout << "add : " << add << endl;
  
  cout << "You mostly always get 1089 or -1089 with three dig numbers" << endl;
  
  cout << "Here are three dig numbers that don't have this property" << endl;
  for(int i = 100; i < 999; i++){
    if(!CheckMagicProperty(i)) cout << i << "\t";
  }
  cout << endl;
  
}
