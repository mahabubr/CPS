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
        int n, k;

        scanf("%d %d", &n, &k);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }


        while (k--) {
            for (int i = 0; i < n; i++) {
                if (arr[i] > 0) {
                    arr[i]--;
                    arr[n - 1]++;

                    break;
                }
            }
        }


        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }


        printf("\n");
    }

    return 0;
}