#include<bits/stdc++.h>
using namespace std;

void spiralMatrix(int matrix[3][3], int row, int col){
    int startRow=0;
    int endRow=row-1;
    int startCol=0;
    int endCol=col-1;


    int count=0;
    int total=row*col;
    int ans[total];

    while(count < total){
        //print starting row
        for(int i = startCol; count < total && i<=endCol; i++){
            ans[count]=matrix[startRow][i];
            count++;
        }
        startRow++;
        
        //print ending col
        for(int i = startRow; count < total && i<=endRow; i++){
            ans[count]=matrix[i][endCol];
            count++;
        }
        endCol--;

        //print ending row
        for(int i = endCol; count < total && i>=startCol; i++){
            ans[count]=matrix[endRow][i];
            count++;
        }
        endRow--;

        //print starting col
        for(int i = endRow; count < total && i>=startRow; i++){
            ans[count]=matrix[i][startCol];
            count++;
        }
        startCol++;
    }

    for(int i=0;i<total;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

}


int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    spiralMatrix(arr,3,3);

}