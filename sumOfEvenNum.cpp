#include <iostream>
using namespace std;
int main() {
 int n,number = 1,sum=0;
  cout<<"enter a number "<<endl;
  cin>>n;
  while(number<=n){
    if(number%2==0){
      sum=sum+number;
      cout<<number<<" ";
    }
    number++;
  }
cout<<"the sum of all even numbers till "<<n<<" is "<<sum<<endl;  
}