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
        char s[100];

        scanf("%s", s);

        int len = strlen(s);

        int cnt[26];

        for (int i = 0; i < 26; i++) {
            cnt[i] = -1;
        }

        for (int i = 0; i < len; i++) {
            cnt[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (cnt[i] < 0) {
                continue;
            }

            for(int j = 0; j <= cnt[i]; j++){
                printf("%c", i + 'a');
            }
        }

        printf("\n");
    }

    return 0;
}