#include<iostream>
using namespace std;

// int OddEven(int a){
//     if(a&1) return 1;
//     return 0;
// }

int OddEven(int a){
    if(a%2 == 0) return 0;
    return 1;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int ans = OddEven(num);
    if (ans == 1)
    {
         cout<<"This numer is odd number"<<endl;
    }else cout<<"This numer is even number"<<endl;
    return 0; 
}