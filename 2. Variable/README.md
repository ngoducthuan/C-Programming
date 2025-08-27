# C Programming: Variables, Declarations, Assignments, and User Input

This document explains the basics of variables, variable declarations, assignments, and reading input from users in the C programming language.

## Variables
A variable is a named storage location in a program that holds a value of a specific type.

- **Variable Type**: Specifies the kind of data the variable can hold (e.g., `int`, `float`, `char`).
- **Variable Name**: The identifier used to refer to the variable (e.g., `age`, `grade1`).
- **Variable Content**: The actual data stored in the variable (e.g., `25`, `9`).
- **Variable Address**: The memory location where the variable's content is stored, accessed using the `&` operator.

## Working with Variables in C
Involve operations on variables, including declarations, assignments, and reading input.

### Variable Declaration
Variable declaration involves defining a variable by specifying its type and name. This reserves memory for the variable.

- **Syntax**:
    type name;
- **Example**:
    ```c
    int age;
    float salary;
    char initial;
    ```
### Assignment
Assignment involves storing a value in a variable.
- **Syntax**:
    name = value;
- **Example**:
    ```c
    int age;
    int age;
    age = 25;
    ```
### Reading Input from User
C provides the scanf function to read input from the user and store it in a variable. The & operator is used to provide the variable's memory address.
- **Syntax**:
    scanf("<format_specifier>", &<variable_name>);
- **Example**:
    ```c
    int grade1;
    scanf("%d", &grade1); // Reads an integer from user input and stores it in grade1
    printf("You entered: %d\n", grade1); // Prints the value stored in grade1
    ```