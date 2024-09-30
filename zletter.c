#include<stdio.h>
int main(){
    int i,j,len,spaces,abc;
    printf("ENTER THE LENGTH OF THE Z : ");
    scanf("%d",&len);
    spaces = len-1;
    abc = 0;
    for(i = 0;i<len;i++){
        printf("*");
    }
    for (i=len;i>1;--i){
        for(j=0;j<spaces;j++){
            printf(" ");
        }
        printf("*");
        for(j=0;j<abc;j++){
            printf(" ");
        }
        spaces -= 1;
        abc += 1;
        printf("\n");
    }
    for(i = 0;i<len;i++){
        printf("*");
    }
    return 0;
}