/*
    MIT License

    Copyright (c) 2020 Davide Fassio

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/


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
