#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(i==n/2+1 || j==n/2+1){
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