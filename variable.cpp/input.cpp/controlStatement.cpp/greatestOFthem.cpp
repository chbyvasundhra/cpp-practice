#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<" a is greatest";
        }else{
            cout<<"c is greatest";
        }
    }else{
        if(b>c){//b>a
            cout<<" b is greatest";
        }
        else{//c>b>a
            cout<<" c is greatest";
        }
    }
    return 0;

}