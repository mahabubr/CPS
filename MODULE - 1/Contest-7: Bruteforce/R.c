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

    // scanf("%d", &t);

    while (t--) {
        int n, x;

        scanf("%d %d", &n, &x);

        n--;

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int mn = arr[0];
        int mx = arr[0];

        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] < mn) {
                mn = arr[i];
            }

            if (arr[i] > mx) {
                mx = arr[i];
            }

            sum += arr[i];
        }

        for (int i = 0; i <= 100; i++) {
            int f_sum = 0;

            if (i < mn) {
                f_sum = sum - mx;
            }
            else if (i > mx) {
                f_sum = sum - mn;
            }
            else {
                f_sum = sum - mn - mx + i;
            }

            if (f_sum >= x) {
                printf("%d\n", i);

                return 0;
            }


        }

        printf("%d\n", -1);

    }

    return 0;
}