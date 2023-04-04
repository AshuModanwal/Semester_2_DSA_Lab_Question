#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5];
    printf("Enter the element of Array:");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);

    }
    int min = arr[0];
    printf("Minimum number in Array: ");
    for(int i=1;i<5; i++){
        if(arr[i]<min)
            min = arr[i];
    }
    printf("%d",min);
}