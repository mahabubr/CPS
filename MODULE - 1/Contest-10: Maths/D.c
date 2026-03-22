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

        int a, b;

        scanf("%d%d", &a, &b);

        if (a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }

        if (a % 2 == 0) {
            printf("Yes\n");
        }
        else if (b % 2 == 0) {
            if (a + a != b) {
                printf("Yes\n");
            }
            else {
                printf("No\n");
            }
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}