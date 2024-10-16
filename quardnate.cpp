#include<iostream>
using namespace std;

int main(){
    float a; 
    float b;
    cout<<"Enter your x-axis value  : " ;
    cin >> a;
    cout<<"Enter your y-axis value :  " ;
    cin >> b;
    if (a>0 & b>0) {
        cout<<"first quardinate ";
    }else if(a<0 & b<0) {
        cout<<"Third quardinate " ;
    }else if(a>0 & b<0) {
        cout << "Fourth quardinate ";
    }else if(a<0 & b>0){
        cout<<"Second quardinate " ;
    }else if(a>0 & b==0) {
        cout <<"positive X-axis ";
    }else if(a<0 & b==0) {
        cout<<"Negative X-axis " ;
    }else if(a==0 & b>0) {
        cout<<"Positive Y-axis " ;
    }else if(a==0 & b<0) {
        cout<<"Negative Y-axis" ;
    }else {
        cout<<"Origen" ;
    }

    }