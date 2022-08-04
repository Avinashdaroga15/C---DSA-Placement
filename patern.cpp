/*
       1
      121
     12321
    1234321
*/
#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "enter a number" << endl;
  cin>>num;
  int row=1;
  while(row<=num){
    int space=1; 
    while(space<=num-row){
      cout<<"  ";
      space++;
    }
    int numberFor = 1;
    while(numberFor<=row){
      cout<<numberFor<<" ";
      numberFor++;
    }
    int numberRev =1;
    while(numberRev<row){
      cout<<numberFor-2<<" ";
      numberRev++;
      numberFor--;
    }
    cout<<endl;
    row++;
  }
}