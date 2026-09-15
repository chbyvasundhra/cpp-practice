//if cost price and selling price of an item is input through the keyboard,write a program to determine whether the seller has made profit or incurred loss .also determine how much profit he made or loss he incurred.
#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter sp:";
    cin>>sp;
    cout<<"Enter cp:";
    cin>>cp;
    if(sp>cp){
        cout<<"profit \n";
        cout<<sp-cp;
    }
    if(sp<cp){
        cout<<"loss\n";
        cout<<cp-sp;
    }
    return 0;
}