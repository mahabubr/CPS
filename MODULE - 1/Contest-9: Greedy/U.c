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

        char s[n + 2];

        scanf("%s", s);

        int i = 0, j = n - 1, tmp = 0;

        while (i < n && s[i] != 'A') {
            i++;
        }


        while (j >= 0 && s[j] != 'B') {
            j--;
        }

        int ans = j - i;

        if (ans < 0) {
            ans = 0;
        }

        printf("%d\n", ans);
    }

    return 0;
}