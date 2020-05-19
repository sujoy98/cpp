#include<iostream>
using namespace std;
int main(){
    long factorial = 1;
    int num;
    cout << "Enter a num : " << endl;
    cin >> num;
    for(int i=1;i<=num;i++){
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial <<endl;
    return 0;
}
