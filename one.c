#include<stdio.h>
int main(){
int n,a=0,b=1,c;
printf("enter the term which you want to find");
scanf("%d",&n);
n--;
while(n!=0){
    c=a+b;
    a=b;
    b=c;
      n--;    
}
printf("Nth fibonacci series is %d",a);

return 0;
}