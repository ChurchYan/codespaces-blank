#include <stdio.h>
#include <limits.h>

int main(void){
    // Displaying the limits of various data types
    //int
    printf("The maximum value of an int is: %d\n", INT_MAX);
    printf("The minimum value of an int is: %d\n", INT_MIN);
    //long int
    printf("The maximum value of a long is: %ld\n", LONG_MAX);
    printf("The minimum value of a long is: %ld\n", LONG_MIN);
    //short int
    printf("The maximum value of a short int is: %d\n", SHRT_MAX);
    printf("The minimum value of a short int is: %d\n", SHRT_MIN);
    //float
    printf("The maximum value of a float is: %e\n", FLT_MAX);
    printf("The minimum value of a float is: %e\n", FLT_MIN);
    //double
    printf("The maximum value of a double is: %e\n", DBL_MAX);
    printf("The minimum value of a double is: %e\n", DBL_MIN);

    return 0;
}