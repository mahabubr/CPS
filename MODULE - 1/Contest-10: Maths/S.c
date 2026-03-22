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
#include<stdlib.h>

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int a, b, c;

        scanf("%d%d%d", &a, &b, &c);

        int sum = a + b + c;
        sum -= 21;

        printf("%d\n", abs(sum));
    }

    return 0;
}