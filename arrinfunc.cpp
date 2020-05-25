#include<iostream>
using namespace std;
void print_array(int guesses[], int size){
    for(int i=0;i<size;i++){
        cout << guesses[i] << endl;
    }
}
int main(){
    int guesses[] = {1,2,3,4};
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses,size);
    return 0;
}
