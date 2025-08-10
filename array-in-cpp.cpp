#include<iostream>
using namespace std;

int main(){
//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
//To declare an array, define the variable type,
//specify the name of the array followed by square brackets and specify the number of elements it should store

//declare variable
//string student[4];

//declare variable with value
//string student[4]={"Anirban", "Emon", "Sumon" , "Islam"];

//Array
string student[4]={"Anirban", "Emon", "Sumon" , "Islam"};

// Access Array
//Array Data Store with a unique index number
//We can Access Array with the index number

string firstName=student[0];
string secoundName=student[1];
string tharirdName=student[2];
string forthName=student[3];

//print Array data manuallay

cout<<"\t Array Data"<<firstName<<endl<<secoundName<<endl<<tharirdName<<endl<<forthName<<endl;

//update data
//we can update data with index
student[0]="Maya";
student[1]="Akter";
student[2]="Mim";
student[3]="Sofifa";

string updateFirstName=student[0];
string updateSecountName=student[1];
string updateTharidName=student[2];
string updateForthName=student[3];

//Print update Array data manually
cout<<"\t Update Array Data"<<endl<<updateFirstName<<endl<<updateSecountName<<endl<<updateTharidName<<endl<<updateForthName<<endl;



return 0;
}
