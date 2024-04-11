#include<iostream>
using namespace std;

void printSum(int arr[3][3], int i,int j){
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
        
    }
    


}

int main(){

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    printSum(arr, 3,3);

    return 0;
    
    

}