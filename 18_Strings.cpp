#include<iostream>
using namespace std;
int main(){
	
	string str= "sudhansu";
	string temp= "bhai";
	string cur= "bhai";
	
//	get length
//	cout << "Length: " << str.length() << endl;
	
//	concatination
//	str.append(temp);
//	cout << "Concatination: " << str << endl;
	
//	Insertion
//	str.insert(0,temp);
//	cout << "Insert: " << str << endl;
	
//	SubString
//	cout << str.substr(4,3);
	
//	Comparison
//	if(temp.compare(cur)==0){
//		cout << "Strings are same." << endl;
//	}
//	else{
//		cout << "Strings are not same." << endl;
//	}
	
//	Find a string in a string.
	string a= "My Nickname is Kappa bhai";
	string b= "Kappa";
	int result = a.find(b);
	if(result == string::npos){
		cout << "b string is not found in a string." << endl;
//		cout << string::npos << endl;
	}
	else{
		cout << "Found in position: " << a.find(b) << endl;
	}
	
//----------------------------------------------------------
//  declare
//    string name;
//    name.push_back('s');
//    name.push_back('o');
//    name.push_back('n');
//    name.push_back('u');
//    cout << name << endl;
    
//  Here garbage value also be printed.
//    char arr[100];
//    arr[0]='m';
//    arr[1]='u';
//    arr[2]='n';
//    cout << arr;
	
//	Initialization
//    string surname = "Nayak";
	
//  Updation
//    surname = "Ranjan Nayak";
	
	return 0;
}
