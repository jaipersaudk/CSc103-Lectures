/*Write a function that reads vector V into standard input and reads the smallest element of the vector*/

#include<iostream>
using namespace std;
#include<vector>
using std::vector;

size_t findIndexofSmallest(const vector<int>& V, size_t start)
{
  size_t i = start; // smallest value we have
  for (size_t j = start+1; j < V.size(); j++)
  {
    if (V[j] < V[i])
    {
      i = j;
    }
  }
  return i;
}

void selectionSort(vector<int>& V)
{
  for (size_t i = 0; i < V.size()-1; i++)
  {
    size_t smallest = findIndexofSmallest(V, i);
    int temp = V[smallest];
    V[smallest] = V[i];
    V[i] = temp;
  }
}

int main ()
{
  vector<int> V;
  int n;
  while(cin >> n)
  {
    V.push_back(n);
  }
  selectionSort(V);
  for (size_t i = 0; i < V.size(); i++)
  {
    cout << V[i] << "\n";
  }
  return 0;
}
