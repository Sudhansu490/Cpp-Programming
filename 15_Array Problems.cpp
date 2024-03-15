//Q.1->Initialize an array with -1 in each block(using memset)
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int arr[10];
//	memset(arr,-1,sizeof(arr));
//	for(int i=0; i<10; i++){
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//Q.2->Write a function to populate an array with multiple of 10.
//#include<iostream>
//using namespace std;
//void printArr(int arr[],int size){
//	for(int i=0; i<size; i++){
//		cout << arr[i] << "\t";
//	}
//}
//void multiple(int ar[],int size){
//	int count= 1;
//	for (int i=0; i<size; i++){
//		ar[i] = 10*count;
//		count++;
//	}
//}
//int main(){
//    int arr[10];
//    int size = 10;
//    multiple(arr,size);
//    printArr(arr,size);
//    return 0;
//}

//Q.3->Write a function to reverse an array.
//#include<iostream>
//using namespace std;
//void reverseArr(int arr[],int size){
//	int i=0;
//	int j= size-1;
//	while(i<=j){
//		swap(arr[i],arr[j]);
//		i++;
//		j--;
//	}
//}
//int main(){
//	int arr[5]={1,2,3,4,5};
//	reverseArr(arr,5);
//	for(int i=0; i<5; i++){
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//Q.4->Flip 1 to 0 and 0 to 1 in an array.
//#include<iostream>
//using namespace std;
//void printArr(int arr[],int size){
//	for(int i=0; i<size; i++){
//		cout << arr[i] << "\t";
//	}
//}
//void flipZeroOne(int arr[],int size){
//	for(int i=0; i<size; i++){
//		if (arr[i]==0){
//			arr[i]=1;
//		}
//		else{
//			arr[i]=0;
//		}
//	}
//}
//int main(){
//	int arr[]={1,0,0,1,0,1,1,0,0,1};
//	int size=10;
//	cout << "Before: ";
//	printArr(arr,size);
//	cout << endl;
//	flipZeroOne(arr,size);
//	cout << "After : ";
//	printArr(arr,size);
//	return 0;
//}
