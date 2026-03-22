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

bool is_ok(int n) {
    return n <= 10;
}

int main() {
    int t = 1;

    scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        if (is_ok(n)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}