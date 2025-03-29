#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(n/2-1-i=<j && n/2-1+i>=j){
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