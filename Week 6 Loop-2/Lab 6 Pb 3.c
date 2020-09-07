#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter input: ");
    scanf("%d",&n);

    printf("\n\nOutput: \n");
    for(i=1; i<=n; i++){
        if(i%2!=0){
            for(j=1; j<=i; j++){
                if(j%2!=0){
                     printf("%d ",j);
                }
            }
            printf("\n");
        }
        else if(i%2==0){
            for(j=1; j<=i; j++){
                if(j%2==0){
                     printf("%d ",j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
