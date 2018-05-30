/* TODO: brute force test for perfect cubes.  Check if
	 * n = k^3 for some integer k.  Complete */

#include <iostream>
using namespace std;

int main ()
{
  int number;
 // int temp;
  int cube;

  cout << "Enter a number to check if its a perfect cube" <<endl;

  while (cin >> number){  // the input is stored in number
    int i=1;

    while (true)
    {
      cube = i*i*i;
      i++;

      if (cube == number)
      {
        break;
      }
      else if(cube > number)
      {
        break;
      }
    }
    if (cube == number){
      cout << "The number "<< number << " is a perfect cube."<<endl;
    }
    else {
      cout << "The number "<< number << " is not perfect cube."<<endl;
    }



  }// end while











































  #if 0
    while (cin >> number){  // the input is stored in number

  temp = number; // save the state of the input since were going to divide the number we obtained

    if(number % 2 == 0) // check to see if its even or odd
    {
      // if its even then we do this
      for(int i = 0; i < 3; i++)
      {
        number /=2;
      }
      if (number == 1) // perfect cube
      {
        cout << "The number "<< temp << " is a perfect cube."<<endl;
      }
      else
      {
         cout << "The number "<< temp << " is not a perfect cube."<<endl;
      }

    }
    else // else we do this for odd  3
    {
      for(int i = 0; i < 3; i++)
      {
        number /=3;
      }
      if (number == 1) // perfect cube
      {
        cout << "The number "<< temp << " is a perfect cube."<<endl;
      }
      else
      {
         cout << "The number "<< temp << " is not a perfect cube."<<endl;
      }
    }

  }// for the while loop

  #endif

  return 0;
}