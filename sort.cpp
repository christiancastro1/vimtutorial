/* Once again, some challenging vector exercises in case you missed them
 * the first time. */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <cstdio>
#include <algorithm>
using std::swap;

/* exercise: write a function that takes a vector and places the elements
 * in sorted order.  This is also kind of challenging. */

/* NOTE: size_t is an unsigned integer which is as large
 * as a machine register.  So, on a 64 bit system, it will
 * be a 64 bit unsigned integer.  The idea is that if you
 * want to store the size of something, this is the right
 * type. */
size_t indexOfSmallest(const vector<int>& A, size_t start) {
	/* TODO: write this (we basically did it in lecture) */
	/* TODO: add a line that changes the contents of
	 * A, try to compile, and take note of error messages
	 * that result (note that A is const). */
	return 0;
}

void sort(vector<int>& V) {
	/* TODO: finish our sorting procedure using the indexOfSmallest
	 * function.  Try using the std::swap function instead of your own. */
}

/* TODO: write another version of sort that doesn't make use
 * of the function indexOfSmallest, but instead computes that
 * value in a nested while loop. */
/* TODO: try to think of other ways to sort a vector.  Maybe even write
 * some code and try it out. */

int main()
{
	/* test our sorting function: */
	int x;
	vector<int> v;
	while (cin >> x) {
		v.push_back(x);
	}
	sort(v); /* this changes v */
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";

	/* TODO: size_t can be a little tricky when counting backwards.
	 * See if you can debug this for loop: */
	#if 0
	for (size_t i = V.size()-1; i >=0; i--) {
		cout << V[i] << " ";
	}
	/* Use gdb if nothing jumps out at you as the answer!  */
	#endif

	return 0;
}


/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */

