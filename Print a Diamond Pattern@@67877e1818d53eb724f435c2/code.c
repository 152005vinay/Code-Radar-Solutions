#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=(n-1)/2 + 1;
            if(i==a || j==a || n-1-i<){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}