//take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(n%2==0){
        cout<<"n is even";
    }
    if(n%2!=0){
        cout<<"n is odd";
    }
    return 0;
}