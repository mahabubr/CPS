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
#include <stdlib.h>

int compare_ints(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return x - y;
}

int count_horse(int a, int b, int c, int d) {
    int arr[4] = { a, b, c, d };

    qsort(arr, 4, sizeof(int), compare_ints);

    int ans = 1;

    for (int i = 0;i < 4 - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            ans++;
        }
    }

    return 4 - ans;


}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int a, b, c, d;

        scanf("%d%d%d%d", &a, &b, &c, &d);

        int ans = count_horse(a, b, c, d);

        printf("%d\n", ans);
    }

    return 0;
}