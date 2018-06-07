	/* TODO: write a program that reads (arbitrarily many) integers from
	 * stdin and outputs the *second* smallest one.  NOTE: you don't need
	 * to store many numbers (all at once, that is) to do this!  You'll
	 * only need a few integer variables.  Think about invariants! */

#include <iostream>
using namespace std;
#include <limits.h>


int main () {

  int min         =INT_MAX-1;
  int secondmin =(min+1);
  int input;

  while (cin >> input){

    if (input > secondmin){
      //do nothing
    }
    else if ((input > min)&&(input < secondmin) ){
      secondmin = input;
    }
    else if (input < min){
      secondmin = min;
      min       = input;
    }
  }
  cout << "The second smallest number is "<< secondmin << endl;





  return 0;
}

