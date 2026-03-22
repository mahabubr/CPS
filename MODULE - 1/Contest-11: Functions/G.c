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

bool is_lower(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }

    return false;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        char s[10000];

        scanf("%s", s);

        bool flag = true;

        for (int i = 0; i < strlen(s); i++) {
            if ((i + 1) % 2 == 0 && !is_upper(s[i])) {
                flag = false;
            }

            if ((i + 1) % 2 == 1 && !is_lower(s[i])) {
                flag = false;
            }
        }

        if (flag) printf("Yes\n");
        else printf("No\n");

    }

    return 0;
}