#include<stdio.h>
int main()
{
int i, values[5];
printf("Enter any 5 integers:");
for(i=0;i<5;i++)
{
scanf("\n%d",&values[i]);
}
printf("Displaying integers:");
for(i=0;i<5;i++)
{
printf("\n%d",values[i]);
}
return 0;
}                                                                                   
