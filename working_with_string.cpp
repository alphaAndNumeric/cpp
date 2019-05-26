/* Working with string */

#include <iostream>
using namespace std;

int main()
{
  string greet = "Good Morning";
  string subGreet;

  cout << greet.length() << endl;
  cout << greet[0] << endl;
  cout << greet.find("Morning", 0) << endl;
  cout << greet.substr(0, 5) << endl;

  subGreet = greet.substr(1, 7);
  cout << subGreet << endl;

  greet[9] = 'I';

  cout << greet << endl;

  return 0;
}