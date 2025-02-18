#include<stdio.h>
int main(){
    int a,n,sum=0;
    a=0;
    scanf("%d",&n);
    while(a<n){
        a++;
        sum+=a;
    }
    printf("%d",sum);
}