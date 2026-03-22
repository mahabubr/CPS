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
        int n;

        scanf("%d", &n);

        char s[n + 2];

        scanf("%s", s);

        int zero = 0;
        int one = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zero++;
            }
            else {
                one++;
            }
        }

        printf("%d", abs(zero - one));


        printf("\n");
    }

    return 0;
}