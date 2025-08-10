#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The Size of Array : ";
    cin >> size;
     // clear newline from input buffer
    cin.ignore();



    string student[size];


    cout << "\tArray Input Output Using For Loop" << endl;
    // Input loop
    for (int i = 0; i < size; i++){
        cout << "Enter The value of " << i + 1 << " : ";
        getline(cin, student[i]);
    }

    // Output loop
    for (int j = 0; j < size; j++){
        cout << "Value of Array " << j + 1 << " is : " << student[j] << endl;
    }

    return 0;
}
