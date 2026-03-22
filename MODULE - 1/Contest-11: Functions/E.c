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

    // scanf("%d", &t);

    while (t--) {
        char s[1000];

        scanf("%s", s);

        int n = strlen(s);

        char ans[1000];

        for (int i = 0; i < n; i += 2) {
            char tmp = s[i];
            ans[i] = s[i + 1];
            ans[i + 1] = tmp;
        }


        // ans[n] = '\n';

        printf("%s\n", ans);
    }

    return 0;
}