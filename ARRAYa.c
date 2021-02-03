//C prog to sort an array in ascending order
#include<stdio.h>

int main()
{
    int i,j,temp,n,arr[10];
    printf("enter the number\n");
    scanf("%d",&n);
    
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //for(i=0;i<n;i++){
       // printf("%d ",arr[i]);
    //}
    //Nested loop to sort the array
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    


    return 0;
}