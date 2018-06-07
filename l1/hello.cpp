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

/* TODO: follow the tutorial on "building on the command line" from our
 * homepage.  Then just spend some time experimenting and see what you
 * can learn.  */

/* TODO: take a look at what's really involved in running this
 * program (the tiny instruction
 *I mentioned).  Try this:
 * $ gdb a.out
 * (gdb) break main
 * (gdb) tui enable
 * (gdb) layout asm
 * (gdb) run
 * (gdb) si
 * <then just keep hitting enter until you're bored...>
 * */

/* NOTE: a few takeaways from our first lecture:
 * 1. There is a huge gap in abstraction levels that must be bridged.
 * 2. The compiler is your friend, but you still need to give it a
 *    seemingly unnatural amount of detail...
 * *
 */

/*NOTE: FUNCTION 
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


		
  */

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
 * 1. uses " ==" equality operator to see if variables contain the same value. 
 *
 */
/*NOTE CLASSES
 * A class defines a type along with a collection of operations that are related
 * to that type.So ojects are tpyes of a class. e.g int a; a is a type int
 *
 * Header file for a class has a suffix .h at the end and are in quotation marks.
 * e.g #include "Sales_item.h"
 *
 * 1. Member Function is a function that is defined as part of the class
 * 2. " . " dot operator to say we want to use a function and "()" operator
 * to call the function.
 *
 * 3. Scope operater (::) among other uses the scope operator is used to access names
 * in a namespace. e.g std::cout denotes that cout is from the namespce std.
 *
*/
/*NOTE PRIMATIVE BUILT IN TYPES

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
*
*   RANGE 
*   For unsigned 0 to 2^(#bits) - 1 e.g with 4 bits its from 0 to 15
*   For signed  - the most significant bit is saved for the signed.Then 
*   we only have #bits-1 left. 2^(#bits-1) to 2^(#bits-1) -1. e.g 4bits signed -8 to 7
*
*   TYPE CONVERSION 
*   ---------------
*    - assgigning a nonbool to a bool oject, the result is false if the value is 0 and true otherwise e.g bool b =42; //b is true
*    -assiginng a bool to a arithmetic type, the result is 1 if the bool is true and 0 if its false e.g   int  i= b; //i is 1
*    -assigning out of range value to unsigned, then it will go in a loop e.g unsigned char c = -1;  // value is 255 "wraps around"
*    -assigning an out of range value to signed, then it will give us undefined
*
*    -Type of a string literal is array of constant chars
*/
/*NOTE POINTER
 * A compound type is a type that is defined in terms of another type.
 * A pointer is a compoun type that "points to" another type.(its an object in its own rights)
 *     - Declearing a pointer * followed by its name. e.g int *pointer;
 * A pointer holds the adress of another object by using (&) address of operator.
 *  - the types must match b/c the type of the pointer is used to infer the type of the object 
 *  to which the pointer points to.
 *
 *     -When a pointer points to an object we can use the dereference operrator (*)to access that object.
 *     e.g
 *     int ival=42;
 *     int *p= &ival;
 *     cout <<" The adress of ival is << p <<" it constains the value" << *p ;  //p holds the adress while *p holds 42.
 *  We can have a pointer point to nothing basically NULL or nullptr or 0;
 *  Unlike the reference by value pointers can change throughout the program.
 * void* pointers is a special type that can hold the adress of any object
 * e.g void *p = &variable;
 *
   Pointer to Pointers 
        - A pointer is an object in memory, so like nay object it has an address
		-We indicate each pointer level by its own *, that is we write ** for a pointer
		to a pointer, *** for a pointer to a pointer to a pointer.
		e.g
		int ival =1024;
		int *pi = &ival;
		int **ppi = &pi;
    Reference to Pointers
	    - A referene is not an object, hence we amy not have a pointer to a reference.
		-We can define a refeence to a pointer 
		e.g   int *p;
		      int *&r = p;

