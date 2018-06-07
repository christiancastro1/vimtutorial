/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.
 * */

 #include<iostream>
 #include<string>
 using namespace std;
 int count (char,string);
 void turnupper(string&);
 void reverse(string&);

 int main ()
 {

  string name="Christian";
  //cout <<count('i',name);
  //turnupper(name);
  //cout <<name;
  reverse(name);
  cout << name;




  return 0;
 }
 int count (char character, string name)
 {
  int count = 0;
  for (size_t i = 0; i< name.length();i++)
  {
   if (name[i] == character){
    count++;
   }

  }
  return count;
 }
 void turnupper (string &name)
 {
   for (size_t i = 0; i<name.length(); i++)
  {
   if ((int)name[i]<90)
   {

   }
   if((int)name[i] > 94)
   {
    name[i] = name[i]-32;
   }

  }
 }
void reverse (string &name)
{
 size_t n = name.length();
 char temp;

 for (size_t i =0; i< n/2; i++)
 {
   temp = name[i];
   name[i]= name[n-1-i];
   name[n-1-i] = temp;

 }



}




