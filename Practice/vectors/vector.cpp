#include<iostream>
#include<vector>
using namespace std;
/* TODO: write a function that takes a vector and searches
 * for a particular value x, returning true <==> x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */

bool find(int&,vector<int>&);
int main ()

{
  vector<int>list;
  int target,number;


  while (cin>>number)
  {
    list.push_back(number);
  }
  cin.clear();
  cout << "What number do you want to find?"<<endl;
  cin >> target;


  cout <<"Found is 1,not found is 0: "<<find(target,list)<<endl;


  return 0;
}
bool find(int &x,vector<int>&numbers)
{
  bool value;
  for (size_t i = 1; i <= numbers.size(); i++)
  {
    if(numbers[i-1] == x){
      value = true;
      break;
    }
    else
    {
      value = false;
    }

  }
  return value;

}


