#include <iostream> /* <-- cout defined in here. */
/* NOTE: the "#include" just copy/pastes the contents
 * of the file where that line appears!  We need it
 * to help us read / write from standard input/output.
 * This is called a header*/
using std::cout;
/* NOTE: cout has a first name (cout) and a last name
 * which is (std).  Without this "using" statement we
 * would have to say "std::cout" instead of just "cout".
 * */

/* this is the starting point of the program: */
int main()

{

     int ival = 1024;
	 int &refval = ival;
	 cout << ival;
	/* NOTE: this return value is how our program communicates
	 * back to the shell that started it.  In this context, 0 means
	 * the program "worked" (didn't encounter any errors). */
	 return 0;
}
/* To run this on our computer, we have to first translate it into those tiny
 * instructions the cpu understands.  Do this with the help of g++:
 * $ g++ hello.cpp
 * Then run it with
 * $ ./a.out
 * NOTE: you can see some of the commands we ran during lecture in the
 * "bash-history" file.
 * */
/* TODO:GDB 
 * program (the tiny instruction *I mentioned).  Try this:
 * $ gdb a.out
 * (gdb) break main
 * (gdb) tui enable            // give us a gui 
 * (gdb) layout asm
 * (gdb) run
 * (gdb) si
 * <then just keep hitting enter until you're bored...>
 * list  -pulls up the source code
 * next  - to go to the next
 * r     - restart the debugging 
 * p variable - you can initialize a varible inside the debugger and then fix it later.
 * */
:/*NOTE: FUNCTION 
 * A function defenition has four elements
 *     -return type
 *     -function name 
 *     -parameter list
 *     -function body
      
       On most systems the value returned from main is a status indicator.
	   A return value of 0 indicates success while a non 0 value indicates error.

	    1. Member Function is a function that is defined as part of the class
		2. " . " dot operator to say we want to use a function and "()" operator
	    to call the function.
		3. The call operator () also encloses a list of arguments or possibly empty
    
   DEF: Precondition - is a stament giving the condition that is required to be true when a function is called.
 * The function is not guaranteed to perform as it should unless the precondition is true.
 *
 * DEF: Postcondition - is a statemnt describing what will be true when a function call is complete. If the function
 * is correct and the precondition was true when the function was called,then the function will complete, and the 
 * postcondition will be true when the function call is complete. 
 *
 * This is a way to describe a the functionality of a function. Should be the first thing to do when writing a function 
 *
 * DEF : Prototype - goes above main, it consist of a return type, function name, parameter list.This is where the pre and post
 * conditions should be define before writing the function body.
 *
 * TERMINOLOGY: the variable used in the parameter list like  double sum (int val1 ,double valu2) is called the *formal parameter*. 
 * When you actually make a call, like fn(a) in main, the variable a is the *actual parameter*.
 * Again, for by value parameters, the formal parameter is a COPY of the actual, and for by reference, it is
 * a SYNONYM for the actual.
 *
 *             Const Function   //Classes  
------------------------------------------------------------
   A. The keyword const can be placed after parameter list of a member function. 
       - A constant member function may examine the status of its object but its
	   forbidden from changing the object. 
	   
	   e.g double flow() const;
	 
	          Default Parameters 
------------------------------------------------------------
    A. A default argument is a value that will be used for an argument when no 
	actual argument is provided. 

	1. The default argument is specified only one inthe prototype-and not the in functions implementation
	2. If only some of the arguments have defaults then those arguments must be rightmost in the parameter list. 
	     e.g int date_check (int year; int month = 7 ; int day = 22)
		     //calling     date_check(1997)  // one 
			 //            date_check(1997,12,29)  //does not use feault  */
/*NOTE: INPUT AND OUTPUT OBJECTS 
 * The iostream library defines 4 IO objects
 *    - to handle input:  cin  object of type istream
 *    - to handle output: cout object of type ostream
 *    - to handle errors: cerr object of type ostream
 *    - to handle info  : clog object of type ostream
 *
 *  1. "<<"  ouput operator 
 *  e.g std::cout << Enter 2 numbers <<std::enl;
 *  2.  ">>"  input operator
 *  e.g cin >x;
 *      cin >>x>>y;
 
 *  3. "enl" this is called a manipulator - has the effect of ending the current line and 
 *  flushing the buffer associated wiht that device, this ensures that all the output 
 *  the program has generated so far is actually written to the ostream instead of sitting in memory.
 *
 *  4. namespace e.g std:: - namespaces allow us to avoid collisions between the names we define 
 *  and those define in inside a library.
 *
 *  We can also use the c standar library: #include <cstdio>
 *  e.g printf("Hello this is just a test");
 */   
/*NOTE WHILE STATEMENT 
 *   A while statement repeatedly executes a section of code so long 
 *   the given condition is true. 
 *   
 *   while (condition){
 *   statement
 *
 *   1. Reading an unknwon number of inputs
 *   e.g Lets say we want the sum of numbers:
 *   while (cin >> number){
 *   sum += number;
 *   }
 *   This will continue taking inputs until it reaches an erro like not inputing the 
 *   correct data type or hit end-of-file (ctrl-d ) 
 */
/*NOTE IF ELSE STATEMENTS
 *
 * if one condition is true then it executes the next else if 
 * or else. 
 *
 * 1. uses " ==" equality operator to see if variables contain the same value.(two equal signs) 

    general form:
  if (<boolean expression>) {
	      statements...
	  } else if (<boolean expression>) {
	      more statements...
	  } else {
	      statements if all other cases failed...
	  }
	  IDEA: exactly ONE of the blocks of statements will be excuted: that
	  of the first "match" (true expression), or the else at the end.

	 Boolean expressions: expressions that can evaluate to either
	 true or false.  For example, x == 3, or response != "yes".
	 other (binary) boolean operators:
	 ==
	 !=
	 <
	 >
	 <=
	 >=
	 The above work on integers, strings, chars, and lots more.
	 Furthermore, we have the following operators on booleans:
	 && -- this gives the logical "and"
	 || -- this gives the logical "or"
	 !  -- this gives the logical negation

	   SWITH 
------------------------------
	  switch (control value  ){
	  case ' ' :   // we can have many cases 
	  default:     // if no cases work then the default will execute 


	  }
 */
/*NOTE CLASSES
 * A class defines a type along with a collection of operations that are related
 * to that type.So ojects are type of a class. e.g int a; a is a type int
 *
 * Header file for a class has a suffix .h at the end and are in quotation marks.
 * e.g #include "Sales_item.h"

 * A. Functions 
 *     1. Member Function is a function that is defined as part of the class
 *     2. Inline member fucntions- placing a function defenition inside the class defenition. 
 *         -you dont have to write the implementation later // should be simple since theres some inefficiency 
 *
 * 1. " . " dot operator to say we want to use a function and "()" operator
 * to call the function.
 *
 * 2. Scope operater (::) among other uses the scope operator is used to access names
 * in a namespace. e.g std::cout denotes that cout is from the namespce std.
 * 
 * Classes give us the ability to create our own data types.
  1. Mechanisim to create objects and member functions 
  2. Support information hiding 
--------------------------------------------------------------------------------------------------

  e.g A class to store and manipulate a single point on a plane.
        - initialize
		- retrievel
		- shift
  It will contain to components that will be private and can only be acessed by member functions.

    class point {  // this is the class defenition or interface.The header will end with .h so point.h

	public:
	// this will be the section where the prototype of the functions will be defined
	void setPosition(double x, double y);
	void shift      (double dx, double dy);
	double  x       ()const {return m_x}; // the const means that these functions won't change the infomation
	double y        ()const {return m_y};
	
	private:   // only member functions can access this infomation.
	int m_x;
	int m_y;
	}
   
	The implementation of this class will be saved in another file called point.cpp
           - function implementation void point::setPostion(x,y)
		     basically saying that this function is in the scope of point
		   - in the body of the function member variables and functions can all be accessed
	
	- We can create as many constructors as we want but they must all have different parameter list so the 
	compiler can tell them apart.
------------------------------------------------------------
        		   CONSTRUCTOR
------------------------------------------------------------
  -constructor name is the same as the class, does not contain a return type.
  -they are implemented just like any other member function.
  -is a special type of subroutine called to create an object. It prepares the new object for use, 
  often accepting arguments that the constructor uses to set required member variables.
  -stablishes the invariant of the class. 

DEF: The invariant expression describes a condition that should always be true in an object life.  // important to prevent a bug. 

  1. Data emcapsulation enforces invariants
  2. Prevents unrestricted access

  If we dont make our own contructor an automatic constructor weill be created.
  - we can create as many constructors as we want, the parameter numbers must be different to tell them apart.

                    Copy Constructor
------------------------------------------------------------
- a copy constructor is a constructor with exactly one parameter
- to copy the data of an object to another
    e.g 
	point p1(-1,8);
	point p2(p1);   or point p2 = p1;

          Default Constructor (Default Arguments) 
------------------------------------------------------------
  A. A constructor with no paramters is called a default constructor.
      - when creating an instance the use of parenthesis is optional
	  - can be created using default arguments. 
	e.g  class point {
		 point() // default constructor or
		 point(int x = 0, int y = 0) // this is also a default constructor using default arguments.

  B. A default argument can be provied if the programmer doesnt provide any.
     - they should be implemented from right to left. 
	     e.g int date_check (int year; int month = 7 ; int day = 22)
		     //calling     date_check(1997)  // one 
			 //            date_check(1997,12,29)  

		           FRIEND FUNCTION 
------------------------------------------------------------
 A friend function is a nonmember function that has special access to the member variables of a function.
 In the prototype the keyword friend is added.This function prototype can be found on the 
 public section of the class. 

                DESTRUCTOR (DYNAMIC MEMORY)
------------------------------------------------------------
The primary purpose of the destrutor is to return an objects dynamic memory back to the heap when object is no longer needed. 
1. The name name of the deconstructor is ~ followed by the name of the class. e.g ~bag();
2. No parameters or return type.
3. Constructors are activated automatically.
              
              THE -> OPERATOR   (member selector operator)
------------------------------------------------------- 
 lets say p is a pointer to a class and m is member variable. We can acces the data using the pointer 
 2 ways.   1. (*p).m = 5;
           2. p->m;
	



 
*/
/*NOTE PRIMATIVE BUILT IN TYPES && TYPE CASTING

 (and built-in) datatypes:
* int -- for storing integers
* char -- single character data, e.g. 'h'
* double -- for floating point (an approx. to reals)
* float  -- single precision floating point
* bool   -- true of false 
*
* Types can be signed or unsigned 
*   1. signed represents positive and negative
*   2. unsigned values greater than 0 or equal
*
*   SIZEOF(DATATYPE)- NUMBER OF BYTES
*   1. char         : 1
*   2. bool         : 1
*   3. int          : 4
*   4. float        : 4
*   5. double       : 8

*   RANGE 
   ----------
*   For unsigned 0 to 2^(#bits) - 1 e.g with 4 bits its from 0 to 15
*   For signed  - the most significant bit is saved for the signed.Then 
*   we only have #bits-1 left. 2^(#bits-1) to 2^(#bits-1) -1. e.g 4bits signed -8 to 7
     
    Twos Complement 
------------------------------
  Turn number into binary and switch each binary value to the opposite then add 1.
*
*   TYPE CONVERSION 
*   ---------------
*    - assgigning a nonbool to a bool oject, the result is false if the value is 0 and true otherwise e.g bool b =42; //b is true
*    -assiginng a bool to a arithmetic type, the result is 1 if the bool is true and 0 if its false e.g   int  i= b; //i is 1
*    -assigning out of range value to unsigned, then it will go in a loop e.g unsigned char c = -1;  // value is 255 "wraps around"
*    -assigning an out of range value to signed, then it will give us undefined
*
*    -Type of a string literal is array of constant chars
   

     Type Casting 
----------------------
   - to change a type to another type its called typecasting
   - e.g to change integers to characters (char)i
   - this is called a c-style cast
   e.g 
   // print out part of an ascii table: 
	for (int i = 32; i < 128; i++) {
		// cout << i << " ";
		cout << (char)i << " "

	DEFAULT CONSTRUCTOR FOR BUITL IN TYPES
-------------------------------------------------------------
-built in types have a default constructor as well, when called it returns zero for numbers and 
false for bools.
   
  e.g  int a = int();   // a will containt 0

*/
/*NOTE POINTER && Dynamic Memory 
 * IDEA: POINTER HOLDS THE ADDRESS OF AN OBJECT  
 *  A. Pointers as Constant : int * const j_ptr = i_ptr; l
 *
 * A compound type is a type that is defined in terms of another type.
 * A pointer is a compound type that "points to" another type.(its an object in its own rights)
 *     - Declearing a pointer * followed by its name. e.g int *pointer;
 * A pointer holds the adress of another object by using (&) address operator. This operator provides the adress of the object.
 *  - the types must match b/c the type of the pointer is used to infer the type of the object 
 *  to which the pointer points to.
 *
 *     -When a pointer points to an object we can use the dereference operrator (*)to access that objects data.
        Dereference gives us direct access to the data, we can change it too. 
 *     e.g
 *     int ival=42;
 *     int *p= &ival;
 *     cout <<" The adress of ival is << p <<" it constains the value" << *p ;  //p holds the adress while *p holds 42.
 *
 *  We can have a pointer point to nothing basically NULL or nullptr or 0;
 *  Unlike the reference by value pointers can change throughout the program.
 * void* pointers is a special type that can hold the adress of any object
 * e.g void *p = &variable;

    ADDRESS OPERATOR (&)
------------------------------

 - The ADDRESS operator is used to to give an object and alias name. 
   Basically that variable will have another name the can access and alter that information;
   
    e.g 
    int a = 7;
	int &b = a;  // not b is the same as a
    
   - If i change a, them b changes, and vice versa. 

   They both contain the same information. 


   Pointer to Pointers 
------------------------------
        - A pointer is an object in memory, so like any object it has an address
		-We indicate each pointer level by its own *, that is we write ** for a pointer
		to a pointer, *** for a pointer to a pointer to a pointer.
		e.g
		int ival =1024;
		int *pi = &ival;
		int **ppi = &pi;

   Reference :to Pointers
------------------------------
	    - A referene is not an object, hence we may not have a pointer to a reference.
		-We can define a reference to a pointer  (its read from right to left)
		e.g   int *p
		      int *&r = p;
			  
    Allocating memory
------------------------------ 
There are two ways that memory gets allocated for data storage:

    1.Compile Time (or static) Allocation
       - Memory for named variables is allocated by the compiler
       - Exact size and type of storage must be known at compile time
       - For standard array declarations, this is why the size has to be constant
    2.Dynamic Memory Allocation
       - Memory allocated "on the fly" during run time
       - dynamically allocated space usually placed in a program segment known as the heap or the free store
       - Exact amount of space or number of items does not have to be known by the compiler in advance.
	   - They dont have an identifier
	   - To create a variable while the program is running we use the (new) operator.

    The new operator 
------------------------------
A. Object
The new operator allocates memory for an object and returns the adress of where
that object is located. 
e.g:  int *ptr; 
       prt = new int;   // prt holds the adress that new returned, notice how integer object doesnt have a name.

B. Class Object: We can also create an object of a class of our own. We must have a default constructor since 
thats what will be called to create an instance.Depending on on the arguments a specific constructor will be called.

e.g Point *ptr;
    ptr = new point(4,5) ; // this creates a new point with point at 4,5. The constructor makes a point.

C. Dynamic Arrays: We can create an array, returning the address of the first element. 
e.g int *ptr = new int[4] // this creates an array of size 4 

D. Pointer to an array of pointers : e.g Student **ptr = new Student *[5];    // pointer to pointer  this is more reliable than the one above.


    The delete operator
------------------------------
  The delete operator deallocates memory, it returns it back to the heap so it can be used later. 
  e.g int *ptr;
	  ptr = new int;
  When we no longer need this memory:   delete ptr;

  For arrays: int *ptr;
              ptr = new int[5];          free memory delte [] ptr;

 Pointer Arithmitic
------------------------------  
	 int *p1;                      Lets say the adress is 900 p1 = 900;
 p1 = new int [4];
 p1[2] = 20;
 cout << *(p1 + 2);           p1 +2 = 908  not 902. Because its 2*size of type. In this care its 2*4

TIP: p++ automatically goes to the next object. 

 point *p1;
 p1 = new point (1.0,2.0);
 cout << (*p1).x();
 cout << p1->x();   // this is the same as above. 

NOTE: When passing a pointer to a function its passed by value. Theres no such things as passed by pointer. 


		  DIFFERENT WAYS TO INITALIZE POINTER
------------------------------------------------------------
1. int *p l;    // pointer to an interger 
2. int const *p ;  //pointer to const int    or  const int *p
3. int * const p  // constant pointer 
4. int const * const p   // constant pointer to constant int   or const int * const p

*/
/*NOTE STRING
 * The string class has to be included before it can be used.
 *     #include <string>
 *     using std::string
 *
 *
 *
 *
 *
 */
/*NOTE VECTOR
 * #include <vector>
   using std::vector;

	vector<int> v;
	for (size_t i = 0; i < 20; i++) {
		printf("%lu\n",v.capacity());
		v.push_back(i);
		}
	We can also use other functions like v.push_back();// this adds an element to the back
	                                     v.pop_back();// this removes an elelent from back
*/
/* NOTE ARRAY
 *
 *  An array is a data structure that holds information based on what 
 *  they type.
 *      -the size is fixed. eg int a[10];
 *      -the size of this is 10.
 *      -to access the information we can use an index a[i];
 * IDEA An array is actually a pointer, so if you treat it like a pointer 
 *      - pass arrays as pointers : standard pratice
 *      - changing the value of the pointer inside another function wont affect the original
 *      unless you dereference it. 
 *      
 *      e.g lets say we have a function that receives an array treating it like a pointer.
 *      int mult (int *array){
	
         array = 0; // changing the value of the pointer has no effect
		 *array = 0; // if we dereference on the other hand it will change the first value of the array.

	     return 0;
		 }
   Question: STATIC ARRAY VS Dynamic Array
   Statics is a constant pointer e.g int * cosnt thats why it only points to the first element. Thats 
   why we have to add a value to move.  Dynamic array is usually non constant 

 *
 */
/* NOTE SETS
 * A set is similar to a vetor but it doesnt store duplicate values.
 * The values in a set a distinct.
 *
 * #include <set>    // neccessary inorder to use it.
 *
 * e.g 
 * 	set<int> S;
	for (int i = 0; i < 10; i++) {
		S.insert(i*i);
	}
	int x;
	while (cin >> x) {
		if (S.find(x) != S.end()) {
			cout << x << " was a square.\n";
		} else {
			cout << x << " was not a square.\n";
		}
	}

 How to go though the elements of a set?
 e.g 
 	for (set<int>::iterator i = S.begin(); i != S.end(); i++) {
		cout << *i << endl;
	}
                    Iterating 
               ------------------
typedef set<int>::iterator si;
now you can type si instead of set<int>::iterator...
   - IDEA typedef  allows us to create an alias for a type.
       -syntax : typedef datatpye newmane ; 
	   - can also be used with pointers
 */
/*NOTE RECURSIVE 
 * - recursive is the notion of perfoming the same call function withing a function 
 *   until a certain condition is met.
 *
 *   We ccan think of it like the proofs of indcution, to prove a big problem 
 *   we can assumme the function works for one then it will work for the next
 *   call until a base case is reached. 
 *
 *   e,g
 *   To prove the the sum of the numbers from 1 2 3 ... n is equal to  n(n +1 )/2
 *
 *   IDEA Proof By German mathmatician karl fredrich gauss (1777-1855)      TIP : Sum of i
 *          lets say S = 1 +  2   +   3   +  4 +.....n
 *                   S = n +(n-1) + (n-2) +(n-3)+    1    // we just switched it around from n back to 1
                     ---------------------------------
					2S =(n + 1) + (n +1) + (n + 1) ...(n+1) // since we have n term in totoal
					2S= n(n+1)
					S = n(n + 1)/2      // sum for numbers from 1 ... n 

	1. Sum of i^2 :  S = (n(2n + 1)(n + 1))/6  ;

Question: What does this print ? 
void f(int n) {
	if (n == 0) {
		cout << 0 << " ";
		return;
	}                  
	cout << n << " ";
	f(n-1);               // important point
	cout << n << " ";

	  PRINT: 4 3 2 1 0 1 2 3 4.

	  IDEA Evey time the function is called the call stack grows downwards until a condition is met.
	     - when the condition is met its goin
		 - at the important point it will return the value of n then print it.
		 -it will go back to remove another element and print.
		 -it will continue doing this until the return adress is sent back to the calling function. 

		      CALL STACK f(n-1)
         --------------------
		    cout <<"0" ;             //f(0)
         --------------------
		    f(1) =1                 //f(2-1)
		 --------------------
		    f(2) =2                 //f(3-1)
         --------------------
		    f(3) =3                 //f(2-1)
		 --------------------
		    f(4) =4                 //f(4)
*/
/* NOTE HEADERS 

 Some useful headers. 

   A.  #include <cassert>   
   - primary item in the cassert facility is assert, which is like a function wiht one argument.
   - argument is a true or false, depending on the argument a certain action will be taken
          1. if its true then nothing will occr
		  2. if its false then it will display a message and hault the program. 
   - these checks are called assertions. 
   e.g assert (c >= MINIMUM_CELCIUS)
   -assertions can be turned off by using #include NDEBUG  before the programs include directives. 

   B.  #include <cstdlib>    // using namespace std
    1. Contains  EXIT_SUCCESS
    2. size_t  // holds only nonnegative numbers l

 */
/*NOTE NAMESPACE 
 A. When a program uses different classes written by other programmers theres a possibility of 
 a name comflic.
     - solution to this is an orgranization technique called namespace.First we need a macro gaurd or header. 

   
                   Header Gaurd
--------------------------------------------------------------
1.Header guards are little pieces of code that protect the contents of a header file from being included more than once.

2.Header guards are implemented through the use of preprocessor directives. The C/C++ preprocessor directives all start 
with the # character. 
     - they are invoked by the compiler before compilation.

e.g Problem:
                           #include "A.h"          #include "A.h"
class A                    class B                 #include "B.h"
{                          {
  int x;                      A a;
public:                       int y;               A a;
};                         public:                 B b;
                           };


A.h                         B.h                      htest.cpp

Running g++ htest.cpp results in the following error:

In file included from B.h:1,
                 from htest.cc:2:
A.h:2: error: redefinition of `class A'
A.h:2: error: previous definition of `class A'

SOLUTION: One solution is to simply delete the #include "A.h" in htest.cpp

                    or 
To create header guards place:
#ifndef unique_symbol
#define unique_symbol
at the beginning of the header file to be protected and #endif  (unique_symbol) at the end of the header file.

IDEA The first time one of the unique symbols in a header guard is encountered, the #ifndef statement is true.
The symbol is not defined. Because of that, all of the code between the #ifndef and #endif is included and sent 
to the compiler. If the symbol were defined, the code between the directives would be ignored. 

                        NAMESPACE 
------------------------------------------------------------
 In the class defenition after the macro gaurd.
  namaspce name_youchoose {
    // class defenition here
  }
#endif // end of macro gaurd. 

 In the class implementation as well 
  namespace name_youchoose {
   // class implementation 
  }
When we repeat the namespce like we just did, we're adding groups to the namespace.
  - may be in same file or different files. 

  USING IT IN MAIN 
  1. using namespace name_youchoose; 
       - makes all items available   // similar to using namespace std;

  2. using name_youchoose::Point;
       - if we want to use a specific item  // similar to using std::cin;

  3. name_youchoose::Point p;   // if you dont include using at the top. This is inside main.


*/
/* NOTE INFORMATION 
     1. Object - its a region in memory with a type that specifies what infomation can be 
     stored there. 
 
     2. Variable - its the name for the object. 
         - a named object is called a variable. 
             
             e.g typdef *int myptr
             myptr p ; // same as int *p
             myptr a[10] // same as int a[0];
	 3. The dot (.) operator and the arrow(->) are used to reference individual members of classes
	 unions and structures. 
	 3. static keyword - indicates that the entire class has one copy of this variable, basically every object 
	 contains the same variable.

	 4. Passing an argument by value uses the copy constructor. 
   
 */
/*NOTE OPERATOR OVERLOAD 
   The built in types that c++ provides are all able to use the operator functions like
   == , != , < , > , <= and so on. When we create a new class, and instantiate an object
   these operators are not available for use since they are not defined for that instance. 

   Operators are essentially functions that take arguments: just like function overloading this 
   is the same concept. We will define our own operators for our class.

   e.g Lets say we want to test if two points are equal, usally we would do if (p1 == p2) cout<<" this are equal;
   But this can't be accomplished yet because the compiler doesnt know what == means for the class point. 
   Hence we have to define it by overloading the operator. 

   bool operator ==(const point& p1, const point& p2){
    
     return (p1.x() == p2.x() && p1.y() == p2.y())
   }
   When this function is activate p1 == p2 , the parameters that it will receive are p1 and p2.

   Defining one operator makes it easier to define others like !=. Its basically going to be calling a function 
   inside a function. 

   bool operator !=(const point& p1, const point& p2){

      return !(p1 == p2);
   }
   NONMEMBER FUNCTION
------------------------------
 -For the example from above its a nonmember function that takes two operands.

  MEMBER FUNCTIONS   (this) 
------------------------------
 -if it was a member function it would only take one operand.
 e.g: 
 bool operator ==(const point& p2){
    
     return (m_x == p2.x() && m_y == p2.y())
   }
   - When we call a memeber fucntion we do so on behalf of an object. The function is bounded to the object. 
   - Member functions access the object on which they were called though an extra implicit parameter name this.
     WHen we call a member function (this) is initialized with the adress of the object on which the function was invoked.
    - This gives us direct access to the member variables

	We can return *this, basically returning the object on which the function was called
	e.g  += 
	  Sales_data& Sales_data::combine (const Sales_data &rhs){
	     units_sold += rhs.units_sold;
		 revenue += rhs.revenue;
		 return *this;

	  }
 			
     INPUT AND OUTPUT OVERLOADING (MUST BE PASSED BY REFERNECE AND RETURNED BY REFERENCE.)
	--------------------------------------------------------------------------------------
  The c++ data types can be written and read using standard input and output. We can overload this operators so
  they work for our own class objects. 

  1. The >> operator which is used to read input from an istream object.
  2. The << operator which is used to write ouput to an ostream object.  

   e.g int i;
       cin >> i;   // reads the value of i from the standard input
	   cout << i ;

    We know that cin is an object of type istream and cout is and object of type ostream.
	The prototype for these overloaded operators would look something like this: 

	e.g:  ostream& operator <<(ostream& outs, const& point p)

	Notice how the return type is a reference return type, this is because we don't want multiple cout objects since the iostream doesnt have a copy constructor.
	- our intention is for the << function to print the point p to the ostream outs.
	- the outs is by reference meaning that we can change it

	IMPORTANT: For the >> overloading, it needs to be a friend functions since it needs direct access to the member varibles.

 */

TODO: RENEW DACA IMPORTANT !!!
TODO: Assignment 2 is due monday !!! 

DATE: 6/26/18


