#include<iostream>
#include<map>
#include<set>
using namespace std;

/* TODO: WITHOUT compiling and running this, see if you can predict the output of f(4). */

/*
void f(int n) {
	if (n == 0) {
		cout << 0 << " ";
		return;
	}
	cout << n << " ";
	f(n-1); //function is called so the next line doesn't work until n = 0. When it does equal 0, then you have to back track (which utilizes that cout
	cout << n << " ";
}

int main ()
{
  int n = 4;
  f(n);
  return 0;
}
*/


/*
we start with the n = 4
(1) 4 != 0
(2) cout n, which is 4
(3) f(4-1) = f(3); n is not equal to 0, return
(4) cout n, which is 3
(5) f(3-1) = f(2); n is not equal to 0, return
(6) cout n, which is 2
(7) repeat until 0
(8) now n is 0, cout 0 and return
How did we get to 0? we subtracted 1 every time.
now we have to add 1 each and cout each time
*/



/* TODO: Write recursive function to find the factorial of the number n */
// Say if n = 4, then 4*3*2*1

/*
int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return fact(n-1) * n;
  }
}

int main ()
{
  int n;
  while (cin >> n)
  {
    cout << fact(n) << endl;
  }
  return 0;
}
*/


/* TODO: write a recursive function to compute x^n (x to the n power) where n is an integer. */
/*
int power(int x, unsigned int n) //unsigned to prevent negative
{
  if (n == 0)
  {
    return 1; //x^0 is 1
  }
  else
  {
    return x*power(x,n-1); // if n = 1, we dont know the value,
                           // but we do know x^0. So we first
                           // compute x^0, then mult. by x
  }
}

int main ()
{
  int x;
  cin >> x;
  int n;
  while (cin >> n)
  {
    cout << power(x,n) << endl;
  }
  return 0;
}
*/



/* TODO: write a function that recursively computes terms of the fibonacci sequence. Be careful -- it will likely be quite slow on large inputs! See if you can understand why. */




int fib_seq(int n)
{
  if (n == 0) //the 0th term is 0
    return 0;
  if (n == 1) //the 1st term is 1
    return 1; //start with the 2 known values (1 and 0)

  else
    return fib_seq(n-1)+fib_seq(n-2); // the fib sequence is dependent on the two values that came before the term that you want
}

int main ()
{
  int n;
  while (cin >> n)
  {
    cout << fib_seq(n) << endl;
  }
  return 0;
}




/* Warning: value of n>40 takes a long time. Most likely because it doesnt keep track of all the values that it has already computed. Look at the recursion tree in lecture 16. Using maps can make it work more efficiently (it will give memory) */