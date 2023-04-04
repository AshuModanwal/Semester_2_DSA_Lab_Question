#include<conio.h>
int main(){
    int arr[5];
    printf("Enter the element in array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);

    }
int sum = 0;
for(int i=0; i<5; i++){
    sum+= arr[i];
}
printf("Sum of Element in Array: %d", sum);
return 0;
}