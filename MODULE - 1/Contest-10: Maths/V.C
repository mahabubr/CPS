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
        double a, b;

        scanf("%lf %lf", &a, &b);

        double d = b / 100;

        d *= a;


        printf("%.10lf\n", d);


    }

    return 0;
}