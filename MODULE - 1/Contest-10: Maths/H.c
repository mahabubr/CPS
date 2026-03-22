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

        for (int i = 0; i < n; i++) {
            arr[i] = abs(arr[i]);
        }

        int mn = arr[0];

        for (int i = 0; i < n; i++) {
            if (arr[i] < mn) {
                mn = arr[i];
            }
        }

        printf("%d\n", mn);
    }

    return 0;
}