#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"enter a character"<<endl;
  cin>>ch;
  if(ch>='a'&& ch<='z'){
    cout<<"this "<<ch<<" is lower case character"<<endl;
  }else if (ch>='A'&& ch<='Z'){
    cout<<"this "<<ch<<" is upper case character"<<endl;
  }else{
    cout<<"this "<<ch<<" is numeric"<<endl;
  }
  
}