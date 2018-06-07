#include <iostream>
#include <set>
#include <vector>
using namespace std;
void sort(vector<int> &list);  /* this function takes values from a vector and
                                  and inserts it into a set then back to the vector*/



int main (){

  #if 0

  set<int> number1;
  typedef set<int>::iterator si;



  number1.insert(30);
  number1.insert(8);
  number1.insert(9);
  number1.insert(10);



  for (si i = number1.begin(); i != number1.end(); i++)
  {
    cout << *i << endl;
  }
  // this simply just shows how to iterate throguh the components of a set

  #endif
  #if 1

   /* TODO: write a sort function for vectors that just adds everything
	 * to a set, and then copies back to the vector. */

   vector<int>numberlist;
   int temp;

   while (cin >> temp)
     {
       numberlist.push_back(temp);
     }
     cout<<endl;

     for (size_t i = 0; i < numberlist.size(); i++){
       cout << numberlist[i] << endl;
     }
     cout <<"After"<< endl;
     sort(numberlist);

      for (size_t i = 0; i < numberlist.size(); i++){
       cout << numberlist[i]<< " ";
     }
     cout << "\n";


    #endif

  return 0;
}
void sort (vector<int> &list ){

  set<int>temp;   // temporary set that will contain the order values from the arry
  typedef set<int>::iterator si;

  for(size_t i = 0; i < list.size(); i++){

    temp.insert(list[i]);     // this is transferring all the vallues in the array into the set

  }
  si a = temp.begin();
  for (size_t i = 0; i < list.size();i++){

    list[i] = *a;
    a++;

  }


}
