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

    // scanf("%d", &t);

    while (t--) {
        long long n;

        scanf("%lld", &n);

        bool flag = false;

        for (int i = 0; i <= 60; i++) {
            for (int j = 0; j <= 40; j++) {
                if (pow(2, i) * pow(3, j) == n) {
                    flag = true;
                    break;
                }
            }
        }

        if (flag) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}