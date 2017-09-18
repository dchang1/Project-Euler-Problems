/* Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.

David Chang
*/
#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int number);

int main() {
  unsigned long long sum = 0;
  for (int i=2; i<2000000; i++) {
    if(isPrime(i)==1) {
      sum+=i;
    }
  }
  cout << sum << endl;
  return 0;
}

int isPrime(int number) {
  for(int i = 2; i<=sqrt(number); i++) {
    if(number%i==0) {
      return 0;
    }
  }
  return 1;
}
