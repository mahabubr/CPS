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
        long long int n;

        scanf("%lld", &n);

        long long int ans = 0;


        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            }
            else if (n % 3 == 0) {
                n /= 3;
                n *= 2;
            }
            else if (n % 5 == 0) {
                n /= 5;
                n *= 4;
            }
            else {
                ans = -1;
                break;
            }

            ans++;
        }

        printf("%lld\n", ans);
    }

    return 0;
}