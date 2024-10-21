#include<stdio.h>

// Function prototypes
void disp(int *n);
void show(int *m);

int main() {
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    
    // Loop through the marks array and display each mark
    for(i = 0; i < 7; i++) {  // Use 'i < 7' instead of 'i <= 6'
        disp(&marks[i]);
    }
    
    return 0;
}

// Function to display a mark
void disp(int *n) {
    show(&n);  // Pass pointer directly
}

// Function to print the mark
void show(int *m) {
    printf("%i\n", *m);  // Dereference pointer to get the value
}

