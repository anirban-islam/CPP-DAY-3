
## Authors

- [Anirban Islam Emon ](https://dev-anirban.me/)


## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://dev-anirban.me/)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/anirban-islam/)

[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/Anirban_Islam_)



# Day Two CPP 🎈
 # Array In C++

 #include<iostream>
using namespace std;

    int main(){
    //Arrays are used to store multiple values in a single variable, instead of declaring   separate variables for each value.
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


# Array-Input-Output-In-C++


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


# Array-Input-Output-Using-Loop-In-C++

    #include<iostream>
    using namespace std;

    int main(){
    //for (type variableName : arrayName) {
     // code block to be executed
    //}


    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    //print Array Data using for-each loop
    for(string car : cars){

    cout<<car<<endl;
    }

    return 0;
    }

# Dynamic-Array-in-C++
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
		for(string student : students ){
			cout << student << endl;
		}

		return 0;
	}

