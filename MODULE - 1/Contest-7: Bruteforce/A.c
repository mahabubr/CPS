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

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        bool flag = false;

        for (int i = 0; i < n; i++) {
            if (arr[i] <= i + 1) {
                flag = true;
            }
        }

        if (flag) printf("YES");
        else printf("NO");


        printf("\n");
    }

    return 0;
}