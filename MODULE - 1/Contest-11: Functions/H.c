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

bool is_upper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return true;
    }

    return false;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        char s[1000];

        scanf("%s", s);

        int ans = 0;

        for (int i = 0; i < strlen(s); i++) {
            if (is_upper(s[i])) {
                ans = i + 1;
                break;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}