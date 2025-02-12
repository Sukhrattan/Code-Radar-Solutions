#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int rep[n];  // Tracking array
    for (int i = 0; i < n; i++) {
        rep[i] = -1;  // Initialize with -1 (indicating uncounted)
    }

    for (int j = 0; j < n; j++) {
        int is_tracked = 0;

        // Check if arr[j] is already in rep[]
        for (int k = 0; k < n; k++) {
            if (rep[k] == arr[j]) {
                is_tracked = 1;
                break;
            }
        }

        if (is_tracked) {
            continue; // Skip already counted elements
        }

        int selected_index = j;
        int num_count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[selected_index]) {
                num_count++;
            }
        }

        // Store counted element in rep[]
        rep[j] = arr[selected_index];

        // Print result
        printf("%d %d\n", arr[selected_index], num_count);
    }

    return 0;
}
