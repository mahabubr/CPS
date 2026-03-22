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

int mn(int arr[], int n) {
    int m = arr[0];

    for (int i = 0;i < n; i++) {
        if (arr[i] < m) {
            m = arr[i];
        }
    }

    return m;
}

int sum(int arr[], int n) {
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += arr[i];
    }

    return s;
}

int main() {
    int t = 1;

    scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int ans = sum(arr, n) - mn(arr, n);


        printf("%d\n", ans);
    }

    return 0;
}