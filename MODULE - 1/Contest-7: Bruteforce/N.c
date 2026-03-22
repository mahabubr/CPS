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

        int arr[n];

        for (int j = 0; j < n; j++) {
            char s[1000];

            scanf("%s", s);

            int sn = strlen(s);

            for (int i = 0; i < sn; i++) {
                if (s[i] == '#') {
                    arr[j] = i;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            printf("%d ", arr[i] + 1);
        }

        printf("\n");
    }

    return 0;
}