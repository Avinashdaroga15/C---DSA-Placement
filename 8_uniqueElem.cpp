#include <iostream>
using namespace std;
void uniqueElement(int *arr,int size){
  //logic 1 basic 
  // for(int i=0;i<size-1;i++){
  //   bool flag = true;
  //   if(arr[i]!=0){
  //     for(int j = i+1;j<size;j++){
  //       if(arr[i]==arr[j]){
  //         arr[j]=0;
  //         flag=false;
  //         break;
  //       }
  //     }
  //     if(flag){
  //       cout<<"unique element is "<<arr[i]<<endl;
  //     }
  //   }
  // }
//logic 2 better logic using XOR bistwise operator
  int ans =0; 
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
      }
      cout<<"unique element is "<<ans<<endl;
}

int main() {
  int arr[9] = {2,3,5,8,9,3,5,2,8};
  int size =9;
  uniqueElement(arr,size);
  
}