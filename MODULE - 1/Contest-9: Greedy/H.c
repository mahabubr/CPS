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

        scanf("%d%d%d", &a, &b, &c);

        int k = 5;

        int mx = a;

        if (b > mx) {
            mx = b;
        }

        if (c > mx) {
            mx = c;
        }


        while (k--) {
            if (a < b && a < c) {
                a++;
            }
            else if (b < c) {
                b++;
            }
            else
                c++;
        }




        printf("%d\n", a * b * c);
    }

    return 0;
}