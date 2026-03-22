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
        int n = 7;

        int arr[7];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int cntR = 0;
        int cntS = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                cntR++;
            }
            else {
                cntS++;
            }
        }

        if (cntS > cntR) {
            printf("YES");
        }
        else {
            printf("NO");
        }

        printf("\n");
    }

    return 0;
}