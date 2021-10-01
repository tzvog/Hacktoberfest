/* WAP to implement COUNTING sort. */


#include<stdio.h>
void print_array(int a[],int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int maximum(int a[], int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
void count_sort(int a[],int n)
{
    int i,j=0,max=maximum(a,n);
    int count[max+1];
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }

    for(i=0;i<=max && j<n;i++)
    {
        while(count[i]!=0)
        {
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }

    }
}

int main()
{
    printf("Counting Sort array: \n");
    int a[]={9,8,3,1,6};
    int n= sizeof(a) / sizeof(a[0]);
    print_array(a,n);
    count_sort(a,n);
    printf("Sorted array \n");
    print_array(a,n);
    return 0;
}