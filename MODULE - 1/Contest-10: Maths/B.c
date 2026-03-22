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
        int x1, x2, x3, x4;
        int y1, y2, y3, y4;

        scanf("%d%d", &x1, &y1);
        scanf("%d%d", &x2, &y2);
        scanf("%d%d", &x3, &y3);
        scanf("%d%d", &x4, &y4);

        int mn = x1;

        if (x2 < mn) mn = x2;
        if (x3 < mn) mn = x3;
        if (x4 < mn) mn = x4;

        int mx = x2;

        if (x2 > mx) mx = x2;
        if (x3 > mx) mx = x3;
        if (x4 > mx) mx = x4;


        printf("%d\n", (mx - mn) * (mx - mn));
    }

    return 0;
}