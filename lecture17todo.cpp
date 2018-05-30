#include<iostream>
using namespace std;

/* TODO: write the recursive GCD function from lecture and make sure you
 * understand how it works.  In fact, make sure you can *prove* it works.
 * (Keep mind how we defined the size of the input as the size of the
 * second parameter.)
 * */


int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return gcd(b,a%b);
  }
}

/*
int main ()
{
  int a, b;
  while (cin >> a, cin >> b)
  {
    cout << gcd(a,b) << "\n" << "\n";
  }
  return 0;
}
*/



/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets u and v such that ua + vb = gcd(a,b) Warning: this might take a
 * little bit of thinking (if you don't just look up the answer online).  Save
 * it for last. */



int xgcd(int a, int b, int& u, int& v)
{
  if(b == 0)
  {
    u = 1;
    v = 0;
    return a; // a*1 + b*0 = a
  }

  int uu, vv, r, q;
  r = a%b;
  q = a/b;
  int d = xgcd(b, r, uu, vv); // d = b*uu + r*vv

  //Doing algebra:
  /* a = qb + r
   * find u,v to get d = au + bv
   * since a = qb + r --> r = a - qb
   * So, d = b*uu + (a - qb)*vv --> a*vv + b(uu - q*vv)
   * Therefore: */
  u = vv;
  v = uu-q*vv;
  return d;
}

void gcdTest()
{
	int a,b,d;
	cout << "Enter pairs of integers a,b for gcd test: ";
	while(cin >> a >> b) {
		d = gcd(a,b);
		printf("gcd(%i,%i) = %i\n",a,b,d);
	}
}

int main()
{
	gcdTest();
	return 0;
}




/* TODO: if you haven't already, write merge sort from last time. */

//FINISHED IN LECTURE16TODO.CPP
