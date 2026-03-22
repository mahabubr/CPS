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
        int n, m, p;

        scanf("%d %d %d", &n, &m, &p);

        n -= m;

        if (n < 0) {
            printf("0\n");
            break;
        }

        int cnt = 0;

        while (n >= 0) {

            cnt++;

            n -= p;
        }

        printf("%d\n", cnt);
    }

    return 0;
}