/* Problem 4
A palindromic number reads the same both ways. The largest palindrome made
from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

David Chang
*/
#include<iostream>
using namespace std;
int main() {
  int n, reverse, product, digit, max = 0;
  for (int i = 100; i <= 999; i++) {
    for (int j = i; j <= 999; j++) {
      product = i*j;
      n = product;
      while (product != 0) {
        digit = product%10;
        reverse = reverse*10 + digit;
        product = product/10;
      }

      if (reverse == n && max<n) {
          max = n;
      }
      reverse = 0;
    }
  }
  cout << "Max palindrome = " << max << endl;
  return 0;
}
