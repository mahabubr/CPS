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
        int n;

        scanf("%d", &n);
        char s[n][100];

        for (int i = 0; i < n; i++) {
            scanf("%s", s[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0 + 1; j < n; j++) {

                if (i == j) continue;

                char str[200];

                sprintf(str, "%s%s", s[i], s[j]);

                int len = strlen(str);

                int a = 0;
                int b = len - 1;

                bool flag = true;

                while (a < b) {
                    if (str[a] != str[b]) {
                        flag = false;
                    }

                    a++;
                    b--;
                }

                if (flag) {
                    printf("Yes\n");

                    return 0;
                }
            }
        }

        printf("No\n");

    }

    return 0;
}