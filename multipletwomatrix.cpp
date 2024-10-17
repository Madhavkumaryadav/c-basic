#include <iostream>
using namespace std;
int main() {
    int choice,rows,cols;
    cout <<"Enter your choice : \n";
    cin>>choice;
    
    cout <<"Add two matrices\n";
    cin>>rows;

    cout<<"multiply two matrices : \n";
    cin >> cols;

    int matrix1 [rows][cols],matrix2[rows][cols],result[rows][cols];
    cout<<"Enter elements for matrix 1 : \n";
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter elemsnts for matrix2 : \n";
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin >>matrix2[i][j];
        }
    }
    
    switch(choice){
        case 1:
        for (int i=0;i<rows;i++){
            for (int j=0; j<cols; j++){
                result[j][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
        cout<<"Sum of the matrices : \n";
        break;
    case 2:
    for (int i=0;i<rows;i++){
        for (int j=0; j<cols;j++){
            result[i][j]=0;
            for(int k=0;k<cols;k++){
                result [i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
                
    }
    cout<<"product of matrices : \n";
    break;
    default:
   
    cout<<"Invalide choice ! \n";


    return 1;

}
for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        cout<<result[i][j];
    }
    cout<<"\n";
}
return 0;

}