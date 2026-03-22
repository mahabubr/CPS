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

        int n = 21;

        int arr[n];
        int value = 0;

        for (int j = 0; j < n && value <= 100; j++) {
            arr[j] = value;


            value += 5;
        }

        int a = 0;
        int b = 0;

        int k;

        scanf("%d", &k);

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if (k <= arr[i + 1] && k >= arr[i]) {
                a = k - arr[i];
                b = arr[i + 1] - k;

                if (a < b) {
                    ans = arr[i];
                }
                else {
                    ans = arr[i + 1];
                }
            }
        }

        // a -= k;
        // b -= k;

        // a = abs(a);
        // b = abs(b);

        // int mn = a;

        // if (b < mn) {
        //     mn = b;
        // }

        printf("%d\n", ans);
    }

    return 0;
}