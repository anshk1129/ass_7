#include<stdio.h>
int main(){
int n,a=0,b=1,c;
printf("enter the term which you want to find");
scanf("%d",&n);
while(n!=0){
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
      n--;    
}


return 0;
}