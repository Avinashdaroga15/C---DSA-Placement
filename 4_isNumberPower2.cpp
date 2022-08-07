#include<iostream>
using namespace std;
string isPowerOf2(int n){
    int pow =1;
    while (pow<=n)
    {
        pow*=2;
        if(pow == n){
            return "True";
        }
    }
    return "False";
}


int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    string ans = isPowerOf2(num);
    cout<<ans<<endl;
    return 0;
}