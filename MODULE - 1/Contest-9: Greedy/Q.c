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
        int n;

        scanf("%d", &n);

        int meal[n], cost[n];

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &meal[i], &cost[i]);
        }

        // for (int i = 0; i < n; i++) {
        //     printf("%d %d\n", meal[i], cost[i]);
        // }

        int costMn = cost[0];

        long long ans = 0;


        for (int i = 0; i < n; i++) {
            if (cost[i] < costMn) {
                costMn = cost[i];
            }

            ans += (long long)meal[i] * costMn;
        }


        // for (int i = 0; i < costMnIdx; i++) {
        //     ans += meal[i] * cost[i];
        // }

        // for (int i = costMnIdx; i < n; i++) {
        //     ans += meal[i] * costMn;
        // }

        printf("%lld\n", ans);
    }

    return 0;
}