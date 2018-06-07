/* 1. TODO: write a function that takes 3 integers and returns
 * the maximal value */

/* 2 TODO: write a function that takes 3 doubles and returns the
 * average value */

 /*3.TODO: write a function that takes two integer parameters and
 * swaps the contents, i.e., if x=2 and y=5, then after calling
 * swap(x,y), y=2 and x=5 */

 /*4. TODO: write an isPrime function that takes an integer and returns a boolean
 * value indicating whether or not it is prime.  */
#include<iostream>
using namespace std;
 int max(int,int,int); // will get 3 numbers and returns the largerst
 double average (double,double,double);
 void swap(int&,int&);
 bool primetest(int&);

 int main()
 { //--------------------------1------------------------------------
   /*int numb1,numb2,numb3;
   cout <<"Enter 3 numbers to find the max"<<endl;
   cin  >> numb1>>numb2>>numb3;
   cout << "The maximum number is "<<max(numb1,numb2,numb3)<<endl;*/
   //--------------------------1-------------------------------------

   //--------------------------2-------------------------------------
   /*double numb1, numb2, numb3;
   cout << "Enter 3 decimals for their average" <<endl;
   cin  >> numb1 >> numb2 >> numb3;
   cout << "The average of these numbers is " << average(numb1,numb2,numb3)<<endl; */
   //--------------------------2-------------------------------------

   //--------------------------3-------------------------------------
  /* int x=5;
   int y=10;
   cout <<"Before the swap the numbers are x = "<<x<< " and y= "<<y<<endl;
   swap(x,y);
   cout <<"After swapppin x= "<<x<<" and y = "<<y<<endl;*/
  //---------------------------3------------------------------------
    int number;

    cout << "Not prime=0"<<endl;
    cout << "Prime = 1"  <<endl;
    while(cin >> number )
    {
      cout << primetest(number) << endl;
    }

   return 0;
 }
 int max (int x1, int x2, int x3)
 {
   int max;

   if ( (x1 > x2) && (x1 > x3) )
   {
     max = x1;
   }
   else if ( (x2 > x1) && (x2 > x3) )
   {
     max = x2;
   }
   else
   {
     max = x3;
   }

  return max; // for now
 }
 double average(double x1, double x2, double x3)
 {

   return ((x1 + x2 + x3)/3.00);
 }
 void swap (int &x, int &y)
 {
   int temp;
   temp = x;
   x=y;
   y=temp;
 }
 bool primetest(int &x)
 {
   if(x==1)
   {
     return false;
   }
   else if (x % 2 == 0)
   {
     return false;
   }

   else
   {
     int count = 0;
     int temp = x;
     bool value;

     x--;

     for (int i = x; i!=1; i--)
     {
       if (temp % i == 0 ){
         count++;
       }
     }
     if (count == 0){
       value = true;
     }
     else
     {
       value = false;
     }
     return value;

   }


 }


