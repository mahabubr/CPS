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
        int n, k;

        scanf("%d %d", &n, &k);

        for (int i = n - k; i >= 1; i--) {
            printf("%d ", i);
        }

        for (int i = n - k + 1; i <= n; i++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}