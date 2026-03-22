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
        int n, k;

        scanf("%d %d", &n, &k);

        char s[n + 1];

        scanf("%s", s);

        int mark = 0;

        int i = 0;


        while (i < n) {
            if (s[i] == 'B') {
                mark++;
                i += k;
            }
            else {
                i++;
            }
        }

        printf("%d\n", mark);
    }

    return 0;
}
