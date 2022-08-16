// WAP to know the length of a given integer number
#include <iostream>
#include <cstdlib>
using namespace std;
// int cout_digt(int a){
//   if(abs(a)/10==0) return 1;
//   return 1+ cout_digt(abs(a)/10);
// }

int cout_digt(int a){
  int count =0;
  while(a>0){
    a/=10;
    count++;
  }
  return count;
}
int main() {
  int num,len;
  cout<<"Enter a number"<<endl;
  cin>>num;
  len = cout_digt(num);
  cout<<"the length of "<<num<<" is "<<len<<endl;
  return 0;
}