#include<iostream>
using namespace std;
#include <cstdlib>
#include <time.h>
#include<vector>
using std::vector;

/*
// example: polynomial evaluation. We'll represent a polynomial by its array of coefficients: f(x) = a_0 + a_1x + a_2x^2..., we'll just store [a_0...] to represent it.  Let's work over integers.
int polyEval(vector<int>a, int x)
{
  // TODO: write this.  You can change the prototype to use vectors
  int sum = 0;
  int xi = 1;
  for (int i = 0; i < a.size(); i++)
  {
    sum = sum + a[i] * xi;
    xi = xi * x;
  }
  return sum;
}
*/


/*
//Example 2: Horner's rule for polynomial evaluation: notice that the above loop took 2 multiplications and one addition in each iteration.  Horner's rule lets us compute the polynomial with ONE multiplication and one addition per iteration of the loop.
int hornerEval(vector<int> a, int x)
{
	// TODO: write this.  Try not to look at the notes much.
  int d = a.size()-1;
  int A = a[d];
  for (int i=1; i <= a.size(); i++)
  {
    A = A*x + a[d-i];
  }

	return A;
}
*/



// TODO: write a function that takes an array, and its size, and applies a random permutation to the array.  For random number generation, use the rand function from the CRT.   I've updated the main() function to show you an example, and added cstdlib + time.h to the includes.
// NOTE: I want you to (under the assumption that rand() actually gives you random numbers) produce a permutation which is *uniformly random* among the set of all permutations.  HINT: think about how you count them. There are n choices for the first element, n-1 for the second, and so on.

void randPerm(int* A, size_t n)
{

}

int main() {
	int C[] = {3,2,1}; // x^2 + 2x + 3
	cout << "enter an integer: ";
	int x;
	cin >> x;
	cout << "f(" << x << ") = " << polyEval(C,2,x) << endl;
	cout << "f(" << x << ") = " << hornerEval(C,2,x) << endl;


	// NOTE: you will need random numbers of course for the above exercise. Here is how you can get them:
	// random number test:
	cout << "random number: " << rand() << endl;
	// the above number will always be the same, unless you set the seed
	// like this:
	srand(time(0));
	// now these will be different:
	cout << "more random numbers: " << rand() << endl << rand() << endl;
}
