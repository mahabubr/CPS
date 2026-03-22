#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>      
#include <limits.h>
#include <float.h>     
#include <time.h> 
#include <ctype.h> 
#include <fcntl.h>     
#include <unistd.h>    
#include <stdlib.h>

int compare_ints(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);  // avoids overflow
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n, m;

        scanf("%d%d", &n, &m);

        int arr[m];

        for (int i = 0; i < m; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, m, sizeof(int), compare_ints);

        int i = 0;

        int mn = 1e5;

        // for (int i = 0; i < n; i++) {
        //     printf("%d ", arr[i]);
        // }

        int j = n - 1;

        while (j < m) {
            if (arr[j] - arr[i] < mn) {
                mn = arr[j] - arr[i];
            }

            i++;
            j++;
        }

        printf("%d\n", mn);
    }

    return 0;
}