/*Program that compute the largest value from standard input*/

/*
#include <iostream>
using namespace std;

int main()
{
  int n1, n, large;
  cin >> n1;
  large = n1; //this is the largest number....so far

  while (cin >> n) //if there are other numbers
  {
    if (n > large) //if n is greater than the largest
    {
      large = n;   //than the largest is now equal to n
    }
  }
  cout << "The largest number is: " << large << "\n";
  return 0;
}
*/


/*Program that computes the smallest value on standard input*/

/*
#include <iostream>
using namespace std;

int main ()
{
  int n1, n, small;
  cin >> n1;
  small = n1; //this is the smallest value so far

  while (cin >> n)
  {
    if (n < small) //if n is smaller than the smallest
    {
      small = n;  //the smallest is now equal to n
    }
  }
  cout << "The smallest value is: " << small << "\n";
  return 0;
}
*/


/*Program that computes the second smallest value */
/*
#include <iostream>
using namespace std;

int main ()
{
  int num1, num2, n, small, sec_small;
  cin >> num1;
  cin >> num2;

  if (num1 < num2)
  {
    small = num1;
    sec_small = num2;
  }
  else
  {
    small = num2;
    sec_small = num1;
  }

  // |--------------small--------------sec_small-------------|

  //but what if there is a number smaller than small

  // |--------n-----small--------------sec_small-------------|

  // n would become the new small; small becomes sec_small


  //what if there is a number smaller than the sec_small

  // |--------------small-------n------sec_small-------------|

  //n would become the new sec_small

  while (cin >> n)
  {
    if (n < small)
    {
      sec_small = small;
      small = n;
    }
    else if (n < sec_small)
    {
      sec_small = n;
    }
  }
  cout << "The smallest value is: " << small << endl;
  cout << "The second smallest value is: " << sec_small << "\n";
}
*/



/* Computes the sum of all numbers and average read from standard input*/
/*
#include <iostream>
using namespace std;

int main ()
{
  int sum = 0;
  int number;
  int numberOfItems;
  float average;

  cout << "How many numbers do you have?" << "\n";
  cin >> numberOfItems;

  for (int i=0;i<numberOfItems;i++) //stops you from entering
                                    //more value than the max
  {
    cout << "Enter your number: " << "\n";
    cin >> number;

    sum+=number;
  }
  average=double(sum)/numberOfItems;

  //problem: couldn't get decimals in the answer because an int was getting divided by a double -- this would get a whole number as an answer

  //solution: typecasting --> had to change the datatype of sum to double so that i can get decimals in the answer

  cout << "The Sum is: " << sum << "\n";
  cout << "The Average is: "<< average << "\n";
  return 0;
}
*/