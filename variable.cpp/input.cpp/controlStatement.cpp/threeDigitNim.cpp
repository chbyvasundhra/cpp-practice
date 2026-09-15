//take positive integer input and tell if it is a three digit number or not .
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter m:";
    cin>>m;
    if((m>=100) && (m<=999)){
        cout<<"Three digit number ";
        
    }
    else{
        cout<<"Not three digit number";

    }
    
    return 0;
}