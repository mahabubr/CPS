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

bool is_match(char s1[], char s2[]) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    if (n1 != n2) {
        return false;
    }


    for (int i = 0; i < n1; i++) {
        if (s1[i] != s2[n1 - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        char s1[1000], s2[1000];

        scanf("%s", s1);
        scanf("%s", s2);

        if (is_match(s1, s2)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }


    }

    return 0;
}