/* Problem 19
You are given the following information, but you may prefer to do some
research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century
unless it is divisible by 400.

How many Sundays fell on the first of the month during the twentieth century
(1 Jan 1901 to 31 Dec 2000)?

David Chang
*/
#include<iostream>
using namespace std;
int main() {
  int months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int days = 0, sum=0;
  for(int i=1; i<101; i++) {
    for(int j=0; j<12; j++) {
      if(i%4 == 0 && j==1) {
        days+=29;
      }
      else {
        days+=months[j];
      }
      if((days-5)%7==0) {
        sum++;
      }
    }
  }
  cout << sum << endl;
  return 0;
}
