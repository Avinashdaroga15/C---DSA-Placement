#include<iostream>
using namespace std;

int main(){
    int amount,note,noteNum,count=1;
    cout<<"Enter a number "<<endl;
    cin>>amount;

    while (amount != 0)
    {
        switch (count)
        {
        case 1: note=100;
                count++;
                break;
        case 2: note=50;
                count++;
                break;
        case 3: note=10;
                count++;
                break;
        case 4: note=1;
                count++;
                break;
        }

        if (amount/note>0)
        {
            noteNum = amount/note;
            cout<<"Number of notes of "<<note<<"th note is "<<noteNum<<endl;
            amount%=note;
        }
        
    }
    return 0; 
}