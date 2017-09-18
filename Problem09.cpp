/* Problem 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

David Chang
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
  for (float i=1; i<333; i++) {
    for (float j=i+1; j<(1000-i)/2; j++) {
      float k=sqrt(pow(i,2) + pow(j,2));
      if (i+j+k == 1000) {
        cout << i*j*k << endl;
      }
    }
  }
  return 0;
}
