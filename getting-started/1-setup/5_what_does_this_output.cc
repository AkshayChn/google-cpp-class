#include <iostream>
using namespace std;

int main() {
  cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for (int c = 1; c < 10; c++) {
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      cout << i * c << '\t';
    }
    cout << endl;
  }
  return 0;
}

//what does this program output?

// multiplication table from 1 to 9

/*
 1	2	3	4	5	6	7	8	9

1| 1	2	3	4	5	6	7	8	9	
2| 2	4	6	8	10	12	14	16	18	
3| 3	6	9	12	15	18	21	24	27	
4| 4	8	12	16	20	24	28	32	36	
5| 5	10	15	20	25	30	35	40	45	
6| 6	12	18	24	30	36	42	48	54	
7| 7	14	21	28	35	42	49	56	63	
8| 8	16	24	32	40	48	56	64	72	
9| 9	18	27	36	45	54	63	72	81	
*/
