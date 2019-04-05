// The program which is given below performs the addition of n odd numbers



#include<stdio.h>
void main()
{
int l=0,m,n;
printf("Enter the value which you will like to perform addition");
scanf("%d",&n);
for(m=1;m<=n;m++)
{
if(m%2 !=0)
{
l=l+m;
}
}
printf("the addition is %d",l);
} 
