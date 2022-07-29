#include <iostream>
using namespace std;
int main() {
 int num,divider = 2;
  cout<<"enter a number"<<endl;
  cin>>num;
  while(divider<num){
    if(num%divider==0){
      cout<<num<<" is not a prime number"<<endl;
      break;
    }
    divider++;
  }
  if(divider==num){
    cout<<num<<" is a prime number"<<endl;
  }
}