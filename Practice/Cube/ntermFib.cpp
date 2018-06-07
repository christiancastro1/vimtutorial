/* write code that gets an integer n from the user and prints out
	 the n-th term of the fibonacci sequence. */

#include <iostream>
using namespace std;

int main (){

  cout << "What n term of the fibonacci sequence do you want ?"<<endl;
  int nterm;  // n-th term we are looking for
  cin >> nterm;

  int n1= 0; // first number of the sequence
  int n2= 1; // second number of the sequence
  int temp;

  for (int i =0; i< (nterm-2); i++)
  {
    temp= n2;
    n2= n1 + n2;
    n1= temp;
  }
  cout << "The " <<nterm<< " from the fibonacci sequence is "<< n2 << endl;







  return 0;
}