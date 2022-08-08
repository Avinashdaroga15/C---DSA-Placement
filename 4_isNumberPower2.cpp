#include<iostream>
using namespace std;
string isPowerOf2(int n){
    // // first logic
    // int pow =1;
    // while (pow<=n)
    // {
    //     pow*=2;
    //     if(pow == n){
    //         return "True";
    //     }
    // }
    // return "False";

    // second logic
        if(!(n&1) || n==1){
            return "True";
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