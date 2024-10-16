#include <iostream>
using namespace std;

int binaryconvert(int decnum) {
    int ans=0; int pow =1;
    while(decnum>0) {
        int rem = decnum%2;
        decnum =decnum/ 2;
        ans=ans+(rem*pow);
        pow =pow *  10;


    } return ans;

}
int main()
{
    cout<<binaryconvert(312)<<"\n";
    
    

}