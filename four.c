#include<stdio.h>
int main(){
    int n1,n2,lcm,hcf;
printf("Enter the numbers ");
scanf("%d%d",&n1,&n2);
for(lcm=n1>n2?n1:n2;lcm<=n1*n2;lcm=lcm+(n1>n2?n1:n2)){
    if(lcm%n1==0&&lcm%n2==0){
        break;
    }
}
hcf=(n1*n2)/lcm;
printf("HCF is %d ",hcf);



return 0;
}