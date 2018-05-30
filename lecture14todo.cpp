#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

/* TODO - print frequency table of string given from stdin*/

/*
int main ()
{
  map<string,int> f; // maps use two datatypes; (in this
                     // case, it has a string and int value

  string s; //call your string
  while (cin >> s)
  {
    f[s]++; //integers have a value of 0 at the start; when you
            //enter a word, their int value increases by one.
  }
  for (map<string,int>::iterator i = f.begin(); i != f.end(); i++)
  {
    cout << (*i).first << ": " << (*i).second << endl;
  }
  //pointer i.first points to first datatype of the map, which in this case is the string.
  //pointer i.second points to the second datatype of the map, which is the int (or the count of the string's occurrence)
  return 0;
  //you can enter sentences for this code; every word seperated by a space is read as a new word!
}
*/



/* TODO: try to solve the same problem with just vectors*/

//only counts the words if they are next to each other. If i can use sets, then it would work..sets alphabetize the strings

/*
int main ()
{
  vector<string> v;
  string s;
  while (cin >> s)
  {
   v.push_back(s);
  }

  sort(v.begin(),v.end());
  for (int i = 0; i < v.size(); i++)
  {
    int count = 1;
    int limit = v.size() -1;
    while (i < limit && v[i] == v[i+1])
    {
      count++;
      i++;
    }
    cout << v[i] << ": " << count << endl;
  }
  return 0;
}
*/



/* TODO: Solve the above problem using sets */

/*
int main ()
{
  set<string> f;
  string s;
  while (cin >> s)
  {
    f.insert(s);
  }

  for (size_t i = 0; i < f.size(); i++)
  {
    size_t count = 1;

    while (*i == *i+1)
    {
      count++;
      i++;
    }
    for (set<string>::iterator i = f.begin(); i != f.end(); i++)
    {
      cout << *i << ": " << count << endl;
    }
  }

  return 0;
}
*/