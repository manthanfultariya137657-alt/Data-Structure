 #include <stdio.h>

int main() {
    int arr[100], n, element, position, i;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element and position
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Check for valid position
    if(position < 1 || position > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for(i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[position - 1] = element;
        n++;

        // Display updated array
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
