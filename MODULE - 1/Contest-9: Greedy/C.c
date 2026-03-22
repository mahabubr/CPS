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
        int x, y, n;

        scanf("%d%d%d", &x, &y, &n);

        int min_sum = n * (n - 1) / 2;

        if (y - x < min_sum) {
            printf("-1\n");
            continue;
        }


        printf("%d ", x);

        int tmp = y;

        for (int i = 0; i < n -1; i++) {
            tmp -= i;
        }

        for (int i = n - 2; i >= 0; i--) {
            printf("%d ", tmp);

            tmp += i;
        }


        // printf("%d ", y);

        printf("\n");
    }

    return 0;
}