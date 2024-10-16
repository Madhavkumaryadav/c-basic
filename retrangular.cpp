// #include <iostream>
// using namespace std;

// int main(){
// int a=6;
// for (int i=1; i<=a;i++){
//     // cout<<"*";
//     for (int j=1; j<=4;j++){
//         cout<<"  ";
    
//     }
//     for (int k=1; k<=i-2;k++  ){
//         cout<<"*";
//     }
//     cout<<"\n";

// }
// }
#include <iostream>
using namespace std;

int main() {
    int rows = 6;
    int cols = 4;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            
            if (j == 0 || j == cols - 1) {
                cout << "S "; 
            } else if (i == 0 || i == rows - 1) {
                cout << "S "; 
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}