#include<iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
//In C++, you don't have to specify the size of the array.
//The compiler is smart enough to determine the size of the array based on the number of inserted values
//For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays.
//The size of a vector is dynamic, meaning it can grow and shrink as needed.
//Vectors are found in the <vector> library, and they come with many useful functions to add, remove and modify elements
//Vectors - Dynamic Size Example
// A vector with 3 elements
//vector<string> cars = {"Volvo", "BMW", "Ford"};

// Adding another element to the vector
//cars.push_back("Tesla");


//Declare Dynamic Array

vector<string> students = {"Anirban", "Islam", "Emon"};

//Add Value On Dynamic Array
students.push_back("Maya");


//Print Dynamic Array Value
for(string student :students ){
    cout<<student<<endl;
}


return 0;
}
