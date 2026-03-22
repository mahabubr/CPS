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
        int a, b;

        scanf("%d%d", &a, &b);

        int ans = a * 2 + 100;
        ans -= b;

        printf("%d\n", ans);
    }

    return 0;
}