/* TODO: write a FUNCTION that takes 3 integers and returns the maximal value */

#include <iostream>
using namespace std;
#include <cmath>

int maximum(int x, int y, int z)
{
  int a; //making "a" the maximum value

  if (x>y)
  {
    a=x;
  }
  else
  {
    a=y;
  }

  if (a>z)
  {
    return a;
  }
  else
  {
    return z;
  }
}

int main ()
{
  int x, y, z;
  cin >> x >> y >> z;

  int m = maximum(x, y, z);
  cout << "The largest value is: "<< m << "\n";
  return 0;
}


/* TODO: Write a FUNCTION that takes 3 values and returns the minimum value*/

/*
#include<iostream>
using namespace std;
#include<cmath>

int minimum(int x, int y, int z)
{
  int a; //this is the smallest value

  if (x<y)
  {
    a=x;
  }
  else
  {
    a=y;
  }

  if (a<z)
  {
    return a;
  }
  else
  {
    return z;
  }
}

int main ()
{
  int x, y, z;
  cin >> x;
  cin >> y;
  cin >> z;

  int m = minimum(x, y, z);
  cout << "The smallest value is: " << m <<"\n";
  return 0;
}
*/


/* TODO: write a function that takes 3 doubles and returns the
 * average value */
/*
 #include <iostream>
 using namespace std;
 #include<cmath>

 double avg(double x, double y, double z)
 {
   double sum = x+y+z; //this doesnt work for decimals?? WHY??
   double mean = sum/3;
 }

 int main()
 {
   double x, y, z;
   cin >> x;
   cin >> y;
   cin >> z;
   int a = avg(x, y, z);
   cout << "The Average is: "<< a <<"\n";

 return 0;
 }
*/



/* TODO: write a function that takes two integer parameters and
 * swaps the contents, i.e., if x=2 and y=5, then after calling
 * swap(x,y), y=2 and x=5 */

/*
 #include<iostream>
 using namespace std;
 #include<cmath>

void swap(int & x, int & y) //to swap, we need to use "call by reference" to change the values of the variables (we use the (&) sign to indicate call by reference
{
  //assign a temp variable to be the value of x to call for later
  int temp = x;
  x = y;
  y = temp; //temp has the original value of x
}

int main ()
{
  int x, y;
  cout << "Enter x and y values"<<"\n";
  cin >> x >> y;
  swap (x, y);
  cout << "Your new values are: "<< x << "\t" << y << "\n";
  return 0;
}
*/


