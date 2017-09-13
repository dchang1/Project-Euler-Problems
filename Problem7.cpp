/* Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that
the 6th prime is 13.
What is the 10,001st prime number?

David Chang
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
  int count = 4;
  int number = 7;
  int if_prime = 0;
  while (count != 10001) {
    number+=2;
    for(int i = 3; i<=sqrt(number); i+=2) {
      if(number%i == 0) {
        if_prime=0;
        break;
      }
      else {
        if_prime++;
      }
    }
    if(if_prime != 0) {
      count++;
    }
  }
  cout << number << endl;
  return 0;
}
