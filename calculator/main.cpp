#include <iostream>
using namespace std;
int main() {
	int firstNumer,secondNumer;
	char operationChoice;

    cout << "Enter the first number: ";
    cin >> firstNumer; // 
    
    cout << "Enter the second number: ";
    cin >> secondNumer;
    
    cout << "Operator: ";
    cin >> operationChoice; //choose one of the four operations
    
    
    if(operationChoice == '+'){
    	cout << firstNumer + secondNumer ;
	}
	else if(operationChoice == '-'){
		cout << firstNumer - secondNumer ;
		 
	}
	else if(operationChoice == '*'){
		cout << firstNumer * secondNumer ;
		 
	}
	else if(operationChoice == '/'){
		cout << firstNumer / secondNumer ;
		 
	}
	else {
		cout << "Error! " ;
	}
	
	return 0;
}
