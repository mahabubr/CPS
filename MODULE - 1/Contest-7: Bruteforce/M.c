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

        int n;

        scanf("%d", &n);

        int ans = 0;

        for (int i = 1; i <= 9; i++) {

            int x = i;

            while (x <= n) {
                ans++;

                x *= 10;
            }
        }

        printf("%d\n", ans);

    }

    return 0;
}