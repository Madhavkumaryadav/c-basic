#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your number : ";
    cin >>n;
    int sum;
    for (int i=1; i<=n; i++) {
        if (i%3==0) {
            sum=sum+i;
            cout<<i<<"\n";
        }
    }
    cout<<"sum of n number divided by 3 : " << sum ;
    cout<<"\n";
    return 0;
}