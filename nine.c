#include<stdio.h>
int main(){
int n,n1,r,val=0;
printf("Enter a number ");
scanf("%d",&n);
n1=n;
while(n1!=0){
r=n1%10;
val=val+r*r*r;
n1=n1/10;
}
if(n==val)
printf("Its a armstrong number");
else
printf("Not a armstrong number");
return 0;
}