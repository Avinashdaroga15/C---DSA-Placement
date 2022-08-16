//a program to find the occurrence of each element of array in array
#include<iostream>
using namespace std;
void frequencyOfEle(int a[], int size){
    int count,visited[9]={0};
    for (int i = 0; i < size; i++)
    {
        if (visited[i]==1)
        {
            continue;
        }
        count=1;
        for (int j = i+1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
            
        }
        cout<<"The occurrence of "<<a[i]<<" is "<<count<<endl;
    }
    
}

int main(){
    int arr[9] = {2,3,5,8,9,3,5,2,8};
    int size = 9;
    frequencyOfEle(arr, size);
}