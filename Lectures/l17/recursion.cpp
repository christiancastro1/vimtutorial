#include <iostream>
using namespace std;
using std::cout;

/* TODO: WITHOUT compiling and running this, see if you can predict
 * the output of f(4). */
void f(int n) {
	if (n == 0) {
		cout << 0 << " ";
		return;
	}
	cout << n << " ";
	f(n-1);
	cout << n << " ";
}

/* TODO: write a *recursive* function for computing factorial (n!).
 * Try to follow the outline in the lecture notes. */
/* TODO: review mathematical induction, and if possible practice
 * some proofs.  */
/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */
/* TODO: write a function that recursively computes terms of the
 * fibonacci sequence.  Be careful -- it will likely be quite
 * slow on large inputs!  See if you can understand why.  */
int fibonacci (int n){

	if (n ==1){
		return 1;
	}
	if (n ==0){
		return 0;
	}

	else{ 
      return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(void)
{
	int max = 0;
	int i   = 0;
	cout << "Up to what nth point in the fibonacci sequence do you want to stop ...";
	cin  >> max;

	for(int index = 0;index < max ; index++){
		cout << fibonacci(index) << " ";
	}

	
	return 0;
}
