#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //define variables
    string operation;
    double number1, number2;

    //get user input
    cout<< "Enter First Number:";
    cin >> number1;  
    cout<< "Enter operation( + , -, *, /):";
    cin >> operation;  
    cout<< "Enter second Number:";
    cin >> number1;  

    // if else statement cheking enter operation
    if (operation == "+"){
        cout << number1 + number2;
    } else if (operation == "-"){ 
        cout << number1 - number2;
    }
      else if (operation == "*"){
        cout << number1 * number2;
    } else if (operation == "/"){ 
        cout << number1 / number2;
    }
    else{
        cout << "Not a recozine operation!";
    }

    
    return 0;
}