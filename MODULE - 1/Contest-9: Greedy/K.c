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

        int ans = arr[n - 1] - arr[0];

        for (int i = 0; i < n; i++) {
            if (ans < arr[i] - arr[0]) {
                ans = arr[i] - arr[0];
            }
        }

        for (int i = 0; i < n; i++) {
            if (ans < arr[n - 1] - arr[i]) {
                ans = arr[n - 1] - arr[i];
            }
        }

        for (int i = 1; i < n; i++) {
            if (ans < arr[i - 1] - arr[i]) {
                ans = arr[i - 1] - arr[i];
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}