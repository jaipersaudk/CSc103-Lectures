#include<iostream>
#include<set>
#include<vector>
using namespace std;


set<set<int> > powerSet(set<int>& S)
{
	set<set<int> > P; /* hold return value */
	if (S.size() == 0) { /* S is empty */
		P.insert(S); /* return set containing empty set */
		return P;
	}
	/* now for the hard part... */
	/* remove one element from S and save it. */
	int x = *(S.begin());
	set<int> T(S); /* make T a copy of S */
	T.erase(x); /* remove? */
	set<set<int> > PT = powerSet(T);
	P = PT; /* all elements of PT are also in P */
	/* now add the missing elements to PT... */
	for (set<set<int> >::iterator h = PT.begin(); h!=PT.end(); h++) {
		/* h goes through every *set* in PT.  Add x, and add the
		 * result back to P. */
		set<int> H = *h;
		H.insert(x);
		P.insert(H);
	}
	return P;
}


/* TODO: try to write another version of the power set function
 * that divides the set into two disjoint subsets of equal(ish)
 * size, computes the powersets of those recursively, and then
 * puts them back together.  It is essentially the same idea as
 * the above.  Bonus question: prove your algorithm works, and
 * that it requires approximately the same number of steps as
 * the original. */


#if 0
vector<vector<int>> powerSet(vector<int>& S)
{
	vector<vector<int>> res; //return of the powersets
	if (S.empty()) //if S is an empty set
	{
		res.push_back(S);
		return res;
	}

	int last = S.back(); //last element of the vector
	S.pop_back(); //removes the last element
	res = powerSet(S);
	size_t psize = res.size();
	for (size_t i = 0; i < psize; ++i)
	{
		vector<int> t = res[i];
		t.push_back(last);
		res.push_back(t);
	}

	S.push_back(last);
	return res;
}

#endif
int main()
{
	/* test code for powerSet: */
	set<int> S = {1,2,3};
	set<set<int> > P = powerSet(S);
	cout << "{\n";
	for (set<set<int> >::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  {";
		for (set<int>::iterator j = (*i).begin(); j!=(*i).end(); j++) {
			cout << *j << " ";
		}
		cout << "},\n";
	}
	cout << "}\n";
	return 0;
}
