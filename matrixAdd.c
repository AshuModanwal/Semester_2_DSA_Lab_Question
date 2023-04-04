#
    }include<stdio.h>
int main(){
    int arr1[3][3], arr2[3][3];
    printf("Enter the element in 1st matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nEnter the element in 2nd matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr2[i][j]);
        }
    
    int sum[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printf("\nthe addition of Matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    
    
}