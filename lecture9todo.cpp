/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.*/
/*
#include<iostream>
using namespace std;
#include<string>
using std::string;

int count_occurences(string s, char c)
{
  int count = 0; //start the count of character c at 0
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == c)
    {
      count++; //if the position in string s is equal to character c, then increase count by 1
    }
  }
  return count;
}

int main ()
{
  string t;
  char c;
  cout << "Insert word:" << "\n";
  cin >> t;
  cout << "Which letter do you want to find?" << "\n";
  cin >> c;
  cout << count_occurences(t, c) << "\n";
  return 0;
}
*/



/* TODO: write the following function which converts all lower
 * case letters to upper case.  NOTE: there are library functions
 * that will convert a single character (see 'man 3 toupper'),
 * but it might be more instructive to do it without using those.
 * If doing it without the help of toupper, note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).  See the ascii-test.cpp as well.
 * */

#include<iostream>
using namespace std;
#include<string>
using std::string;

string convert_Upper(string s)
{
 for (int i = 0; i<s.length(); i++) //want to check the entire length of the string
 {
  if (s[i] >= 'a' && s[i]<= 'z') //if a letter is lowercase (between code characters 97-122)
  {
   s[i] = s[i]-32; //s[i] will have a value between 97-122; the difference between the lowercase and uppercase letters is 32
  }
 }
 return s;
}

int main ()
{
 string word;
 cout << "Enter a word:" <<"\n";
 cin >> word;
 cout << convert_Upper(word)<<"\n";
 return 0;
}



/* TODO: write a function that takes two strings and returns an integer value
 * indicating whether or not the first was a substring of the second.  Remember
 * that the return value should be the index at which the string was found, or
 * -1 to indicate that the string was not found.  NOTE: this might be a little
 * tough.  Maybe do it last.
 * */
/*
 #include<iostream>
 using namespace std;
 #include<string>
 using std::string;

 size_t substring(const string & s1, const string& s2)
 {
  size_t l1 = s1.length();
  size_t l2 = s2.length();
  for (size_t i = 0; i< l1 - l2; i++) //start the search at index i
  {
   size_t j;
   for (j = 0; j < l2; j++)
   {
    if (s2[j] != s1[i+j])
    {
     break; // if no match was found
    }
   }
   if (j == l2)
   {
    return i;
   }
  }
   return -1;
 }

 int main()
 {
  string s1, s2;
  cin >> s1 >> s2;
  int i = substring(s1, s2);
  if (i>=0)
  {
   cout << "match found at " << i << "\n";
  }
  else
  {
   cout << "there was no match"<<"\n";
  }
  return 0;
 }
*/




 /* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */
/*
#include<iostream>
using namespace std;
#include<string>
using std::string;

bool palindrome(string s)
{
 int n = s.length();
 for (int i = 0; i<n; i++)
 {
  if (s[i] != s[n-i-1])
  {
   return false;
  }
 }
 return true;
}

int main()
{
 string t;
 cout << "Enter a word" << "\n";
 cin >> t;
 cout << palindrome(t) << "\n";
 return 0;
}
*/




/* TODO: write a function that takes a string by reference and reverses it.*/
/*
#include<iostream>
using namespace std;
#include<string>
using std::string;

void reverse(string& s) //& indicates by reference
{
 int n = s.length();
 for (int i = 0; i< n/2; i++) //only want to switch up to half-point, or else all the letters are going to switch back
 {
  swap (s[i], s[n-i-1]); //swaping starting from the corners
 }
}

int main ()
{
 string s;
 cout << "Enter a word:" <<"\n";
 cin >> s;
 reverse(s);
 cout << s << "\n";
 return 0;
}
*/

