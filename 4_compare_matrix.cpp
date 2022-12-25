#include<iostream>
using namespace std;

int main(){
    int row1,row2,column1,column2,compare=0;
    cout<<"Enter Rows for first matrix"<<endl;
    cout<<"Enter Rows for first matrix"<<endl;
    cin>>row1;
    cout<<"Enter columns for first matrix"<<endl;
    cin>>column1;
    int i,j,matrix1[row1][column1];
    cout<<"Enter elements for first matrix"<<endl;
    for(i=0 ; i<row1 ; i++){
        for(j=0 ; j<column1 ; j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter Rows for Second matrix"<<endl;
    cin>>row2;
    cout<<"Enter columns for second matrix"<<endl;
    cin>>column2;
    int matrix2[row2][column2];
    cout<<"Enter elements for Second matrix"<<endl;
    for(i=0 ; i<row2 ; i++){
        for(j=0 ; j<column2 ; j++){
            cin>>matrix2[i][j];
        }
    }
    cout<<"Matrix 1 is : "<<endl;
    for(i=0 ; i<row1 ; i++){
        for(j=0 ; j<column1 ; j++){
            cout<<matrix1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrix 2 is : "<<endl;
    for(i=0 ; i<row2 ; i++){
        for(j=0 ; j<column2 ; j++){
            cout<<matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    if(row1!=row2 || column1!=column2){
        cout<<"Don't compare because order is not same"<<endl;
        exit(0);
    }
    for(i=0 ; i<row1 ; i++){
        for(j=0 ; j<column1 ; j++){
            if(matrix1[i][j]!=matrix2[i][j]){
                compare=1;
            }
        }
    }
    if(compare==0){
        cout<<"Equal Matrix"<<endl;
    }
    else{
        cout<<"Unequal Matrix"<<endl;
    }


    return 0;
}
