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
        char s[20];

        scanf("%s", s);

        int len = strlen(s);

        if (len == 1 && s[0] == '1') {
            printf("0\n");

            continue;
        }

        int pow = 1;

        for (int i = 1; i < len; i++) {
            pow *= 10;
        }

        int m = 0;

        for (int i = 0; i < len; i++) {
            m = m * 10 + (s[i] - '0');
        }

        printf("%d", m - pow);

        printf("\n");
    }

    return 0;
}