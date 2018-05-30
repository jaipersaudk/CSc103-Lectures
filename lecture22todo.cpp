#include<iostream>
using namespace std;

//taking the count of elements being stored dynamically from user at RUN-TIME - the array size is predefined before it is compiled
/*
int main ()
{
  int size;
  int* ptr; //this is the pointer
  cout << "What is the size of your array?" << endl;
  cin >> size; //ask for the size of the array that you want to create
  ptr = new int[size];
  cout << "Enter the values in your array: " << endl;
  for (int i = 0; i< size; i++)
  {
    cin >>ptr[i];
  }
  cout << "The elements in your array are: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << ptr[i] << endl;
  }
  return 0;
}
*/



/* Dynamically allocate an int  */

/*
int main ()
{
  int *p = new int; //calling a pointer to your new allocated space
  *p = 17;
  int& x = *p;
  printf("x == %i\n",x);
  int A[10];
  cout << A << endl; //prints the memory address of array A. to print the values, you have to use a for loop
  delete p;
  return 0;
}
*/



/* Resizing an array  */

/*
void resize(int*& A, int size, int newsize)
{
  int* N = new int[newsize]; //allocate new space for array. Instead of writing [newsize], we can write [any #] to choose the new size of the array
  for (int i = 0; i < size; i++)
  {
    N[i] = A[i]; // copy over elements from A to new array N
  }
  delete[] A; //now we can delete the old array A. Use delete[] for arrays; just delete elsewhere
}
*/



/* Another example  */

int main ()
{
  int n;
  cout << "How many numbers do you want?" << endl;
  cin >> n;
  int* p = new int[n]; // allocate array with size n
  for (int i = 0; i < n; i++)
  {
    cout << "Enter your values: " << endl;
    cin >> p[i]; //create an array with n values
  }

  cout << "Your numbers are: " << endl;

  for (int i = 0; i<n; i++)
  {
    cout << p[i] << endl;
  }
  delete [] p; //deleted the allocated array when finished
  return 0;
}
