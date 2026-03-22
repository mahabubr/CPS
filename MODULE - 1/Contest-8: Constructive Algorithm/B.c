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

        char s[n + 1];

        scanf("%s", s);

        bool flag = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                flag = true;
            }

        }


        if (flag) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}