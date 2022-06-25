#include <iostream>
#include <cmath>


using namespace std;

void add(int& x, int& y){
    int sum = x + y;
    cout << "sum of " << x << " and " << y << " is " << sum;
}

void substract(int& x, int& y){
    int diffrence = x - y;
    cout << "Diffrence between " << x << " to " << y << " is " << diffrence;
}

void multiplication(int& x, int& y){
    int product = x * y;
    cout << "Multiplication of " << x << " and " << y << " is " << product;
}

void division(int& x, int& y){
    int remainder = x % y;
    int quotient = x / y;
    
    string input;
    cout << "What do you want to view (remainder(1) or quotient(2)): ";
    cin >> input;
    if(input == "remainder", "1"){
        cout << "Remainder of " << x <<" and " << y << " is " << remainder;
    } else if(input == "quotient", "2"){
        cout << "Quotient of " << x << " and " << y << " is " << quotient;
    };
}

int main(){
    cout << "\u001b[36mWelcome to cli calculator! \u001b[0m\n";
    cout << "Choose your operation \u001b[31m(-+*/)\u001b[0m:";
    char userInput;
    cin >> userInput;

    if(userInput == '+'){
        cout << "You choosed addition. \n";
        int firstNum;
        int secNum;
        cout << "First Number: ";
        cin >> firstNum;
        cout << "Secound Number: ";
        cin >> secNum;
        add(firstNum, secNum);

    } else if(userInput == '-'){
        cout << "You choosed substraction. \n";
        int firstNum;
        int secNum;
        cout << "First Number: ";
        cin >> firstNum;
        cout << "Secound Number: ";
        cin >> secNum;
        substract(firstNum, secNum);

    } else if(userInput == '/'){
        cout << "You choosed division. \n";
        int firstNum;
        int secNum;
        cout << "First Number: ";
        cin >> firstNum;
        cout << "Secound Number: ";
        cin >> secNum;
        division(firstNum, secNum);

    } else if(userInput == '*'){
        cout << "You choosed multiplication. \n";
        int firstNum;
        int secNum;
        cout << "First Number: ";
        cin >> firstNum;
        cout << "Secound Number: ";
        cin >> secNum;
        multiplication(firstNum, secNum);
    } else {
        char c;
        cout << "Wrong option! Enter y to restart: ";
        cin >> c;
        if (c=='y'){
            main();
        } else {
            return 0;
        }
        
    }

    return 0;
}


