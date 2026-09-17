/*take input marks of a student and print the grade according to marks ;
1> 91-100-excellent
2> 81-90-very good
3>71-80-Good
4>61-70-can do better 
5>51-60-Average
6>40-50-Below average
7> <40 Fail*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks:";
    cin>>n;
    if(n>=91){
        cout<<"excellent";
    }else if(n>=81){
            cout<<"very good";
        }else if(n>=71){
                cout<<"Good";
            }else if(n>=61 ){
                    cout<<"can do better";
                }else if(n>=51){
                        cout<<"Average";
                    }else if(n>=40){
                            cout<<"Below average";
                        }else{
                            cout<<"Fail";
                        }
    return  0;
}//we can do solve this problem with many way but else if make code clear .