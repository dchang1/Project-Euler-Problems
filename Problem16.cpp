/* Problem 16
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

David Chang
*/
#include<iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(2);
  int sum=0, carry=0;
  for(int i=1; i<1000; i++) {
    for(int j=0; j<v.size(); j++) {
      v[j]*=2;
      v[j]+=carry;
      if(v[j]>9) {
        carry=v[j]/10;
        v[j]-=10;
      }
      else {
        carry=0;
      }
    }
    if(carry!=0) {
      v.push_back(carry);
      carry=0;
    }
  }
  for(int i=0; i<v.size(); i++) {
    sum+=v[i];
  }
  cout << sum << endl;
  return 0;
}
