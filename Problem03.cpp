/* Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

David Chang
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
  int max;
  long long int number = 600851475143;
  while (number%2 == 0) {
    number = number/2;
    max = 2;
  }
  for(int i = 3; i<=sqrt(number); i+=2) {
    while(number%i == 0) {
      number = number/i;
      max=i;
    }
  }
  if (number>2) {
    max = number;
  }
  cout << "Max " << max << endl;
  return 0;
}
