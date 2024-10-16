#include<iostream>
using namespace std;

int factorial (int num) {
    int fact=1;
    for (int i=1;i<=num;i++ ) {
        fact = fact*i;
    }
    return fact;
}
int ncr(int n , int r) {
    int factn=factorial(n);
    int factr=factorial(r);
    int factncr=factorial(n-r);
    return factn/(factr * factncr);
}
int main(){
    // cout<<factorial(5)<<"\n";
    cout << ncr(8,2) ;

}