#include<stdio.h>
int main()
{
   int a[10],i,n,sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
        sum+=a[i];       
     }
  printf("%d",sum);
  int max=a[0];
  int maxp=0;
  for(i=1;i<n;i++)
    {
       if(a[i]>max)
       {
         max=a[i];
         maxp=i;
       }
    }
  printf("%d",maxp);
}
