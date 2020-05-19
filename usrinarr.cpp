#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of the array : "<<endl<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Created array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<""<<'\t';
    }
    return 0;
}

