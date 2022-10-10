#include<stdio.h>
int main()
{
    
    int key, i, pos = -1, size=5;
    int arr[5] = {1, 20, 5, 78, 30};
    printf("Array before deletion: ");
    
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    printf("Enter element to delete: ");
    scanf("%d",&key);
    // traverse the array
    // if any element matches the key, store its position
    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    if(pos != -1)
    {
        //shift elements backwards by one position
        for(i = pos; i < size - 1; i++)
            arr[i] = arr[i+1];
        printf("Array after deletion: ");
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");
    return 0;
}
