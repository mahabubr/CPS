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

        for (long long int i = 0; i * i <= (n); i++) {
            long long int tmp = n - i * i;
            long long  int j = (long long)sqrt(tmp);

            long long a = llabs(i * i + j * j - n);

            if (a < mn) {
                mn = a;
            }

        }

        printf("%lld", mn);
    }

    return 0;
}