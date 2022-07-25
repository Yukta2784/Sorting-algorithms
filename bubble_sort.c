#include <stdio.h>

int main()
{   int temp;
    int a[5]={0,98,76,333,87};
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5-i;j++){
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
            
        
    }
    for (int k=0;k<5;k++)
    {
        printf("%d\n",a[k]);
    }
}
