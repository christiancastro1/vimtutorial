
/* exercise: brute force gcd.  Compute the greatest common
	 * divisor of n and k by an exhaustive search.  */
	/* IDEA: start with the largest possible value that the gcd
	 * could have, then walk *backwards* until you find the first
	 * value that divides both inputs. */
	/* Range of possibilities for a valid answer: {min{a,b}...1} */

#include<iostream>
using namespace std;
int main ()
{
  cout << "Enter 2 numbers to find their greatest common factor"<<endl;
  int numb1, numb2;
  int gcf;

  cin  >>numb1>>numb2;

  if (numb1 < numb2)
  {
    for (int i=numb1;((numb1%i==0)&&(numb2%i==0)); i--)
    {
         gcf = i;
    }
  }
  else {

    for (int i=numb2;((numb1%i==0)&&(numb2%i==0)); i--)
    {
         gcf = i;
    }
  }
  if (gcf == 0 ) gcf++;
  cout << "The greatest common factor is "<< gcf <<endl;

  return 0;
}

//completed
