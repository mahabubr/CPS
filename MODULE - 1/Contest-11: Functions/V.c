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

int arr[10000];


bool count(int n) {
    int mn = arr[0], mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }

    if (arr[n] < mn || arr[n] > mx) {
        return true;
    }

    return false;

}

int main() {
    int t = 1;

    // scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);


        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int cnt = 0;

        for (int i = 1; i < n; i++) {
            if (count(i)) {
                cnt++;
            }
        }


        printf("%d\n", cnt);
    }

    return 0;
}