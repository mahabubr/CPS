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
        long long b;

        scanf("%lld", &b);

        long long ans = -1;

        for (long long a = 1; a <= 16; a++) {

            long long val = 1;
            for (int i = 0; i < a; i++) {
                val *= a;

                if (val > b) break;
            }


            if (val == b) {
                ans = a;
                break;
            }

        }

        printf("%lld\n", ans);
    }

    return 0;
}