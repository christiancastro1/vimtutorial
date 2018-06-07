/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
 #include<iostream>
 #include<vector>
 using namespace std;
 bool find (int&,vector<int>&);

 int main ()
 {
   int number;
   int page;
   vector <int>list;
   while (cin >> number)
   {
     list.push_back(number);
   }
   cin.clear();
   cout <<"What page number do you want to find?"<<endl;
   cin >> page;
   cout << find (page, list);



   return 0;
 }
 bool find (int &target, vector<int>&pagenumbers)
 {
   int min = 0;
   int max = pagenumbers.size()-1;
   int mid;

   while (min <= max)
   {
     mid = (min + max)/2;

     if (target == pagenumbers[mid])
     {
       return true;
     }
     if (target < mid)
     {
       max = mid;
     }
     if(target > mid)
     {
       min = mid;
     }

   }
   return false;

 }