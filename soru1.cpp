#include <stdio.h>

#define MAX_SIZE 100   
int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};   
    int freq[MAX_SIZE];
    int size = sizeof(arr) / sizeof(arr[0]);  
    int i, j, count;

    
    for (i = 0; i < size; i++) {
        freq[i] = -1;
    }

    
    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;   
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    
    printf("Dizinin elemanlari ve frekanslari:\n");
    for (i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d --> %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
