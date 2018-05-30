/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).*/
/*
#include <iostream>
using namespace std;

int main ()
{
  int x, y, z;
  cin >> x;
  cin >> y;
  cin >> z;

  int sum;
  sum = x+y+z;
  cout << "the sum of x, y, and z is: " << sum << "\n";

  int avg;
  avg = sum/3;
  cout << "the average of x, y, and z is: " << avg << "\n";

  return 0;
}
*/

/* * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */


#include <iostream>
using std::cout;
using std::cin;

int main ()
{
  int a,b,c,d,e,sum;
  float average;

  cout << "Enter 5 integers: "<< "\n";
  cin >>a>>b>>c>>d>>e;
  sum=a+b+c+d+e;
  average=sum/5;
  cout << "THE SUM OF "<< a <<", "<< b <<", "<< c <<", "<< d <<", "<< e <<", "<<" is "<< sum<< "\n";
  cout << "THE AVERAGE OF "<< a <<", "<< b <<", "<< c <<", "<< d <<", "<< e <<" is "<< average << "\n";

  return 0;

}



/*
#include <iostream>
using std::cout;
using std::cin;

int main()
{
  int x;
  cout << x << "\n";
  x = 20000;
  cout << x << "\n";

  cout << "size of int:" << sizeof(x) << "\n";
  char c = 'x';
  cout << "size of char: " << sizeof(c) << "\n";

  double d = 100000000000.0;
  cout << "size of double: " <<sizeof(d) << "\n";

  double a = 0.0;
  double e = 0.0000000000001;

  if (d+e == d+a) {
    cout << "e is equal to a\n";
  } else {
    cout << "e is not equal to a\n";
  }
  return 0;
}
*/
