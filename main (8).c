#include <stdio.h>

int main() {
    int n, i, j, k, start[10], len[10], link[50];
    for(i = 0; i < 50; i++)
        link[i] = -1;

    printf("Enter number of files: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter starting block and length of file %d: ", i+1);
        scanf("%d%d", &start[i], &len[i]);
        int prev = -1;
        for(j = 0; j < len[i]; j++) {
            k = start[i] + j;
            link[k] = k + 1;
            if(j == len[i]-1)
                link[k] = -1;
        }
    }

    printf("\nLinked allocation result:\n");
    for(i = 0; i < n; i++) {
        printf("File %d: ", i+1);
        j = start[i];
        while(j != -1) {
            printf("%d -> ", j);
            j = link[j];
        }
        printf("NULL\n");
    }
    return 0;
}
