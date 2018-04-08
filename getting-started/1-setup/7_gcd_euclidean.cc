/*
  gcd_euclidean.cc: Akshay C
  Desc: This program is to implement the euclidean algorithm to compute gcd of two numbers
  Here I do the division based version given in wikipedia
*/

#include <iostream>
using namespace std;

int EuclideanGcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  cout << "Gcd of 25 and 45 is " << EuclideanGcd(25, 45) << endl;
  cout << "Gcd of 4 and 12 is " << EuclideanGcd(4, 12) << endl;
  cout << "Gcd of 72 and 18 is " << EuclideanGcd(72, 18) << endl;
  cout << "Gcd of 9 and 81 is " << EuclideanGcd(9, 81) << endl;
  cout << "Gcd of 92342342 and 2432 is " << EuclideanGcd(92342342, 2432) << endl;
}
