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

bool is_match(char arr[]) {
    int n = strlen(arr);

    if (strncmp(arr, "and", 3) == 0) return true;
    if (strncmp(arr, "not", 3) == 0) return true;
    if (strncmp(arr, "that", 4) == 0) return true;
    if (strncmp(arr, "the", 3) == 0) return true;
    if (strncmp(arr, "you", 3) == 0) return true;

    return false;

}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        bool flag = false;

        for (int i = 0; i < n; i++) {
            char s[100];

            scanf("%s", s);

            if (is_match(s)) {
                flag = true;
                break;
            }
        }

        if (flag) printf("Yes");
        else printf("No");

        printf("\n");
    }

    return 0;
}