#include<iostream>
using namespace std;
int main() {
	
//	If Statement
//	int budget;
//	cout << "Enter Your Budget: " << endl;
//	cin >> budget;
//	if (budget > 2000000){
//		cout << "You can buy Scorpio." << endl;
//	}

//  If-Else Statement
//  int age = 18;
//  if (age >= 18){
//    	cout << "You can Vote." << endl;
//	}
//	else{
//		cout << "You can't Vote." << endl;
//	}

//  If-Else If Statement
//    int mark = 20;
//    if (mark >= 90){
//    	cout << "Outstanding";
//	}
//	else if (mark >= 80){
//		cout << "Excellent";
//	}
//	else if (mark >= 70){
//		cout << "Very Good";
//	}
//	else if ( mark >= 60){
//		cout << "Good";
//	}

//  If-Else If-Else Statement
//    int mark = 59;
//    if (mark >= 90){
//    	cout << "Outstanding";
//	}
//	else if (mark >= 80){
//		cout << "Excellent";
//	}
//	else if (mark >= 70){
//		cout << "Very Good";
//	}
//	else if ( mark >= 60){
//		cout << "Good";
//	}   
//	else{
//		cout << "Bad";
//	}
    
//  Nested If Statement
    float height;
    cout << "Enter Your Height in Feet: " << endl;
    cin >> height;
    int weight;
    cout << "Enter Your Weight in KG: " << endl;
    cin >> weight;
    if (height > 5) {
    	if (weight > 60){
    		cout << "You got a Good BMI.";
		}
		else{
			cout << "Bhai tujhse na ho payega.";
		}	
	}
	else{
		cout << "Complan dila do.";
	}
	 
	return 0;
}
