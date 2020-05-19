#include<iostream>
#include<bits/cstd.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age<21)
    {
        cout<<"You cant vote, Your age is : "<<age<<endl;
    }
        else
        {
            cout<<"You can vote, Your age is : "<<age<<endl;
        }
return 0;
}
