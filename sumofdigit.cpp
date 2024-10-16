#include<iostream>
using namespace std;

int sumofdigit(int n) {
    int digit=0;
    while (n>0) {
        int lastdigit = n%10;
        n /=10;
        digit += lastdigit;
    }
    return digit; 
}
int main(){
    cout<<"sum of digit : " << sumofdigit(17181920);
    
}