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

        int ans = 1;

        for (int i = 1; i <= n; i++) {


            if (n % i == 0) {

                if (i > 10) {
                    break;
                }

                ans = i;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}