#include <iostream>
using namespace std;
int main()
{

  int n=0; // to make the n global variable so that we can access the value of n in while
  do // using do-while to make the switchcase running until terminated manually
  {
  cout<<"Day number : "<<endl;
  cin>>n;
  switch (n)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
   break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Wrong choise ";
  }

  }
  while(n!=0);
  return 0;
}

