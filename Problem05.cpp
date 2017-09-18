/* Problem 5
2520 is the smallest number that can be divided by each of the numbers from
1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?

David Chang
*/
#include<iostream>
using namespace std;
int main() {
  int number = 20;
  int product = 1;
  for(int i = 2; i <= number; i++) {
    if ((product%i != 0) && (i%(product%i) == 0)) {
      product = product*(i/(product%i));
    }
    else if (product%i != 0) {
      product = product*i;
    }
  }
  cout << "Product = " << product << endl;
  return 0;
}
