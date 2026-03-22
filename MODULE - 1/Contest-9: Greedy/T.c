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
        int n, k;

        scanf("%d %d", &n, &k);

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int tmp = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == tmp + 1) {
                tmp++;
            }
        }

        tmp = n - tmp;

        int ans = (tmp + k - 1) / k;

        printf("%d\n", ans);
    }

    return 0;
}