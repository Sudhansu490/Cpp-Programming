#include<iostream>
#include<string.h>
using namespace std;

//Find Length
int getStrLen(char arr[]){
	int count=0;
	int index=0;
	while(arr[index] != '\0'){
		count++;
	    index++;
	}
	return count;
}

//Concatination
void concatArr(char a[],char b[]){
	int aIndex = getStrLen(a);
	int bIndex = 0;
	while (b[bIndex] != '\0'){
//		Start Copying
		a[aIndex] = b[bIndex];
		aIndex++;
		bIndex++;
	}
//	End a String with null character
    a[aIndex]= '\0';
}

//Copying
void copyArr(char actual[],char copied[]){
	int aIndex=0;
	int bIndex=0;
	while(actual[aIndex] != '\0'){
		copied[bIndex] = actual[aIndex];
		aIndex++;
		bIndex++;
	}
	copied[bIndex]= '\0';
}

//Comparison of Array
bool compareArr(char a[],char b[]){
	int aIndex=0;
	int bIndex=0;
	int aLength = getStrLen(a);
	while(aIndex <= aLength){
		if (a[aIndex] != b[bIndex]){
			return false;
		}
		else{
			aIndex++;
			bIndex++;
		}
	}
//	If you match all the chars then
    return true;
}

int main(){
	
//	Find Length
//	char arr[] = "Kappa Bhai";
//	cout << getStrLen(arr) << endl;
//	cout << strlen(arr) << endl;
	
//---------------------------------
//  Concatination
//    char a[10]="Sonu";
//    char b[10]="Bhai";
//    concatArr(a,b);
//    strcat(a,b);
//    cout << "Printing a: " << a << endl;
    
//----------------------------------------
//  Copying
//    char actual[10]="kappa";
//    char copied[10];
//    copyArr(actual,copied);
//    strcpy(copied,actual);
//    cout << "Printing copied Array: " << copied << endl;

//--------------------------------------------------------
//  Comarison of Array
//    char a[10] = "Saina";
//    char b[10] = "Sainaa";
//    cout << compareArr(a,b);
//    if(strcmp(a,b)==0){
//    	cout << "Char Arrays are Same.";
//	}
//	else{
//		cout << "Char Arrays are not same.";
//	}
    
//	Declare
//    char arr[10];
    
//    cout << arr[3] << endl;

//  Initialization
//    char arr[10] = "sudhansu";
//    cout << arr[1] << endl;
//    cout << "8th Index Value: " << arr[8] << endl;
//    int ascii = arr[8];
//    cout << ascii << endl;

//  cout Behaviour
//    int arr[4]={1,2,3,4};
//    cout << arr << endl;
//    char ar[5]="SONU";
//    cout << ar << endl;

	return 0;
}
