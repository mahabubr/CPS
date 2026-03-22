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

void CAPS(char arr[]) {
    int n = strlen(arr);

    for (int i = 0; i < n; i++) {
        arr[i] = toupper(arr[i]);
    }
}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        char s[1000];

        scanf("%s", s);

        CAPS(s);

        printf("%s\n", s);
    }

    return 0;
}