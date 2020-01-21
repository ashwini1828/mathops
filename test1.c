#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a,b,sum=0,sub=0,pro=1,quo,rem;
printf("Enter the value of a=\n");
scanf("%d",&a);
printf("Enter the value of b=\n");
scanf("%d",&b);
{
   int choice;
   do
   {
       printf("Enter 1 to ADD\n");
       printf("Enter 2 to MULTIPLY\n");
       printf("Enter 3 to SUBTRACT\n");
       printf("Enter 4 to get QUOTIENT and REMAINDER\n");
       printf("Enter 5 to know which number is greater among two\n");
       printf("Enter 6 to get new set of DATA\n");
       printf("Enter 0 to EXIT\n");
       printf("Enter the choice:");
       scanf("%d",&choice);
       switch(choice)
   {
       case 1 : sum=a+b;
       printf("The sum is %d\n",sum);
       break;
       case 2 : pro=a*b;
       printf("The product is %d\n",pro);
       break;
       case 3 : sub=a-b;
       printf("The difference is %d\n",sub);
       break;
       case 4 :if(a==0,b==0)
       {
           printf("STFU\n");
       }
       else
       {
       quo=a/b;
       printf("The quotient is %d\n",quo);
       rem=a%b;
       printf("The remainder is %d\n",rem);
       }
       break;
       case 5 :(a-b>0 && printf("a is greater than b\n"))|| printf("b is greater than a\n");
       break;
       case 6 : printf("Enter the value of a\n");
       scanf("%d",&a);
       printf("Enter the value of b\n");
       scanf("%d",&b);
       break;
       case 0 : exit(0);
       }
}while(choice!=0);
}
getch();
}
