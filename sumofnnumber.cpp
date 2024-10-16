#include <iostream>
using namespace std;

int sumofnnumber(int n) {
    int sum=0;
    for (int i=1; i<=n ; i++) {
        sum=sum+i;
    }
    return sum;
}
int main() {
    cout<<sumofnnumber(5) << "\n";
    cout<<sumofnnumber(10) << "\n";
    cout<<sumofnnumber(50) << "\n";
}