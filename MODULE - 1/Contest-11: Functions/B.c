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

int max(int arr[], int n) {
    int mx = arr[1];

    for (int i = 1; i < n; i++) {
        if (mx < arr[i]) {
            mx = arr[i];
        }
    }

    return mx;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);


        int arr[n];

        if (n == 1) {
            printf("%d\n", 0);

            return 0;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int mx = max(arr, n);

        int ans = mx - arr[0] + 1;

        if (mx < arr[0]) {
            ans = 0;
        }

        printf("%d\n", ans);
    }

    return 0;
}