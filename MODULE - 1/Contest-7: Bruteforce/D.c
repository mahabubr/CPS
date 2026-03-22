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
        int l, r;

        scanf("%d %d", &l, &r);

        int cnt = 0;

        for (int i = l;i <= r; i++) {
            int ii = i % 10;

            if (ii == 2 || ii == 3 || ii == 9) {
                cnt++;
            }
        }

        printf("%d", cnt);

        printf("\n");
    }

    return 0;
}