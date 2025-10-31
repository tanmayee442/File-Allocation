#include <stdio.h>

int main() {
    int n, i, j, indexBlock[10], blocks[10][10], length[10];

    printf("Enter number of files: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter index block of file %d: ", i+1);
        scanf("%d", &indexBlock[i]);
        printf("Enter number of blocks for file %d: ", i+1);
        scanf("%d", &length[i]);
        printf("Enter block numbers: ");
        for(j = 0; j < length[i]; j++)
            scanf("%d", &blocks[i][j]);
    }

    printf("\nIndexed allocation result:\n");
    for(i = 0; i < n; i++) {
        printf("File %d -> Index Block: %d -> ", i+1, indexBlock[i]);
        for(j = 0; j < length[i]; j++)
            printf("%d ", blocks[i][j]);
        printf("\n");
    }
    return 0;
}
