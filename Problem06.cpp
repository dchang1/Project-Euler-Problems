/* Problem 6
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.

David Chang
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
  int difference, number = 100;
  float square, sum_of_squares = 0;
  for (int i = 1; i <= number; i++) {
    sum_of_squares = sum_of_squares + pow(i, 2);
  }
  float sum = (number*(number+1))/2;
  square = pow(sum, 2);
  difference = square - sum_of_squares;
  cout << difference << endl;
  return 0;
}
