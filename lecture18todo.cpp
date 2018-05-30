#include<iostream>
using namespace std;

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets x and y such that ax + by = gcd(a,b).  We did this in lecture,
 * but try to do it here from scratch (don't look at the notes unless you
 * have to). */


/*
int xgcd(int a, int b, int& x, int& y)
{
	return 0;
}

void xgcdTest()
{
	//TODO: write some test code for xgcd.
}

int main(int argc, char** argv)
{
	xgcdTest();
	return 0;
}
*/

// My code

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
