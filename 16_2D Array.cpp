#include<iostream>;
using namespace std;
void print2DArr(int arr[][4],int row_size, int col_size){
	cout << "Printing 2D Array" << endl;
	for(int i=0;i<row_size;i++){
		for(int j=0;j<col_size;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	
//	Declare
//    int arr[5][4];
//  Initialization
//    int arr[2][4] = {{10,20,30,40},{1,2,3,4}};
//  Accessing
//    cout << arr[0][3] << endl;
//  User Input
    int arr[3][4];
	int row=3;
	int col=4;
    for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout << "Enter the input for arr["<<i<<"]["<<j<<"]:";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
//	int arr[3][4]={{1,2,3,4},{10,20,30,40},{100,200,300,400}};
    
    print2DArr(arr,row,col);
	return 0;
}
