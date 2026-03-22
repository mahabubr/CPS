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
        char a[5], b[5], c[5];

        scanf("%s %s %s", a, b, c);

        int cntA = 0;
        int cntB = 0;
        int cntC = 0;

        for (int i = 0; i < 3; i++) {
            if (a[i] == 'A' || b[i] == 'A' || c[i] == 'A') {
                cntA++;
            }

            if (a[i] == 'B' || b[i] == 'B' || c[i] == 'B') {
                cntB++;
            }

            if (a[i] == 'C' || b[i] == 'C' || c[i] == 'C') {
                cntC++;
            }
        }

        if(cntA == 2){
            printf("A");
        } else if(cntB == 2){
            printf("B");
        } else {
            printf("C");
        }

        printf("\n");
    }

    return 0;
}