/*
Getter and Setter allows us to efficiently protect our data, there two types mainly
used in Classes i.e in making Private and Public type inside classes.
*/

#include<iostream>
using namespace std;
class Movie{
    public:
        string rating;
    public:
        string title;
        string director;

        Movie(string aTitle,string aDrirector,string aRating){
            title=aTitle;
            director=aDrirector;
            setRating(aRating);//passign aRating through the setRating functiom
        }
        // Creating a new function to limit the rating inputs
        void setRating(string aRating){
            if(aRating=="G"||aRating=="NR"||aRating=="PG"||aRating=="PG-13"){
                rating=aRating;
            }else{
            rating="NR";
        }
        }
        // creating a seperate string function to get the final rating
        string getRating(){
            return rating;
        }
};
int main(){
    Movie avengers("The Avengers","Joss Whedon","PG-13");
    //this statement is passing through setRatihg function to chaneg the rating but it fails in the if-else statement in setRatign function
    avengers.setRating("Dog");
    //this statement passes the if-else block in setRating function
    avengers.setRating("PG");
    cout<<avengers.getRating()<<endl;
    return 0;
}
