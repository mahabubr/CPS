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
        int n;

        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                ans += arr[i];
            }
            else {
                ans += -arr[i];
            }
        }

        printf("%d", ans);
        
        printf("\n");
    }

    return 0;
}