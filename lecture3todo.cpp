/*Compile with -Wall and understand all error messages*/

/*
#include <iostream>
using namespace std;
int main ()
{
  int x = 9;
  if (x = 23) //this rewrites x to be 23 -- there needs to be
							// a double equal sign
	{
    cout << "x was 23\n";
  }
  return 0;
}
*/



/* TODO: read a list of integers from stdin and print the *product* of them all.

/*
#include <iostream>
using namespace std;

int main ()
{
  double num;
  double product = 1; // start the value of product to be one
									    // if not, results in weird answers
  while (cin >> num) {
    product*=num;
  }
    cout << "The Product is: "<< product << "\n";
  return 0;
}
*/



/* TODO: given an integer n, find exponent of the largest power of two that
	 * divides n.  Example: if n = r*8 with r odd, then you should output 3
	 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
	 * number's factorization into primes.) */
	/* IDEA: keep on dividing n by two until we can't,
	 * and keep track of how many times it worked. */


#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	int exp=0; 					 //this is the exponent of 2; start at 0
	while (num%2 == 0) { //while the number leaves the remainder
		num/=2;						 //divide the number by 2
		++exp;						 //add one to the exponent
	}
	cout << "The largest power of 2 is: " << exp << endl;
	return 0;
}




