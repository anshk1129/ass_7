#include<stdio.h>
int main(){
int n1,n2,flag,i,j;
printf("Enter the range");
scanf("%d%d",&n1,&n2);
for(i=n1+1;i<=n2-1;i++){
    for( j=2;j<i;j++){
        if(i%j==0)
        break;
    }
        if(j==i)
        printf("%d ",i);
    
    
}

return 0;
}