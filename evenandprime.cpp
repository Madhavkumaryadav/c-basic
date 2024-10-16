#include <iostream>
using namespace std;

int factorial(int a){
    // int fact=1;
    // for (int i=1;i<=a;i++) {
    //     fact=fact *i;
    //     }
    //     return fact;
    if (a%2==0) {
        cout<<"even\n";
    } 
    else{
        cout <<"odd \n";
    }
        
}
int main(){
    cout<<"factorial  : " <<factorial(5);
}
