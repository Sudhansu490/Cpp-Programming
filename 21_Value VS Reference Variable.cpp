//Pass by Value(work with a Copy)
//#include<iostream>
//using namespace std;
//void fun(int a){
//	cout << "Inside fun before increment: " << a << endl;
//	a++;
//	cout << "Inside fun after increment: " << a << endl;
//}
//int main(){
//	int a= 5;
//	cout << "Inside main before calling fun: " << a << endl;
//	fun(a);
//	cout << "Inside main after calling fun: " << a << endl;
//	return 0;
//}

//---------------------------------------------------------
//Pass by Reference(work with actual argument)

//#include<iostream>
//using namespace std;
//void fun(string &str){
//	cout << "Inside fun before changes: " << str << endl;
//	str= "kappa";
//	cout << "Inside fun after changes: " << str << endl;
//}
//int main(){
//	string name = "sonu";
//	cout << "Inside main before calling fun: " << name << endl;
//	fun(name);
//	cout << "Inside main after calling fun: " << name << endl;
//	return 0;
//}

//Array is always pass by reference
#include<iostream>
using namespace std;
void countEvenNum(int arr[],int size,int &count){
	for(int i=0; i<size; i++){
		if(arr[i]%2 == 0){
			count++;
		}
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size= 10;
	int count= 0;
	countEvenNum(arr,size,count);
	cout << "Even Number: " << count << endl;
	return 0;
}
