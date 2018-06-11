/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 */
#include<iostream>
#include<vector>
using namespace std;
void sortpgs(vector <int> &);                // preconditions-receive an int vector
                                            // postconditions-sorts the vector. 
void change(vector <int> &, int, int);     // preconditions-receive an int vector
                                           // postconditions-switches the position of the data
bool binarysearch(vector <int>,int);      //preconditions-receive a sorted int array, and page
                                         //postcondition-returns true if found else false.

int main ()
{
	int page = 0; // page the the user will enter as important
	vector <int> pages; // vector that will keep track of all pages being submitted.
	cout << "Enter pages from a book that are important to you.." << endl;
	
	while (cin >> page){
		pages.push_back(page);
	}
    int searchpg = 0; // page number youre looking for
    cout << "Enter a page number to see if its in your list..." << endl;
	cin.clear();
	cin >>searchpg;
    sortpgs(pages);

	bool found = binarysearch(pages,searchpg);
	if (found == true) cout << "The page #" <<searchpg << " was found.!"<<endl;
	else cout <<"THE PAGE WAS NOT FOUND"<< endl;
   
#if 0  // just to print the vector to see if it works
	for(size_t t = 0; t <=pages.size()-1 ; t++){
		cout << pages[t] << "\t";
	}


#endif
	return 0;
}
	
// nonmember functions 
void sortpgs(vector <int> &pages){

	for (int last = pages.size(); last != 0; last--){

		int i = 0;
		for(int j = 1; j !=last; j ++){
			if ( (pages[i] <= pages[j]) ) i++;

			else {
				change(pages,i,j);
				i++;
			}
		}
	}
}
void change(vector <int> &pgs,int i, int j){
	int temp = 0; // temp variable to hold i value
	if (pgs[i] > pgs[j]) {
		temp = pgs[i];
		pgs[i] = pgs[j];
		pgs[j] = temp;
	}
}
bool binarysearch(vector <int> sortedpgs,int search){
	int  min   = 0;             // smallest index of array searching in
	int  max   = sortedpgs.size()-1; // largest index
	int  mid   = 0;

		while (min <= max) {
		    mid = (min + max)/2;

			if (sortedpgs[mid] == search){
				return true;
			}
			else if (search < sortedpgs[mid]){    // then open the middle of the left
				max = mid-1;
			}
			else if (search > sortedpgs[mid]){    // then open the middle of the righti
			    min = mid+1; 
			}
	
		}
		return false;
}




