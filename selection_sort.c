#include <stdio.h>

int main()
{
    int a[6]={5,4,10,1,6,2};
    
    int temp;
    for (int i=0;i<6;i++)
    {
        int min=i;
        for(int j=i+1;j<6;j++)
        {
         if(a[j]<a[min])
        {
            
            temp=a[min];
            a[min]=a[j];
            a[j]=temp;
            
        }
        
        }
        }
        for(int k=0;k<6;k++)
        {
            printf("%d\n",a[k]);
        }
        
        
    
    
    
}
