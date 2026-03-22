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

        bool flag = false;

        for (int i = 0; i < 26 && !flag; i++) {
            for (int j = 0; j < 26 && !flag; j++) {
                for (int k = 0; k < 26 && !flag; k++) {
                    if (i + j + k == n - 3) {
                        printf("%c%c%c", i + 'a', j + 'a', k + 'a');

                        flag = true;
                    }
                }
            }

        }

        printf("\n");
    }

    return 0;
}