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

int make(int n, int x, int t) {

    double div = (double)n / x;

    return ((n + x - 1) / x) * t;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n, x, t;

        scanf("%d%d%d", &n, &x, &t);

        printf("%d\n", make(n, x, t));
    }

    return 0;
}