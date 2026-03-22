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

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cnt += 3;
            }
            else {
                cnt -= 1;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}