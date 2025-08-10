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
