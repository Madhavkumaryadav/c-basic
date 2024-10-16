#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number ";
    cin>> n;
    int sum;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;

    }
    cout<<"the sum of number is : " << sum <<"\n";
    return 0;
}