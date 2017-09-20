/* Problem 17
If the numbers 1 to 5 are written out in words: one, two, three, four, five,
then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out
in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
forty-two) contains 23 letters and 115 (one hundred and fifteen) contains
20 letters. The use of "and" when writing out numbers is in compliance with
British usage.

David Chang
*/
#include<iostream>
using namespace std;
int main() {
  int letters[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8,
    8, 6, 6, 5, 5, 5, 7, 6, 6, 7, 8, 3};
  // letters[0] = 0, letters[20] = twenty, 21 = thirty, 22 = forty, 23 = fifty
  // 24 = sixty, 25 = seventy, 26 = eighty, 27 = ninety, 28 = hundred
  // 29 = thousand, 30 = and
  int sum = 0;
  for(int i=1; i<=1000; i++) {
    if(i<=20) {
      sum+=letters[i];
    }
    else if(i<=99) {
      sum+=(letters[(i%10)] + letters[(i/10 + 18)]);
    }
    else if(i<1000) {
      if(i%100==0) {
        sum+=(letters[i/100] + letters[28]);
      }
      else if((i%100)<21) {
        sum+=(letters[i/100] + letters[28] + letters[30] + letters[i%100]);
      }
      else {
        sum+=(letters[(i/100)] + letters[28] + letters[30] + letters[((i%100)%10)] + letters[((i%100)/10 + 18)]);
      }
    }
  }
  sum += (letters[1] + letters[29]);
  cout << sum << endl;
  return 0;
}
