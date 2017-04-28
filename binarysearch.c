#include<stdio.h>
#include<stdlib.h>

void disp_arr(int[],int);
int bin_search(int[],int,int);

main()
{
    int arr[10],n,i,posi,key;
    system("cls");
    printf("\n--------------BINARY SEARCH------------------");
    printf("\n Enter the number of elements ");
    scanf("%d",&n);
    printf("\n Enter the elements in an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Array elements are----\n");
    disp_arr(arr,n);
    printf("\n Enter the key element ");
    scanf("%d",&key);
    posi=bin_search(arr,n,key);
    if (posi!=-1)
        printf("\n Element %d is found at %d position",key,posi);

}

void disp_arr(int arr[],int m)
{
    int i;
    for (i=0;i<m;i++)
        printf("\t %d",arr[i]);

}

int bin_search(int arr[],int size,int ele)
{
    int lb,ub,mid;
    lb=0;
    ub=size-1;
    while (lb<=ub)
    {
        mid=(lb+ub)/2;
        if (ele<arr[mid])
            ub=mid-1;
        else if (ele>arr[mid])
            lb=mid+1;
        else
        {
            printf("\n Binary search sucessfull ");
            return (mid+1);

        }
    }
    printf("\n Binary search unsucessful");
    return(-1);
}
