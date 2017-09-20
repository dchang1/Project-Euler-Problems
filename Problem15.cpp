/* Problem 15
Starting in the top left corner of a 2×2 grid, and only being able to move
to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?

David Chang
*/
#include<iostream>
#include<cmath>
using namespace std;
long double factorial(int n);

int main() {
  long long int array[20][20];
  for(int i=0; i<20; i++) {
    for(int j=0; j<20; j++) {
      if(j==0 && i==0) {
        array[i][j]=2;
      }
      else if(j==0 && i!=0) {
        array[i][j]=array[i-1][j]+1;
      }
      else if(j!=0 && i==0) {
        array[i][j]=array[i][j-1]+1;
      }
      else {
        array[i][j]=array[i-1][j] + array[i][j-1];
      }
    }
  }
  cout << array[19][19] << endl;
  return 0;
}
