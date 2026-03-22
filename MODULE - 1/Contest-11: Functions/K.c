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

bool again(char s[]) {

    char tmp[] = { 'A', 'g', 'a', 'i', 'n', 's', 't' };

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != tmp[i]) {
            return false;
        }
    }


    return true;
}

bool agree(char s[]) {

    char tmp[] = { 'F', 'o', 'r' };

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != tmp[i]) {
            return false;
        }
    }


    return true;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            char s[10];

            scanf("%s", s);

            int n = strlen(s);

            if (again(s)) {
                a++;
            }

            if (agree(s)) {
                b++;
            }


        }

        if (b > a) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}