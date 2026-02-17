//wap to insert element at given location in array
#include <stdio.h>

int main() {
    int arr[20], n,i,pos,value,num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

     printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i=n-1;i>= pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1]=num;
    n++;
    printf("The array after insertion is: ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    return 0;
    

}
