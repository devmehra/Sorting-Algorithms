#include<stdio.h>

void print(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void selection(int *a, int n)
{
    int i,j,temp,min,t;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                temp=j;
            }
        }
        if(min!=a[i])
        {
            t=a[i];
            a[i]=min;
            a[temp]=t;
        }
    }
}
int main()
{
    int a[]={3,1,5,6,7,4,9,2,8};
    int n=9;
    selection(a,n);
    print(a,n);
    return 0;
}
