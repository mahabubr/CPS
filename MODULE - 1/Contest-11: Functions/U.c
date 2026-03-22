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
    return x - y;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare_ints);

        int sz = 0;

        for (int i = 0; i < n; i++) {
            if (i == 0 || arr[i] != arr[i - 1]) {
                arr[sz] = arr[i];
                sz++;
            }
        }


        printf("%d\n", arr[sz - 2]);

    }

    return 0;
}