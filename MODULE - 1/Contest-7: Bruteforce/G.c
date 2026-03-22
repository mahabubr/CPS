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

int sum_digit(int x) {
    int sum = 0;

    while (x > 0) {
        sum += x % 10;

        x /= 10;
    }

    return sum;;
}

int main() {
    int t = 1;

    scanf("%d", &t);

    while (t--) {
        int x, k;

        scanf("%d %d", &x, &k);

        int tmp = x;

        while (sum_digit(tmp) % k != 0) {
            tmp++;
        }

        printf("%d", tmp);

        printf("\n");
    }

    return 0;
}