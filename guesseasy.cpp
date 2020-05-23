#include<iostream>
using namespace std;
int main(){
    int guess;
    int guess_count=0;
    int guess_limit=3;
    int secret_num=7;
    bool outofguess = false;
    cout<<"You have 3 guesses "<<endl;
    cout<<"Guess a number between 1-7"<<endl;
    while(guess != secret_num && !outofguess){
        if(guess_count<guess_limit){

            cout<<"Enter guess : "<<endl;
            cin>>guess;
            guess_count++;
        }else{
            outofguess=true;
        }
    }if(outofguess=true){
        cout<<"You loose"<<endl;
    }else{
        cout<<"You win!"<<endl;
    }
}
