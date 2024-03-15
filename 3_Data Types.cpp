#include<iostream>
using namespace std;
int main() {
//	Integer Data Type
    int age = 45;
    cout << age << endl;
    cout << sizeof(age) << endl;
//  Float Data Type
    float height = 5.8;
    cout << height << endl;
    cout << sizeof(height) << endl;
//  Char Data Type
    char alphabet = 'Z';
    cout << alphabet << endl;
    cout << sizeof(alphabet) << endl;
//  Double Data Type
    double weight = 60.52684;
    cout << weight << endl;
    cout << sizeof(weight) << endl;
//  Boolean Data Type
    bool isMale = true;
    bool isChild = 1;
    bool isFemale = false;
    bool isGirl = 0;
    cout << isMale << endl;
    cout << isChild << endl;
    cout << isFemale << endl;
    cout << isGirl << endl;
    cout << sizeof(isMale) << endl;
    cout << sizeof(isFemale) << endl;
//  How to create same name variable(using Block Scope)
    {
    	int age = 30;
    	cout << age << endl;
	}
    {
    	int age = 60;
    	cout << age << endl;
	}	
    return 0;
}
