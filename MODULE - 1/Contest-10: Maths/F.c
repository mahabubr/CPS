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
        char s[5];

        scanf("%s", s);

        int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0', d = s[3] - '0';

        if (a == 0) a = 10;
        if (b == 0) b = 10;
        if (c == 0) c = 10;
        if (d == 0) d = 10;

        int aa = abs(1 - a);
        int bb = abs(a - b);
        int cc = abs(b - c);
        int dd = abs(c - d);

        printf("%d\n", 4 + aa+ bb+ cc+ dd);
    }

    return 0;
}