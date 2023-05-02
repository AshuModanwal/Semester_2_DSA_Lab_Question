#include<stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    int word;
    scanf("%d", &word);
    int baseAdd;
    scanf("%d", &baseAdd);
    int i, j;
    printf("enter row and coulmn number for finding add: ");
    scanf("%d%d", &i,&j);
    int lc, lr;
    scanf("%d%d", &lr, &lc);
    int loc = baseAdd + word * ((j-lc)*m + (i-lr));
    printf("address of arr[%d][%d] : %d ", i, j, loc);
    return 0;
}