#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your number : " ;
    cin >> n;
    if (n>0){
        
        cout<<"positive \n" ;
       
    } else if(n<0){
        cout<<"Negative \n"; 
    } 

    else {
        cout << "Zero \n";
    }

    return 0;
}