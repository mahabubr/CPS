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
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        int l = 0;
        int r = 0;

        if (a == 0) {
            l++;
        }

        if (b == 0) {
            l++;
        }

        if (c == 0) {
            l++;
        }

        if (a == 1) {
            r++;
        }

        if (b == 1) {
            r++;
        }

        if (c == 1) {
            r++;
        }

        if (l > 0 && r > 0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }

    return 0;
}