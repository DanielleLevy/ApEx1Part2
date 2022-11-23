# ApEx1Part2

## How to compile:
write the following in the terminal , after each one press enter:

1. git clone git@github.com:DanielleLevy/ApEx1Part2.git
2. cd ApEx1Part2
3. cmake .
4. make

## How to run:
1. write ./ApEx1Part2
2. press enter
3. write the first vector (numbers wuth space between)
4. press enter
5. write the second vector (numbers wuth space between)
6. press enter

## Description:
This is the first exercise out of 4 exercises in the "Advanced Programming 1" course.
The first exercise consists of two parts, this is the second part.
In this part of the exercise we divided the work between us, each of us did several functions as detailed below (For each of the distances we opened a separate file and in each file we did the distance function):

1. Euclidean distance - distance between two points calculated by the square root of the sum of the squares of the differences of the arguments of the two vectors.

2. Manhattan distance - distance between two points calculated by the sum of the differences of the arguments of two vectors (the differences in absolute value).

3. Chebyshev distance - distance between two points which is calculated by finding the maximum difference between two arguments of two vectors (difference in absolute value).

4. Canberra distance - distance between two points that is calculated by making the difference in absolute value between two arguments of the vectors and dividing by the sum of the arguments (each of which is in absolute value separately). After calculating it for each pair of arguments, sum up.

5. Minkowski distance - distance between two points that is calculated by making the difference in absolute value between two arguments of the vectors, raise to the 
power of P and after calculating it on each pair of arguments, sum. Take a root of P (that is, raise it to the power of 1 divided by P).

In this function we determined that P will be a constant value (const) and equal to 2. For this reason, there was no need to calculate the absolute value of the differences because the power is constant: 2, and it is an even number, so the difference will be positive in any such case.

We wrote each function in a separate file, so that the functions don't depend on each other and work independently.
We saw that the functions have things in common, for example in all the functions it is necessary for the vectors to be the same size in order to make a difference between each pair of arguments, we saw that in fact in our case Euclidean distance and Minkowski distance are the same (because we decided that P would be 2), however we chose to write separate functions so that later We can change the P value (and then it won't be a constant value) in the Minkowski distance and so that the two functions don't depend on each other.

Our implementation is flexible for adding new distance algorithms and if necessary, in the future we will be able to implement an algorithm that will use some distance function without depending on its implementation.

There are several additional files:
1. OutputFunctions - This file contained the printFun function that ensured that the results would be printed properly as requested in the exercise instructions.

2. Validation - this file contained two functions:
A. createVector - This function created two vectors from the user's input and makes sure there are no problems like empty input, input of letters, input of space, etc. If there are problems, the function prints an appropriate error message.

B. checkInput - this function checks whether the two vectors are normal. That is, they are the same size and not empty. If there are problems, the function prints an appropriate error message.

* We also note that throughout the exercise we assumed that we get exactly two vectors, vectors of numbers, non-empty vectors, and vectors of the same size. Each vector consists of numbers separated by a space. All this is checked in the validation file.

3. Main - this file is responsible for receiving input from the user, creating vectors and checking their integrity (by sending them to verify functions). If the input passed the tests, there is a call to the 5 functions we explained above and the result of each function is printed according to the requested order.
If the input didn't pass the tests, an error message is printed accordingly.

## Additional Comments:
This program was written in the CPP language, developed in the CLION development environment and adapted to run on Bar Ilan University servers (U2/PLANET), as requested.
