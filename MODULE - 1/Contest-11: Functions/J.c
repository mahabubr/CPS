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

int sum(int arr[], int n) {

    int s = 0;

    for (int i = 0; i < n; i++) {
        s += arr[i];
    }

    return s;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int h, n;

        scanf("%d%d", &h, &n);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int s = sum(arr, n);

        int ans = h - s;

        if (ans <= 0) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}