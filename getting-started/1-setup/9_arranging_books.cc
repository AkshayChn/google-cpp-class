// arranging_books.cc: Akshay C
// Desc: This program finds all the ways
// you can arrange 6 books on a shelf from
// left to right by brute force

#include <iostream>
using namespace std;

bool Distinct(int array[], int size){
  for (int i = 0; i < size - 1; i++) { // read comment by @nbro
    for (int j = i + 1; j < size; j++) {
        if (array[i] == array[j]) {
            return false;
        }
    }
  }
  return true;
}

int main(){
  int total_distinct_arr = 0;
  for(int a = 0; a < 6; a++){
    for(int b = 0; b < 6; b++){
      for(int c = 0; c < 6; c++){
        for(int d = 0; d < 6; d++){
          for(int e = 0; e < 6; e++){ 
            for(int f = 0; f < 6; f++){
              int output_array[6] = {a,b,c,d,e,f};
              if(Distinct(output_array, 6)) { 
                  cout << output_array[0] <<  output_array[1] <<
                                              output_array[2] <<
                                              output_array[3] <<
                                              output_array[4] <<
                                              output_array[5] << endl;
                  total_distinct_arr++;
              }
            }
          }
        }
      }
    }
  }
  cout << "Total number of distinct arrangements is = " << total_distinct_arr << endl;
}
