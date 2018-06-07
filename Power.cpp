	/* TODO: read those notes I gave you (l1.pdf was the file name) and
	 * try to do the exercises at the end. */

	/* TODO: given an integer n, find exponent of the largest power of two that
	 * divides n.  Example: if n = r*8 with r odd, then you should output 3
	 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
	 * number's factorization into primes.) */
	/* IDEA: keep on dividing n by two until we can't,
	 * and keep track of how many times it worked. */
  // from lecture 3.
#include<iostream>
using namespace std;
int main ()
{

  int number;
  cout<< "Enter a number"<<endl;

  while (cin >> number){
  int temp = number;

  if (number % 2 == 0)  // then its even
  {
     int count = 0;
     while (number%2 == 0)
     {
       number /= 2;
       count++;
     }
     cout << "The highest power of 2 in "<<temp<< " is "<<count<<endl;
  }

  else
  {
     int product= 1;
     int count  = 0;
     while (product < number)
     {

       product *= 2;
       count++;
     }
     count--;

     cout << "The highest power of 2 in "<<temp<< " is "<<count<<endl;

  }

   } // end of while loop







  return 0;
}
