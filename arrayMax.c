#include<conio.h>
int main(){
    int arr[5];
    printf("Enter the element in array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);

    }
    int max = arr[0];
    printf("\nMaximum number in Array: ");
    for(int i=1; i<5; i++){
        if(arr[i]>max)
            max = arr[i];
    }
    printf("%d", max);
}