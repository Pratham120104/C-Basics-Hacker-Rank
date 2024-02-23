#include <stdio.h>
#define N 1000

int main() 
{
    int arr[N];

    int n;
      scanf("%d", &n);
    for (int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing the reverse of the array
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}
