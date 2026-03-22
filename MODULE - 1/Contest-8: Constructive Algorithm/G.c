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

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("(");
            }

            for (int j = 1; j <= i; j++) {
                printf(")");
            }

            for (int j = 1; j <= n - i; j++) {
                printf("()");
            }

            printf("\n");
        }



        // printf("\n");
    }

    return 0;
}