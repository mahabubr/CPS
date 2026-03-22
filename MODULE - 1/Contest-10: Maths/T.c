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

        scanf("%d\n", &n);


        if (n % 2 == 1) {
            n++;
        }

        printf("%d\n", n / 2);
    }

    return 0;
}