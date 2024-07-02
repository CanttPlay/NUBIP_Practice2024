#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the start and end points of the vector (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    double length = sqrt(dx * dx + dy * dy);

    printf("Length of the vector: %.6f\n", length);

    return 0;
}
