#include <stdio.h>

int main() {
    int i,j,n,key;
    int a[5];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        key=a[i];//Takes key value initially as 2nd value of array
        j=i-1;//the j var is initialized as first element
        while(j>=0&&a[j]>key)//the while loop compares the key value to it's preceeding value of an array
        {
            a[j+1]=a[j];//the value is swapped to it's desired position
            j=j-1;
    
        }
        a[j+1]=key;//the key value is kept back to it's position
    }
    for(i=0;i<n;i++)
      printf("%d",a[i]);

    return 0;
}
/*the insertion sort algorithm takes one of the element as key element and then it compares key element to it's preceeding element*/
