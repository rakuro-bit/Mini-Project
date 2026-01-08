#include <stdio.h>

int main() {
    int length, width;
    
    // Taking input
    scanf("%d %d", &length, &width);
    
    int area = length * width;
    int perimeter = 2 * (length + width);
    
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
    
return 0;
}