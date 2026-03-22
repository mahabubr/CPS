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
        int x, y, k;

        scanf("%d%d%d", &x, &y, &k);

        if (x > y) {
            printf("%d\n", x);
        }
        else if (y <= x + k) {
            printf("%d\n", y);
        }
        else {
            printf("%d\n", y + y - (x + k));
        }
    }

    return 0;
}