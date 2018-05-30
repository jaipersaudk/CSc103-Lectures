#include<iostream>
using namespace std;

/* TODO: write a recursive function that prints the base 10 digits of n vertically to cout. For example, printVertically (2358) would print
2
3
5
8
// Rules: you can't use any loops.  You can't use vectors or arrays.
// Just let the recursive function calls do the work for you.*/



void printVertically(unsigned long n)
{
	if (n < 10) // for dealing with the last number; this is the base-case
	{
		cout << n << endl;
		return;
	}

	printVertically(n%10);
	printVertically(n/10); /* 2358 % 10 = 235 r8 <-- cout 8
													* 235 % 10 = 23 r5 <-- cout 5
													* 23 % 10 = 2 r3 <-- cout 3
													* 2 % 10 = r2 <-- cout 2
													*/
}

int main ()
{
	int n;
	cin >> n;
	printVertically(n);
	return 0;
}




/* TODO: try to turn the following "plain-English" procedure into
	 * a recursive program:
	 * 1. if the array is empty (size < 1) return false.
	 * 2. if x is less than the value in the middle, recursively search
	 *    the left subarray, else recursively search the right subarray.
	 * Test out your program, and try to prove (by induction) that it works.
	 * (There are some subtle points about making sure the size is always
	 * decreasing...)
	 * */



/*
bool search (int* A, int size, int x) //int x is what you are looking for
{
	int mid = size/2;

	if (size < 1) //if the size is 0
		return false;

	if (x == A[mid]) //if x is the middle element
		return true;

	if (x > A[mid]) //if x is greater than the middle element, then search the right side of the array
		return search(A+mid+1, size,x);

	else //else search the left side of the array
		return search(A, mid-1, x);
}
*/


/* TODO: try to write down that recursive sorting algorithm we outlined
 * during class.  This might not be easy, but it's a good exercise.  To
 * help you get started, here are some plausible prototypes:
 * */

/* merge L and R (which are both sorted, and of sizes nL,nR respectively)
 * into the array S (which you can assume has enough space). */

#if 0
void merge(int* L, size_t nL, int* R, size_t nR, int* S) //nL is the size of L; nR is the size of R (return); S is the contents of L and R in sorted order
{
	int iL = 0;
	int iR = 0;
	int iS = 0;

	while (iL < nL && iR < nR)
	{
		if (L[iL] < R[iR])
		{
			S[iS++] = L[iL++];
		}
		else
		{
			S[iS++] = R[iR++];
		}
	}

	while (iL < nL)
	{
		S[iS++] = L[iL++];
	}

	while (iR < nR)
	{
		S[iS++] = R[iR++];
	}
}

/*
int main ()
{
	int a[4] = {1,3,7,9};
	int b[4] = {2,4,6,8};
	int s[8];
	merge(int* a, int a, int* b, int b, int s);
	return 0;
}
*/



/* TODO: Sort the array A (of size n) using the array aux (which should
 * also have at least n elements) as auxillary storage for the
 * merge operations (see merge(...) above).  */


void mergeSort(int* A, size_t n, int* aux)
{
	//IDEA: take care of a base case (like, say n < 2), and then break array in two equal(-ish) pieces and recursively sort both.  Then use the merge function to recombine them into a completely sorted array.  See example call from main().
	if (n < 2) // "base-case"
	{
		return;
	}

	int mid = n/2;
	mergeSort(A, mid, aux); //sorts the left side of the array: (A[0]...mid-1)
	mergeSort(A+mid, n-mid, aux); //sorts the right side of the array: (A[mid]...n-mid)
	merge(A, mid, A+mid, n-mid, aux); //now copy aux --> Aux
	for (int i = 0; i < n; i++)
	{
		A[i] = aux[i];
	}
}

int main()
{
	// how to call merge sort:
	int A[10] = {33,2,19,6,7,91,22,71,18,49};
	int aux[10]; // auxillary space for merging.
	mergeSort(A,10,aux);
	for (size_t i = 0; i < 10; i++) {
		printf("A[%lu] = %i\n",i,A[i]);
	}
	return 0;
}

#endif