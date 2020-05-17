#include<iostream>
using namespace std;
int display(int,int);
int main()
{
    int sum;
    sum = display(20,30);
    cout << "Sum is : "<< sum << endl;
    return 0;
}

int display(int a, int b)
{
return a+b;
}


