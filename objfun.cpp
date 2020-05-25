#include<iostream>
using namespace std;
class Student{
    public:
        string Name;
        string Major;
        double Gpa;

        Student(string sName, string sMajor, double sGpa){
            Name=sName;
            Major=sMajor;
            Gpa=sGpa;
        }
        bool hasHonors(){
            if(Gpa>=3.5){
                return true;
                //cout<<"You have Honors!"<<endl;
            }else{
                return false;
                //cout<<"Sorry! You dont have Honors"<<endl;
            }
        }
};
int main(){
    Student Student1("Jim","CS",2.8);
    Student Student2("Pam","EC",3.6);

    cout<<Student1.hasHonors()<<endl;
    return 0;
}
