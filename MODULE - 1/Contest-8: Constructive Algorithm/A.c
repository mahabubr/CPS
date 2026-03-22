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
        int n, k, x;

        scanf("%d %d %d", &n, &k, &x);

        if (k > n || x < k - 1) {
            printf("-1\n");
        }
        else {
            int ans = k * (k - 1) / 2;

            if (x == k) x--;

            ans += x * (n - k);

            printf("%d\n", ans);
        }
    }

    return 0;
}