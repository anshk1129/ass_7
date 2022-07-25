#include<stdio.h>
int main(){
int n1,n2,flag,i,j;
printf("Enter the numbers");
scanf("%d %d",&n1,&n2);
flag=n1<n2?n1:n2;
for(i=2;i<=flag;i++){
    if(n1%i==0&&n2%i==0)
    break;
}
if(i==flag+1)
{
printf("%d and %d are co prime ",n1,n2);
}
else{
printf("%d and %d are not co prime ",n1,n2);
}

return 0;
}