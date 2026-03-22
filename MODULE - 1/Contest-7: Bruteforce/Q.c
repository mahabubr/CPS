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

        int ans = 1;

        int i = 1;
        int cnt = 1;

        while (i <= n) {
            if (cnt >= 4) {
                cnt = 0;
            }

            cnt++;
            i++;
        }


        if (cnt == 1) {
            printf("North");
        }
        else if (cnt == 2) {
            printf("East");
        }
        else if (cnt == 3) {
            printf("South");
        }
        else {
            printf("West");
        }

        printf("\n");
    }

    return 0;
}