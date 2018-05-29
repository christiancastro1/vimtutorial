/* implementation of home brew vector. */
#include "vector2.h"
#include <cassert>

vector2::vector2(size_t initCapacity) {
	/* set vector to be empty, with initial capacity of initCapacity */
	this->capacity = initCapacity;
	this->data = new int[capacity];
	this->size = 0;
	/* NOTE: remember that p->x is shorthand for (*p).x */
}

vector2::vector2(const vector2& V)
{
	/* Goal: make *this a copy of V. */
	/* here's the default copy constructor: */
	this->size = V.size;
	this->capacity = V.capacity;
	this->data = V.data;
	/* it will end in disaster!  TODO: make sure you understand why.
	 * Imagine what will happen if a vector were passed *by value* to a
	 * function.  Draw pictures, and keep in mind what the destructor does.
	 * */
	/* TODO: write a proper copy constructor that allocates a new array. */
}


#if 0
int f() {
	vector2 V;
	/* do stuff with V... */
} // <-- V goes out of scope and its destructor is called.
#endif

vector2::~vector2() {
	/* free memory resources */
	delete [] this->data;
	/* NOTE: the brackets should be used when deleting arrays. */
}

/* assignment operator.  there's a neat trick you can do to re-use the
 * copy constructor to do most of the work.  TODO: see if you can
 * explain what is going on below / why it works.  We'll go through it
 * in detail next class. */
vector2& vector2::operator=(vector2 V)
{
	int* tmp = data;
	data = V.data;
	V.data = tmp;
	size = V.size;
	capacity = V.capacity;
	return (*this);
}

/* TODO: re-write the assignment operator using the following prototype: */
// vector2& operator=(const vector2& V);
/* the const by reference seems more plausible, but it will complicate
 * the implementation a good bit.  NOTE: you will have to modify the
 * header as well. */

/* push back: */
void vector2::push_back(int x) {
	/* TODO: try to write this.  You need to grow the array when you
	 * run out of space.
	 * TODO: think about the following: consider two strategies for
	 * how to choose the new capacity.  (1) grow the array by a single
	 * element each time (capacity++).  (2) double the capacity each
	 * time (capacity *= 2).  What is the difference in the cost (number
	 * of steps required) for n consecutive calls to push back when
	 * using strategy (1) vs (2)?
	 * */
	this->data[size++] = x;
}

/* remove last element */
void vector2::pop_back() {
	assert(size > 0);
	/* as long as vector isn't empty, just do this: */
	size--;
	/* TODO: try popping elements from an empty vector and see
	 * what happens. */
}

/* return last element */
int vector2::back() {
	assert(size > 0);
	return data[size-1];
}
