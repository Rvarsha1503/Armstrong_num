#include<stdio.h>
#include<math.h>
int main()
{
   float num,count=0,r,temp2;
   int temp;
   float sum=0;
   printf("enter a number:");
   scanf("%d",&num);
   temp=num;
   temp2=num;
   while(num!=0)
   {
      num=num/10.0;
      count++;
   }
   printf("the number of digits in the given number is: %d\n",count);
   int c=1;
   while(temp!=0)
   {
      r=temp%10;
      sum = sum + pow(r,count);
      temp=temp/10;
      c++;
      printf("%f, %f, %f, %f\n", r, count, pow(r,count), sum);
   }
   printf("the sum is %f\n",sum);
   if(sum == temp2)
   {
      printf("%d is armstrong number\n",temp2);
   }
  else
  {
      printf("%d is not armstong number\n",temp2);
  }
 return 0;
}
