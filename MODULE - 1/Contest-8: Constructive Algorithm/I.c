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

        int a[n * 2];

        for (int i = 0; i < n * 2; i++) {
            a[i] = -1;
        }

        int j = 0;

        a[j] = arr[0];

        for (int i = 1; i < n; i++) {
            j++;

            if (arr[i] < arr[i - 1]) {
                a[j] = arr[i];
                j++;
            }

            a[j] = arr[i];
        }

        int len = 0;

        for (int i = 0; i < n * 2; i++) {
            if (a[i] != -1) {
                len++;
            }
        }

        printf("%d\n", len);

        for (int i = 0; i < n * 2; i++) {
            if (a[i] != -1) {
                printf("%d ", a[i]);
            }
        }

        printf("\n");
    }

    return 0;
}