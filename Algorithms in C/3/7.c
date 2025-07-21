#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Point;
float distance(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(int argc, char *argv[]) {
    Point p1, p2;
    float min_distance = 0.0;
    if (argc < 5) {
        return 1; // Not enough arguments
    } else if (argc == 5){
        p1.x = atof(argv[1]);
        p1.y = atof(argv[2]);
        p2.x = atof(argv[3]);
        p2.y = atof(argv[4]);

        printf("Distance between points: %.2f\n", distance(p1, p2));
    } else {
        if ( (argc-1) % 2 != 0) {
            return 1; // Odd number of arguments, cannot form pairs
        }
        p1.x = atof(argv[1]);
        p1.y = atof(argv[2]);
        p2.x = atof(argv[3]);
        p2.y = atof(argv[4]);
        min_distance = distance(p1, p2);
        for (int i = 5; i < argc; i += 2) {
            p2.x = atof(argv[i]);
            p2.y = atof(argv[i + 1]);
            if (distance(p1, p2) < min_distance) {
                min_distance = distance(p1, p2);
            }
        }
    }
    
    printf("Minimum distance: %.2f\n", min_distance);
    
    
    return 0;
}