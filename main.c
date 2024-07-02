#include <stdio.h>

int main() {
    double t1, t2, t3;

    printf("Enter three values: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double total_speed = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double time_needed = 1.0 / total_speed;

    printf("Time needed to eat the pie: %.2f hours\n", time_needed);

    return 0;
}
