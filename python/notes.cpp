int int main(int argc, char *argv[])
{
	
	return 0;
}
/* NOTE Variables and Data Types
	
   1. Examples of a variable 
   message = ' hello'
   print(message)

   This is a simple example of how variables work. They hold a value to associate with the variable. 
   -naming convention: variables can contain numbers,letters, and underscores but cannot start with a number.

   STINGS
   ------
   -A string is simply just a sequence of characters. They can be either in single quotes or double quotes.
   - you can concatenate a string by using the + operator. e.g message = "christian" + "castro"
   - 	type casting: turning an interger to str    age = 12;    str(age) will make it into a string 

   String methods
   -------------
   1. .title() changes the first character of each word to uppercase eg name = 'christian castro'; name.title() -> Christian Castro
   2. .upper() changes every character to upper case
   3. .lower() changes every chacter to lower case 
   4. .rstrip() strips away right whitespace // good for comparing strings 
   5. .lstrip() strips awats left whitespace 
   6. .strip() strips both left and right whitespace
  */
/* NOTE List
 -A list is a collection of items in a particular order.
   e.g bicycles = ['trek', 'cannondale', 'redline', 'specialized]

  - you can access the last element of the list easily. 
  bicycles[-1]  
  - this concention can be extended to other negative values.

  LIST METHODS (. infront means method)
  -----------
  1. .append()  // adds to element to the end of the list
  2. .pop()     // removes the last element of the list. You can still use it. You can add index in paren to specify what ele to pop
  3. .del   // deletes element but you cant use it anymore
  e.g del name[0 : 3] would delete elemtents from name. From 0 to 2. The 3 is not inclusive
  4. .remove()// if you dont know the position, you can remove by value.Only first occurence
  5. .inset() adds element to front of list 
  6. .sort() sorts elements in the list
      -you can also sort in reverse by adding reverse = True  to the paramter list. e.g name.sort(reverse = True)
  7. sorted(list) sorts list to display but does not change the order of the original
  8. reverse() changes the order of the lisrt
  9. len(list)  lenght of the list
  10. min(list)  // smallest value in list
  11. max(list)  // largest
  12. sum(list) sum of list

  Lopping through a list:
  ----------------------
  e.g numbers = [1,2,3,4,5]

  for number in numbers:
  		print(number)

  Range Function
  -------------
  1. range(val1,val2,val3)   // value from val1 to val2-1. Val2 is not inclusive. Val3 is the step size
   e.g for i in range(1,5):
   			print(i)
    this will print: 1 2 3 4
  2. Making a list of numbers with range
      numbers = list(range(2,6))

   List Comprehension 
   ------------------
   you can quickly make a list using list Comprehension.
   e.g making a list of square numbers 
   square = [num**2 for num in range(1,10)]

   Slicing A LIST
   --------------
   to make a slice of a list you specify the first and last elemement inside []
   e.g numbers = [1,2,3,4,5]
       print(numbers[1:4]) NOTE: the 4 is not inclusive

	1. Looping through a slice. 

	e.g  for number in numbers[0:3]
			print(number)

	Copying A List
	--------------
	to copy a list you must slice it. You can use [:] and not include the first and last element index.
	-python will known that you want a slice that starts with the first item and ends with the last.

	e.g myfood = ['pizza', 'chicken', 'carrot cake']
	    friendsfood = myfood[:]   // this will create a copy

	e.g friendsfood = myfood // this will not create a copy. Rather both objects will point to the same list. 


	Tuples 
	---------------
    - a tuple looks just list a list execept you use parenthesis instead of square brackets. 
	e.g point = (100,20)   // you cant change the values of point[0] = 50 will give you error

	NOTE: python refers to values that cannot change as immutable. Thus a list that is immutable is a tuple. 
	TIP:you can override the value of a tuple e.g point = (50,100)


  */
  /* NOTE IF Statments

   1. A conditional is a statement that returns either True or False.
     -to check multiple conditions you can use 'and' & 'or'

   Value In List?
   -------------
   1. the key word 'in' tells python to check for existance of a value. This key word
   is a predicate.
   
   e.g numbers = [1,2,3,4,5,6]
      1 in numbers  // this will return True
    

	if-statements
	------------
    1. the simples if statement only checks on condition.
	   e.g   if conditional:
	   			dosomething

	2. if-else 

	3. elif // its if the first if is false then elif will excecute. 
*/
/* NOTE DICTIONARIES
 
   1. A dictionarie is a collection of key valued pairs. Each key is associated with a value.
   The order of the dictionary is not in order of how you insert it. 
   -dictionaries are wrapped around {}
   e.g alien0 = {}   empty dictionarie
   e.g alien = {'color':'green'} this is one key value pair. Where color is the key and green is the value.

   Accesing Values
   --------------
   1. print(alien['color'])  // this will print green 

   Adding New key-valued pairs
   ---------------------------
   -dictionaries are dynamic data structures meaning that the size can accomodate based on how many items you add
   - while static data structures the size is fixed. The pointer always points to the first element 

   e.g say we wanted to add a new key-valued pair to alien
   then alien['name'] = 'christian'

   Removing an Element
   -------------------
   1. You can use the keyword del 
   e.g del alien['name']

   Looping Through dictionaries
   ----------------------------
   - to write a for loop for a dictionarie you create names for the two variables that will hold the key and the value. 
   e.g user = { 'first': 'christian'
                'last': 'castro'
                'username' : 'ccastro'}

		for key,value in user.items():
			print('key:'+ key)
			print ('value:'+ value)

	-the method items() returns a list of key value pairs. 
	  
	1. To loop through all keys instead of items() you can use keys()
	2. To loop through all values you can use values()

	Looping in order
	---------------
	you can use the function sorted 
	e.g for key in sorted(user.keys()):
			print =(key)

	Nesting 
	----------
	1. List of Dictionaries 
	say we want to create a list of 30 aliens and store it in a list. 
	aliens = []

	for aliennumber in range(0,30):
		newalien = {'color':'green', 'points':5, 'speed':'slow'}
		aliens.append(newalien)

	2. List in Dictionarie 
	   e.g pizza = { 
	                'crust':'thick',
					'toppings': ['mushrooms','extracheese]

	3. Dictionarie inside Dictionarie
	 e.g   user = { 'aeinstein' : {'first':'albert', 'last':'einstein','location':'princeton'}}

*/
/* NOTE USER INPUT AND WHILE LOOPS
 
   1. To promp user for input we can use the function imput()
    NOTE: eveything a user write through input is a string even numbers 

	e.g age = input("How old are you?")
	    age = int(age)
	
	2. While loop runs while a condition is true.
	e.g number = [1,2,3,4]
	 while number:   // this syntax will be true aslong as number is not empty 

	Breaking a loop:
	--------------
	you can use the keyword 'break' to stop a loop

	Continue a loop:
	---------------
	you can you use continue to return to the beginning of the loop. Based on a condition. 

	NOTE : you should use while loops to modify list or dictionaries not for loops


	Removing all Instances of LIST
	------------------------------
	e.g pets = ['cat', 'dogs','parrot', 'cat']

	while 'cat' in pets:
		pets.remove('cat')

	

*/
/* NOTE Functions 
   1. Use the keyword def to define a function
     e.g def square (x): here x is a parameter (formal para)
     e.g when i call the function say square(5)  the 5 is an argument (actual parameter) 

	 Passing Arguments
	 -----------------
	 1. Positional arguments which need to be in the same order the parameters were written.

	 2. Keyword arguments where each argument consists of a variable name and value
	 e.g 
	 def greet(first, last):
	 	print('Hello' + ''+ first + ''+last)

		//when calling we can do this: gree(first = 'christian', last = 'castro')

	 3. List and dictionarie values.


	 Default Values 
	 --------------
	 when writing a function you can provide a default value for a parameter
	 e.g  def describe_pet (name, type = 'dog'):
     
	 - when calling the function: describe_pet(name='chris') or describe_pet'(chris) 
	  NOTE: for default values no spaces in either side of equal sign 
     - you if no value is passed for type then the default value will be used.

	 NOTE: python still interprets the arguments in a positional matter. 
	 NOTE: when you use default values any parameter with a default value needs to be listed after all the parameters that
	 dont have a default value. 

	 Passing A List
	 --------------
	 - when you pass a list to a function you can modify the list inside the function
	 - if you dont want to change the origina list then you can send a copy of it by slicnig
	   e.g printnumber(numbers[:])

	  Passing Arbitrary Number of Arguments
	  -------------------------------------
	  1. in the function signature the parameter can be modified by adding a * to tell python that an arbitrary number
	  of arguments will be passed. The start makes the arguments into a tuple.

	  2. Put arbitrary arguments to the right if youre gonna mix it with positional. e.g def makepizza(size, *toppings)
	  3. You can pass key-valued pairs by adding ** infront of parameter

	  e.g def build_profile(first,last, **userinfo):
	  call: build_profile('christian','castro', location = 'princeton', field = 'cs')
	  
	  -to access userinfo we can treat it as a dictionarie.

	  Functions in Modules
	  --------------------
	  -we can store functions in a seperate file which is called a module. 
	  - if we need to use those functions we can import it

	  e.g pizza.py is our module
	  def make_pizza(size, *toppings):
	  	print("Making a " + str(size) + "-inch pizza with the following toppings:")

		for toppin in toppings:
			print("-" + topping)


		-------------------makepizza.py---------------------
		import pizza

		pizza.make_pizza(16,'mushrooms','pepperoni','cheese ext')

		1. Importing all functions from module :  import modulename
		2. Importing specific functions: from modulename import functionname1, function2  NOTE functions seperated by commas
		3. Importing a function and give it an alias name: from pizza import make_pizza as mp
               NOTE : They keyword as gave an alias 
		4. You can use as to give an alias to a module: import pizza as p
		5. Importing all functions: from pizza import *. * tells python to copy every function 


		DOCSTRING
		---------
		To give a description of the paramters and what the body of the function does we can create a small explanation using
		docstring : """   explain """

		- to see the description we use help(nameoffunction)
 */
/* NOTE INFO
   1. Python interprets non empty strings as True
     e.g name = "Chris"
	     if name:
		 	print(chris)
   2. python -m pydoc  you can see the description of a module,function, keyword ...
 */

