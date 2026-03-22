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
        int n, m;

        scanf("%d %d", &n, &m);

        int ans = m;

        if (ans < 1) {
            ans = 1;
        }

        if (n - m < ans) {
            ans = n - m;
        }

        printf("%d\n", ans);

    }

    return 0;
}