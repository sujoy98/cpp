#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age<=20){
        cout<<"You are young"<<endl;
    }else if(age<=40){
        cout<<"You are middle ageed"<<endl;
    }else{
        cout<<"You are an old person"<<endl;
    }
    return 0;
}
