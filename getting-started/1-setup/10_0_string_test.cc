// string_test.cc : Akshay C.
// Desc: This is a dummy program where 
// I play around with different strings.

#include <iostream>
using namespace std;

int main() {
  string str1 = "Hello world!";
  cout << str1 << endl;
  
  string str2 = "abcdefghijklmnopqrstuvwxyz";
  cout << str2 << endl;
  
  str2.swap(str1);
  cout << str2 << endl;
  
  str2.assign("abcdefghijklmnopqrstuvwxyz");
  cout << str2 << endl;
  
  str2.replace(0,4,"Hello!");
  cout << str2 << endl;
  
  
  swap(str1, str2);
  cout << str1 << endl;
  
  //str1.replace(0,5, 20, 22);
  str1.erase(0,5);
  cout << str1 << endl;
  
  
    
  return 0;
}
