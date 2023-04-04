#include<stdio.h>
int main(){
    int arr1[3][3];
    printf("Enter the element in 1st matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    
    int tran[3][3];
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++)
            tran[i][j] = arr1[j][i] ;
    }
    printf("\nthe transpose of Matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", tran[i][j]);
        }
        printf("\n");
    }
}