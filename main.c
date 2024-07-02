#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates of the centers and the radii of the circles (x1 y1 r1 x2 y2 r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    int result;
    if (d == 0 && r1 == r2) {
        result = -1;
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        result = 0;
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        result = 1;
    } else {
        result = 2;
    }

    printf("Number of intersection points: %d\n", result);

    return 0;
}
