/* TODO: write a function that returns void, and takes two
 * POINTERS to integers, and swaps the contents of those two
 * memory locations.  Note: part of this exercise is understanding
 * what I'm asking for...
 * */

/*
#include<iostream>
using namespace std;

void exchange(int* p1, int* p2) //create pointers
{
  int temp = *p1; // need a temp variable because value of *p1
                  // will get overwritten

  *p1 = *p2;      //set first pointer equal to the second
  *p2 = temp;     //set the second pointer equal to the temp
}

int main ()
{
  int x = 10;     //declare your values for x and y
  int y = 12;
  exchange(&x, &y); //call your function
  cout << x << "\t" << y << "\n"; //cout the new values for x
                                  //and y
}
*/



/*TODO: write a function that performs a "circular shift" on
 * an array of integers.  For example, if the input array
 * contained 0,1,2,3,4 and we shifted by 2, the new array would
 * contain 3,4,0,1,2.*/

#include<iostream>
using namespace std;

void shift(int* a, size_t len, size_t n) //a is the array, len
                                         //is the elements in
                                         //A and n is the shift
                                         //amount.






/*
int main()
{
	//c-strings are just arrays of characters with a null character at the end. The "null character" is simply the char with (integer) value 0. (See the file ../09/ascii-test.cpp)
  char s[10] = "hello :D";
	//NOTE: the c-string "hello :D" is actually 9 characters! The 9th character is the null character (0) at the end
	cout << s << "\n";
	// NOTE: cout just prints characters until it finds the null character.  So if we wanted to end the string after "hello", all we have to do is place a null character after the 'o', like this:
	s[5] = 0;
	cout << s << "\n";
	return 0;

	// TODO: read prof. Li's notes about c-strings if you haven't already, and make sure you have done the exercises from ../09/strings.cpp.
}
*/
