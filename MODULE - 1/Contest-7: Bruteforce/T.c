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
        long long int n;

        scanf("%lld", &n);

        long long int mn = llabs(n);

        for (long long int i = 0; i < 1e6; i++) {
            if (n < i * i) {
                break;
            }

            long long int j = round(sqrt(n - i * i));

            int ans = llabs(i * i + j * j - n);

            if (ans < mn) {
                mn = ans;
            }
        }

        printf("%lld", mn);
    }

    return 0;
}