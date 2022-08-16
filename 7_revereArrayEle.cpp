//a program to reverse the element of an array 
#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start,end;
    for (start = 0,end = size-1; start<=end; start++,end--)
    {
        int temp = arr[end];
        arr[end]=arr[start];
        arr[start] = temp;
    }
    
}

void printArr(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int arr1[7] = {2,-1,4,6,8,5,7};
    int size = 7;
    cout<<"Array before reverse operation"<<endl;
    printArr(arr1,size);
    reverse(arr1,size);
    cout<<"Array after reverse operation"<<endl;
    printArr(arr1,size);
    return 0;
}