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

bool is_match(char arr1[], char arr2[]) {
    bool flag = true;

    for (int i = 0; i < 3; i++) {
        if (arr1[i] != arr2[i]) {
            flag = false;
            break;
        }
    }

    return flag;
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        char a[4] = { 'A', 'C','E' };
        char b[4] = { 'B', 'D', 'F' };
        char c[4] = { 'C', 'E', 'G' };
        char d[4] = { 'D', 'F', 'A' };
        char e[4] = { 'E', 'G', 'B' };
        char f[4] = { 'F', 'A', 'C' };
        char g[4] = { 'G', 'B', 'D' };

        char s[4];

        scanf("%s", s);

        if (is_match(s, a) || is_match(s, b) || is_match(s, c) || is_match(s, d) || is_match(s, e) || is_match(s, f) || is_match(s, g)) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}