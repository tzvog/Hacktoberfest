/* WAP to implement BINARY SEARCH iterative as well as recursive method.*/

#include<stdio.h>
int binary_search(int a[],int f, int l ,int key)
{
    int mid;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if(key<mid)
        {
            l=mid-1;
        }
        else if(key>mid)
        {
            f=mid+1;
        }
    }

int main()
    {
        int key,i,n,index;
        printf("Enter the limit: \t");
        scanf("%d",&n);
        int a[n];
        int f=0,l=n-1;
        printf("Enter the array \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the value to search :");
        scanf("%d",&key);
        index=binary_search(a,f,l,key);
        if(index>=0)
        {
          printf("%d found at %d th position",key,index+1);
        }
        else
        {
            printf("%d not found ",key);
        }

        return 0;
    }


