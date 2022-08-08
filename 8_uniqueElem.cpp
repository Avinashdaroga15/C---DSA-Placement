#include <iostream>
using namespace std;
int main() {
  int arr[9] = {2,3,2,8,4,3,5,5,8};
  int size =9;
  for(int i=0;i<size-1;i++){
    bool flag = true;
    if(arr[i]!=0){
      for(int j = i+1;j<size;j++){
        if(arr[i]==arr[j]){
          arr[j]=0;
          flag=false;
          break;
        }
      }
      if(flag){
        cout<<"unique element is "<<arr[i]<<endl;
      }
    }
  }
  
}