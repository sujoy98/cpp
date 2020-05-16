#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum,minus,product;
    float division,modulos;
    cout<<"Enter num1 and num2 : "<<endl;
    cin>>num1>>num2;
    sum=num1+num2;
    minus=num1-num2;
    product=num1*num2;
    division=num1/num2;
    modulos=num1%num2;
    cout<<"sum is : "<<sum<<endl<<"minus is : "<<minus<<endl<<"product is : "<<product<<endl<<"division is : "<<division<<endl<<"modulos is : "<<modulos<<endl;
    return 0;
}

