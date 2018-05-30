/* Exercise: read a list of integers from standard input and prints it back to standard output in reverse order. */
/*
#include<iostream>
using namespace std;
#include<vector>
using std::vector;

int main ()
{
 vector<int> V; //have to make vector a datatype
 int num;
 while (cin >> num)
 {
  V.push_back(num); // adds values to the end of the vector
 }
 for (int i = V.size()-1; i>=0; i--) //loop to reverse the order of your inputs
 {
  cout << V[i]<< "\n"; //this prints the new placement for each value.
 }
 return 0;
}
*/



/*Function that reverses the order of a vector "in place"*/
/*
#include<iostream>
using namespace std;
#include<vector>
using std::vector;

void reverseVec(vector<int> &V)
{
 for (int i=0; V.size()/2; i++)
 {
  int temp = V[i];
  V[i] = V[V.size()-1-i];
  V[V.size()-1-i] = temp;
 }
}
*/



/*TODO: write a function that takes a vector and searches
 * for a particular value x, returning true <==> x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */


 #include <iostream>
 using namespace std;
 #include <vector>
 using std::vector;


void int (vector<int> V)
   int x;
   bool searchVector(const vector<int>&V, int x)
   {
     for (int i = 0; i<V.size();i++)
     {
       if (x==V[i])
         return true;
     }
     return false;
   }