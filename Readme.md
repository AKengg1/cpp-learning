# C++ Learning – Assignments

C++ assignments completed as part of coursework (course ended 2024) — kept here as a personal learning reference and portfolio record. Assignments are grouped by topic, so numbering may skip around depending on when each topic was covered.

## 📂 Structure

## ✅ Assignment 1 – Basics of C++

1. Print `Hello MySirG` on the screen
2. Print `Hello` and `MySirG` on separate lines using `endl`
3. Calculate the sum of two numbers
4. Calculate the area of a circle
5. Calculate the volume of a cuboid
6. Calculate the square of a number
7. Calculate the average of 3 numbers
8. Swap values of two int variables without using a third variable
9. Find the maximum of two numbers
10. Add all the numbers of an array of size 10

## ✅ Assignment 2 – Functions in C++

1. Define a C++ function to print all prime numbers between two given numbers
2. Define a C++ function to find the highest value digit in a given number
3. Define a C++ function to calculate x raised to the power y
4. Define a C++ function to print Pascal's Triangle up to N lines
5. Define a C++ function to check whether a given number is a term in a Fibonacci series or not

## ✅ Assignment 3 – Functions in C++

1. Define a C++ function to swap data of two int variables using call by reference
2. Write a C++ function using the default argument that is able to add 2 or 3 numbers
3. Define overloaded functions to calculate area of circle, area of rectangle, and area of triangle
4. Write functions using function overloading to find the maximum of two numbers, where both numbers can be integer or real
5. Write functions using function overloading to add two numbers having different data types

## ✅ Assignment 4 – More on Functions in C++

1. Define a C++ function to sort an array of integers in ascending or descending order depending on a bool type argument (`true` for ascending, `false` for descending). Use a default argument to implement it.
2. Define a function to sort an array of strings in ascending or descending order depending on a bool type argument (`true` for ascending, `false` for descending). Use a default argument to implement it.
3. Define a function to rotate an array by `n` positions in the `d` direction. Implement position and direction using default arguments. Argument `d` can be `-1` or `1`, denoting left or right direction. Argument `n` should be the last argument, with a default value of `1`.
4. Define a function to calculate the LCM of three numbers
5. Define a function to print all the prime factors of a given number
   _(example: `num = 36`, prime factors are `2, 3`)_

## ✅ Assignment 5 – More on Functions in C++

1. Define a function to calculate the HCF of two numbers
2. Define overloaded functions to calculate the volume of a cuboid, cone, and sphere
3. Define a function to print a substring from `startIndex` (inclusive) to `endIndex` (exclusive). Define the function such that if the second argument is not provided, the string prints till the last possible index.
4. Define a function to swap two arrays
5. Define a function to merge two sorted arrays of the same size

## ✅ Assignment 6 – Classes and Objects

1. Define a class `Complex` to represent a complex number. Declare instance member variables to store the real and imaginary part of a complex number, also define instance member functions to set values of the complex number and print values of the complex number.
2. Define a class `Time` to represent Time (like 3 hr 45 min 20 sec). Declare an appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
3. Define a class `Date` to represent a date (like d=31, m=12, y=2022). Declare an appropriate number of instance member variables and also define instance member functions to set date and get date.
4. In question 3, define a method to display the date in the following patterns:
   1. `31-12-2022`
   2. `31-Dec-2022`
5. Define a class `Circle` with radius as its property. Provide `setRadius()` and `getRadius()` methods. Also define methods to return the area and circumference of the circle.

## ✅ Assignment 7 – Member Functions

1. Define a class `Complex` to represent a complex number with instance variables `a` and `b` to store the real and imaginary parts. Also define the following member functions:
   1. `void setData(int,int)`
   2. `void showData()`
   3. `Complex add(Complex)`
   4. `Complex subtract(Complex)`
   5. `Complex multiply(Complex)`
2. Define a class `Time` to represent a time with instance variables `h`, `m`, and `s` to store hour, minute, and second. Also define the following member functions:
   1. `void setTime(int,int,int)`
   2. `void showTime()`
   3. `void normalize()`
   4. `Time add(Time)`
   5. `bool is_greater(Time)`
3. Define a class `TestResult` with properties `roll_no`, `right`, `wrong`, `net_score`. Also define class properties `right_weightage`, `wrong_weightage`. Provide methods to set and get all the properties.
4. Write a driver function `main()` to use the `TestResult` class (Question 3). Create an array of 5 `TestResult` objects, set values to all the objects and display the results in sorted order (by `net_score`).
5. Define a class `Matrix` to represent a 3x3 order matrix. Provide appropriate methods and properties to the class. Also define the following methods in the class:
   1. `Matrix add(Matrix)`
   2. `Matrix sub(Matrix)`
   3. `Matrix multiply(Matrix)`
   4. `Matrix transpose()`
   5. `bool is_singular()`

## ✅ Assignment 8 – Constructors

1. Define a class `Cuboid` with length, breadth and height as instance member variables. Define constructors to initialise member variables.
2. Define a class `Customer` with instance members `cust_id`, `name`, `email`, `mobile`. Define a non-parameterised constructor and a parameterised constructor in the class.
3. Define a class `Time` with `hr`, `min`, `sec` as instance member variables. Define a constructor to initialise the time object.
4. Define a class `Book` with `booked`, `title` and `price` as instance member variables. Define a non-parameterised and a parameterised constructor in the class.
5. Define a class `Complex` with instance variables for the real and imaginary part of a complex number. Define only one parameterised constructor in the class to initialise the complex object. Also define a `showData` method in the class to display object data. Now create an array of `Complex` class with size 5 and display values of each object.

## ✅ Assignment 9 – More on Constructors

1. Define a class `Numbers` with `size` and `arr` pointer as instance variables. Provide a constructor to initialise instance members, dynamically allocate an array of the given size, and store its address in the `arr` variable of the object. Also define a destructor to deallocate the memory of the array. Implement deep copy using a copy constructor to avoid memory issues.
2. Define a class `Student` and write a program to enter student details using a constructor and define a member function to display all the details.
3. Define a class `Date` with `d`, `m`, `y` as instance variables. Initialise members using initialisers.
4. Define a class `Room` for a hotel management project with room number, room type, `is_AC`, price as instance variables. Initialise instance variables using a constructor.
5. Define a class `Circle` with radius as an instance variable. Define two constructors in the class — non-parameterised and parameterised.

## ✅ Assignment 10 – Operator Overloading

1. Define a class `Complex` with appropriate instance variables and member functions. Define the following operators in the class:
   1. `+`
   2. `-`
   3. `*`
   4. `==`
2. Create a class `Time` which contains hour, min and second as fields. Overload the greater than (`>`) operator to compare two time objects.
3. In Question 2, overload the pre-increment and post-increment operators to increment a `Time` object's value by one second.
4. In Question 2, overload `operator+` to add two `Time` objects.
5. Define a class `Matrix` to represent a 3x3 matrix. Provide appropriate instance methods. Also define `operator+`, `operator-`, `operator*` to perform addition, subtraction, and multiplication of matrices.

## ✅ Assignment 11 – Operator Overloading

1. Define a C++ class `fraction`:
   ```cpp
   class fraction
   {
       long numerator;
       long denominator;
     public:
       fraction (long n=0, long d=0);
   }
   ```
   Define an operator `+` to add two `fraction` objects.
2. In Question 1, define an operator `<` to compare two `fraction` objects.
3. Consider a class `Distance`:
   ```cpp
   class Distance
   {
       int km, m, cm;
     public:
       //methods;
   };
   ```
   Overload the `operator+` to add two `Distance` objects.
4. In Question 3, define the pre-decrement and post-decrement operators to decrease the distance by 1 cm.
5. Consider the following class `Array`:
   ```cpp
   class Array
   {
       int *p;
       int size;
     public:
       // methods
   };
   ```
   Define a constructor to allocate an array of the given size (size is given through the parameter). Define a subscript operator to access the element at a given index. Define a destructor to deallocate the memory of the array.

## ✅ Assignment 12 – Operator Overloading, Friend Operator

1. Define a class `Complex` and overload the following operators as a friend:
   1. `+`
   2. `-`
   3. `*`
2. Define a class `Time` with appropriate instance variables and member functions. Overload the following operators:
   1. `<<` insertion operator
   2. `>>` extraction operator
3. In Question 2, overload `operator=` to perform a copy of the `Time` object.
4. Consider the following class `Array`:
   ```cpp
   class Array
   {
       int *p;
       int size;
     public:
       // methods
   };
   ```
   Define `operator=` to perform a deep copy of `Array` objects.
5. In Question 4, define a friend `operator+` to concatenate two `Array` objects.

## ✅ Assignment 13 – Operator Overloading, Friend Operator

1. Define a class `Complex` and provide a unary friend `operator-` to negate the real and imaginary part of a complex number.
2. Define a class `Integer` with an instance variable of type `int`. Provide a friend logical `operator!`. Also define a friend `operator==` to compare two `Integer` objects.
3. Create a `Coordinate` class with 2 instance variables `x` and `y`. Overload the comma operator such that when you write `c3 = (c1, c2)`, `c2` is assigned to `c3`, where `c1`, `c2`, and `c3` are objects of the `Coordinate` class.
4. In Question 3, provide overloaded insertion and extraction operators.
5. Define a class `Student` with roll no, name, and age as instance variables. Create `setStudent()` and `showStudent()` methods in the class. Overload `operator==` to compare two `Student` objects.
