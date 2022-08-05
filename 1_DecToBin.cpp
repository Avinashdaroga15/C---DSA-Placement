//program to convert decimal number to binary number 
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num = 15,sum=0;
    int i=0,bit,orgNum=num;
    
    while (num!=0)
    {
        // bit = num&1;
        // num = num>>1;
        // sum = sum + bit* pow(10,i);
        // i++;
        bit = num%2;
        num = num/2;
        sum = sum + bit* pow(10,i);
        i++;
    }
    cout<<"Binary of "<<orgNum<<" is "<<sum<<endl;
    return 0;
}