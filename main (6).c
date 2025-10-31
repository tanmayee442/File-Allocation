#include <stdio.h>

int main() {
    int files[50], startBlock, len, i, j, k, c;
    for(i = 0; i < 50; i++)
        files[i] = 0;
    
    do {
        printf("\nEnter the starting block and length of the file: ");
        scanf("%d%d", &startBlock, &len);
        for(j = startBlock; j < startBlock + len; j++) {
            if(files[j] == 0)
                files[j] = 1;
            else {
                printf("Block already allocated!\n");
                break;
            }
        }
        if(j == startBlock + len)
            printf("File allocated successfully.\n");

        printf("Do you want to enter more files? (1 for Yes / 0 for No): ");
        scanf("%d", &c);
    } while(c == 1);

    printf("\nAllocated blocks:\n");
    for(i = 0; i < 50; i++)
        if(files[i] == 1)
            printf("%d ", i);
    return 0;
}
