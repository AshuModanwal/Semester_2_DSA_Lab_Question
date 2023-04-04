#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5];
    printf("Enter the element of Array:");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);

    }
    int num;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &num);
    for(int i=0; i<5; i++){
        if(num==arr[i]){
            printf("\nNumber found");
            break;
        }
        
    }
    return 0;

}