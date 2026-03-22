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

int min(int arr[], int n) {
    int m = arr[0];

    for (int i = 0;i < n; i++) {
        if (arr[i] < m) {
            m = arr[i];
        }
    }

    return m;
}

int max(int arr[], int n) {
    int m = arr[0];

    for (int i = 0;i < n; i++) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }

    return m;
}

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

        int mn = min(arr, n);
        int mx = max(arr, n);

        qsort(arr, n, sizeof(int), compare_ints);

        int idx = 0;

        for (int i = mn; i <= mx; i++) {
            if (idx < n && arr[idx] == i) {
                idx++;
            }
            else {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}