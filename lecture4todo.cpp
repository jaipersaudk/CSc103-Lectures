/*Compute the min and max of integers supplied via stdin. */

/*
#include<iostream>
using namespace std;

int main ()
{
  int n1, n2, n, max, min;
  cin >> n1;
  cin >> n2;

  if (n1 > n2)
  {
    max = n1; //claiming max and min...so far
    min = n2;
  }
  else
  {
    max = n2; //claiming max and min...so far
    min = n1;
  }

  while (cin >> n) //but what if there is another value larger
                   //than mx or smaller than min
  {
    if (n < min)
    {
      min = n; //n is the new min
    }
    else if (n > max)
    {
      max = n; //n is the new max
    }
  }

  cout << "The smallest value is: "<< min <<"\n";
  cout << "The largest value is: "<< max <<"\n";

  return 0;
}
*/

/* --------------------------------------------------------- */

/*Compute the greatest common divisor of n and k by an exhaustive search.*/

/*
#include<iostream>
using namespace std;

int main ()
{
  int n1, n2;
  int max;
  cin >> n1;
  cin >> n2;

  if (n1>n2)
  {
    max = n2; //want to find the biggest number that divides
              //into both numbers (the smallest number is the
              //largest one possible
  }
  else
    max = n1;

  int d = max; //set the greatest divisor equal to the max...
               //just in case
  while (n1%d!=0 || n2%d!=0) //find the number that doesnt
                             //leave a remainder. Start from
                             //the smaller number and work
                             //your way back
  {
    d--;
  }
    cout << "The GCD of "<< n1 <<" "<< "and "<< n2 <<" is " << d<< "\n";

    return 0;
}
*/

/* --------------------------------------------------------- */

/* Write a loop that prints the sum of the first n odd cubes.*/
/*
#include<iostream>
using namespace std;

int main ()
{
  int n, a, sum, p;
  sum = 0;

  cout << "How many of the first odd numbers do you want to cube?" << "\n";
  cin >> n;
  p = 2*n-1; //important: this gives the range for the for loop
             //range = [1, 2*p-1]. i.e. if you want the first
             //3 odd cubes, the range is [1, 2*3-1] which
             //is [1,5]

  for (double i = 1; i<=p; i+=2)
  {
    a = i*i*i;
    sum += a;
  }
  cout << "The sum of the first " << n << " odd cubes is: " << sum << "\n";
  return 0;
}
*/

/* --------------------------------------------------------- */

/* TODO: write a program that reads (arbitrarily many) integers from stdin and outputs the *second* smallest one.*/

/*
#include <iostream>
using namespace std;

int main ()
{
  int n1, n2, n, small, secsmall;
  cin >> n1;
  cin >> n2;

  if (n1<n2)
  {
    small = n1;
    secsmall = n2;
  }
  else
  {
    small = n2;
    secsmall = n1;
  }

  while (cin >> n)
  {
    if (n < small)
    {
      secsmall = small;
      small = n;
    }
    else if (n < secsmall)
    {
      secsmall = n;
    }
  }

  cout << secsmall << endl;
  return 0;
}
*/

/* --------------------------------------------------------- */

/* Fibonacci Sequence: output the nth term of sequence*/
/*
#include<iostream>
using namespace std;

int main ()
{
  int n; //the nth term of sequence
  cout << "Which n value of the sequence do you want?" << "\n";
  cin >> n;
  int i = 1; //the most recent term
  int ai = 1; // also the most recent computed term
  int abefore = 0; // the term before b

  if (n <= 2)
  {
    cout << 1 <<"\n";
  }
  else
  {
    n >=2;
  }

  while (i < n)
  {
    i++;
    int anext = abefore + ai; //the new current number
    abefore = ai;
    ai = anext;
  }
  cout << "The " << n << " value of the sequence is: " << ai << "\n";

  return 0;
}
*/