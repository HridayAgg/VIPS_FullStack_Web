#include <iostream>
using namespace std;

bool IsPresent(int arr[][3],int target,int row,int column){
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            if (arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[2][3];
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];

        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if (IsPresent(arr,2,2,3)){
        cout<<"Element found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}