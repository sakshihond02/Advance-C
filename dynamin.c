#include <stdio.h>
#include <stdlib.h>  
int main() 
{
    int n, i, j, count, sum;
    int *ptr;        
    float avg;       
    printf("Enter number of integers: ");
    scanf("%d", &n);
    int arr[n];   
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count = 0;
    for (i = 0; i < n; i++) 
	{
        if (arr[i] != 0) {
            count = count + 1;
        }
    }
    
    ptr = (int*) malloc(count * sizeof(int));
    j=0;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            ptr[j] = arr[i];
            j = j + 1;
        }
    }

    sum = 0;
    for (i = 0; i < count; i++) {
        sum = sum + ptr[i];
    }
    if (count > 0) {
        avg = (float) sum / count;
    } else {
        avg = 0;
    }
    printf("Non-zero elements: ");
    for (i = 0; i < count; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\nSum = %d\n", sum);
    printf("Average = %f\n", avg);
    free(ptr);

}

