#include<iostream>
#include<array>
using namespace std;

void printVertically(unsigned long n);
void f(int n);
int power(int base, int power);
bool search(int* A, int size, int x);

int main (){

	//printVertically(2358);
	// cout << power(2,3);
		array <int, 10> B= {1,2,3,4,5,6,7,8,9,10};
		search (B,10,2);





  return 0;
}
void f(int n) {
	if (n == 0) {
		cout << 0 << " ";
		return;
	}
	cout << n << " ";
	f(n-1);

	/* TODO: make sure you can trace the sequence of recursive calls that
	 * would result from calling say, f(3).  Flip the order of the cout
	 * statement and the recursive call, and make sure you understand
	 * the output in both cases.

    When we flip the order the recursive call continues until it reaches 0, all the elements are put into a stack. So when its 0 the compiler checks the stack to see if theres anything left. The it goes to the next line witch is cout and pops the values from the stack until its empty


	*/
}
void printVertically(unsigned long n)
{
	int temp;
	if (n == 0){
		return;
	}
	else{
		temp = n %10;
		printVertically(n/10);
		cout << temp << endl;
	}
}

// TODO: write a recursive function to compute a^b (a to the b power)
int power (int base, int exponent){

	if (exponent == 1)
		{
		return base;
		}
  	return ( base * power(base,exponent-1));

}
/* TODO: try to turn the following "plain-English" procedure into
	 * a recursive program:
	 * 1. if the array is empty (size < 1) return false.
	 * 2. if x is less than the value in the middle, recursively search
	 *    the left subarray, else recursively search the right subarray.
	 * Test out your program, and try to prove (by induction) that it works.
	 * (There are some subtle points about making sure the size is always
	 * decreasing...)
	 * */
#if 1
bool search(int* A, int size, int x)
{
	if (size < 1 )return false;

	else if (x < A[size/2]){
		return (A,(size/2),x);
	}
	else if (x > A[size/2]){

		return (A+((size/2)+1),(size -(size/2)+1),x);

	}
	else{
		return true;
	}

}
#endif






