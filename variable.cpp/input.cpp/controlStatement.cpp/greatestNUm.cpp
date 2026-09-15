//take 3 positive integer input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;
    cout<<"Enter number c:";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    if(b>a && b>c){
        cout<<"b is greatest";
    }
    if(c>b && c>a){
        cout<<"c is greatest";
    }
    
    return 0;
}