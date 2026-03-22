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

int sum(int a, int b) {
    return a + b;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int a, b, c;

        scanf("%d%d%d", &a, &b, &c);

        int s1 = sum(a, b);
        int s2 = sum(a, c);
        int s3 = sum(b, c);

        if (s1 > s2 && s1 > s3) {
            printf("%d\n", s1);
        }
        else if (s2 > s3) {
            printf("%d\n", s2);
        }
        else {
            printf("%d\n", s3);
        }
    }

    return 0;
}