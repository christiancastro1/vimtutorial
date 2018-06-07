#include <iostream>
#include <set>
using namespace std;
/* exercise: compute the intersection of two sets:
 * recall that the intersection of two sets is the set
 * consisting of the elements they have in common.  E.g.,
 * intersection of {2,3,4,5,6,7} and {1,2,4,7,11,44} is
 * {2,4,7}
 * */
 set<int>intersect(const set<int>& S1, const set<int>& S2);
int main (){

  set<int>set1;
  set1.insert(3);
  set1.insert(7);
  set1.insert(8);
  set1.insert(30);
  set1.insert(100);

  set<int>set2;
  set2.insert(1);
  set2.insert(25);
  set2.insert(100);
  set2.insert(20);
  set2.insert(8);

  typedef set<int>::iterator si;


  set<int> a = intersect(set1,set2);
  for (si i = a.begin(); i != a.end(); i++ ){
    cout << *i<< " " ;
  }


  return 0;
}
set<int> intersect(const set<int>& S1, const set<int>& S2) {

	set<int> I;
  typedef set<int>::iterator si;


  for(si set1 = S1.begin(); set1 != S1.end(); set1++){


    for (si set2 = S2.begin(); set2 != S2.end();set2++){
      if (*set1 == *set2)
      {
        I.insert(*set1);
      }
    }

  }
  return I;

}