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
        int n, k;

        scanf("%d%d", &n, &k);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare_ints);

        int ans = 0;

        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                ans += -arr[i];
            }
        }


        printf("%d\n", ans);
    }

    return 0;
}