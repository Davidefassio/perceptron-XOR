/* Import some libraries */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Activation function for the output node.
    It represent a bell curve centered in x=1
    with height=1.
*/
float gauss_distro(float x){
    return exp(-3*(x-1)*(x-1));
}

/* Guess an output based on the two inputs */
float guess(float i1, float i2){
    return gauss_distro(i1 + i2);
}

int main()
{
    float input1, input2, output;

    /* Take input range: [0,1] */
    printf("Input 1: ");
    scanf("%f", &input1);
    printf("Input 2: ");
    scanf("%f", &input2);

    /*
        Compute output.
        Weights = 1.
        Activation function = Gaussian distribution.
        The result is rounded to the nearest int.
    */
    output = round(guess(input1, input2));

    /* Print out the result */
    printf("%.3f XOR %.3f = %.3f\n", input1, input2, output);

    /* End */
    return 0;
}
