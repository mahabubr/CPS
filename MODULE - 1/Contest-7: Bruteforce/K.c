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
        char s[10];

        scanf("%s", s);

        if (strcmp(s, "abc") == 0) {
            printf("YES\n");

            continue;
        }

        int tmp;

        tmp = s[0];
        s[0] = s[1];
        s[1] = tmp;

        if (strcmp(s, "abc") == 0) {
            printf("YES\n");

            continue;
        }

        tmp = s[0], s[0] = s[1], s[1] = tmp;

        tmp = s[1];
        s[1] = s[2];
        s[2] = tmp;

        if (strcmp(s, "abc") == 0) {
            printf("YES\n");

            continue;
        }

        tmp = s[1], s[1] = s[2], s[2] = tmp;

        tmp = s[0];
        s[0] = s[2];
        s[2] = tmp;


        if (strcmp(s, "abc") == 0) {
            printf("YES\n");

            continue;
        }

        printf("NO\n");


    }

    return 0;
}