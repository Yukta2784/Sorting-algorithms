#include <stdio.h>

int main()
{
   int a[6]={5,4,10,1,6,2};
   int temp=1;
   int t;
   while(temp!=6)
   {
      for (int i=0;i<temp;i++)
      {
          if(a[i]>a[temp]){
              t=a[i];
              a[i]=a[temp];
              a[temp]=t;
          }
          
      }
      temp++;
   }
   for (int j=0;j<6;j++)
   {
       printf("%d\n",a[j]);
   }
}
