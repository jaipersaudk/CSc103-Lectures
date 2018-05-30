/*TODO: write a function to compute the intersection of two sets.*/

#include<iostream>
using namespace std;
#include<set>
using std::set;
#include<vector>
using std::vector;


set<int> intersect(const set<int>& S1, const set<int>& S2)
{
  set<int> r; // r is the set with the intersection of the other two sets
  for (set<int>::iterator i = S1.begin(); i != S1.end(); ++i)
  {
    for (set<int>::iterator j = S2.begin(); j != S2.end(); ++j)
    {
      if (*i == *j) //if any value in S1 equals S2, then insert it into set r
      {
        r.insert();
      }
    }
  }
  return r;
}



void intTest() {
	set<int> s1 = {2,3,4,5,6,7};
	set<int> s2 = {1,2,4,7,11,44};
	set<int> s3 = intersect(s1,s2);
	cout << "intersection contained: ";
	for (set<int>::iterator i = s3.begin(); i != s3.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n";
}

int main ()
{
  intTest;
  return 0;
}



/* TODO: write a function that returns the union of two sets */

/*
set<int> combine(const set<int>& S1, const set<int>& S2)
{
  set<int> u;
  for(set<int>::iterator i = S1.begin(); i != S1.end(); i++)
  {
    u.insert(*i);
  }
  for (set<int>::iterator j = S2.begin(); j != S2.end(); j++)
  {
    u.insert(*j);
  }
  return u;
}

int main ()
{
  set<int> S1 = {2,3,4,5};
  set<int> S2 = {4,5,6,7};
  combine(S1,S2);
}




/* TODO: write a function that takes an index i and a vector
 * V and removes the i-th element.  If you don't have to
 * preserve the order, how could you do this with only a
 * constant number of steps?  (Say, using one call to pop_back()?) */

// Idea: switch the i-th element with the last one and then use pop_back to remove it

/*
void remove(vector<int>& V, size_t i)
{
  int n = V.size();
  swap(V[i], V[n-1]);
  V.pop_back();
}
*/