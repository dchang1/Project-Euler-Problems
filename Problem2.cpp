/* Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two
terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed
four million, find the sum of the even-valued terms.

David Chang
*/
#include<iostream>
using namespace std;
int main() {
  int sum = 0;
  int next_number = 2;
  int current_number = 1;
  int temp;
  while (current_number < 4000000) {
    if (current_number%2 == 0) {
      sum+=current_number;
    }
    temp = next_number;
    next_number += current_number;
    current_number = temp;
  }
  cout << "Sum = " << sum << endl;
  return 0;

}