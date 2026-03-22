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

        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        bool flag = false;

        for (int i = 0; i < n;i++) {
            int parity = sum - arr[i];

            if (parity % 2 == 0 && arr[i] % 2 == 0) {
                flag = true;
                break;
            }

            if (parity % 2 != 0 && arr[i] % 2 != 0) {
                flag = true;
                break;
            }
        }

        if (flag) printf("YES");
        else printf("NO");

        printf("\n");

    }

    return 0;
}