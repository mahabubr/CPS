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

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int tmp = arr[0];

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] != tmp) {
                flag = false;

                break;
            }
        }

        if (flag) {
            printf("NO");


        }
        else {
            printf("YES\n");

            printf("RB");

            for (int i = 2; i < n; i++) {
                printf("R");
            }


        }

        // printf("YES\n");

        printf("\n");
    }

    return 0;
}