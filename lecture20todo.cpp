#include<iostream>
#include<vector>
using namespace std;

/*Permutation Code*/


vector<vector<int>> perms(vector<int>& V)
{
  vector<vector<int>> res; // return of the permutation
  if (V.empty()) // if the vector is empty, return an emoty vector; this is the base-case
  {
    res.push_back(V);
    return res;
  }

  //giving each element in the vector a chance to be the last element in the vector
  for (size_t i = 0; i < V.size(); ++i)
  {
    int last = V[i];
    V[i] = V.back(); //give the i-th element the value of the last element
    V.pop_back(); // remove the last element
    vector<vector<int>> t = perms(V);

    for (size_t k = 0; k < t.size(); ++k)
    {
      t[k].push_back(last);
      res.push_back(t[k]);
    }
    V.push_back(V[i]);
    V[i] = last;
  }
  return res;
}

int main()
{
	vector<int> V;
	int n;
	while (cin >> n) {
		V.push_back(n);
	}
	vector<vector<int> > R = perms(V);
	for (size_t i = 0; i < R.size(); i++) {
		for (size_t j = 0; j < R[i].size(); j++) {
			cout << R[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

/* TODO: write a function to compute all *k-subsets* of a given set.
 * Recall that k-subsets are subsets with *precisely* k elements.
 * Below are some function prototypes you could use.  See the notes
 * for the intuition and an outline. */

// with sets:


set<set<int> > ksubsets(set<int>& S, size_t k)
{
  set<set<int>> P;
  set<set<int>> R;
  set<int> S2 = S;

  //base-case
  if (S.size() == k)
  {
    P.insert(S);
    return P;
  }

  if(S.size() < k)
  {
    return {};
  }

  //recursive definition

  for (set<int>::iterator i = S2.begin(); i != S2.end(); i++)
  {
    int x = *i;
    S.erase(x);
    R = ksubsets(S,k);
    for (set<set<int>>::iterator j = R.begin(); j != R.end(); j++)
    {
      P.insert(*j);
    }
    S.insert(x);
  }
  return P;
}



// or with vectors:
/*
vector<vector<int> > ksubsets(vector<int>& V, size_t k)
{
  vector<vector<int>> P;
  vector<vector<int>> R;
  if (V.size() == k)
  {
    P.push_back(V);
    return P;
  }
  if (V.size() < k)
  {
    P.push_back({});
    return P;
  }
  for (int i = 0; i < V.size(); i++)
  {
    int x = V[i];
    V[i] = V[V.size()-1];
    V[V.size()-1] = x;
    V.pop_back;
    R = ksubsets(V,k);
    for (int j = 0; j < R.size(); j++)
    {
      bool inside = false;
      for (int w = 0; w < P.size(); w++)
      {
        if (R[j] == P[w])
        {
          inside = true;
        }
      }
      if (inside == false)
      {
        P.push_back(R[j]);
      }
    }
    V.push_back(x);
    x = V[i];
    V[i] = V[V.size()-1];
    V[V.size()-1 = x;
  }
  return P;
}
*/



/*
int main()
{
	// TODO: write some test code.
	return 0;
}
*/
