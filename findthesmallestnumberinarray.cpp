#include<iostream>
using namespace std;

int main(){
    int nums[] = {4,24,54,46,-34,75};
    int size =6;
    int smallest = INT_MAX;

    for (int i=0; i<size; i++) {
        if (nums[i] < smallest){
            smallest =nums[i];
        }
    }cout<<"smallest = " <<smallest<<endl;

    return 0;
}

