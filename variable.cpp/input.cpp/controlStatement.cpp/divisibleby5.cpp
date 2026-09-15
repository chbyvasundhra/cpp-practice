//take positive integer inputand tell if it is divisible by 5 or not?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(n%5==0){
        cout<<"n is divisible by 5";
    }
    if(n%5!=0){
        cout<<"n is not divisible by 5";
    }
    return 0;
}