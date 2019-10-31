          //CREATING CODE TO FIND WEEK DAY

#include<stdio.h>
int main()
{
int code;
printf("Enter week day number=\n");
scanf("%d",&code);

if(code==1)
printf("Monday");

else if(code==2)
printf("Tuesday");

else if(code==3)
printf("Wednesday");

else if(code==4)
printf("Thursday");

else if(code==5)
printf("Friday") ;

else if(code==6)
printf("Saturday");

else if(code==7)  
printf("Sunday");

else
printf("Invalid output");
return 0;
}    
