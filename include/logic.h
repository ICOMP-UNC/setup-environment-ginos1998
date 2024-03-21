#ifndef LOGIC_H
#define LOGIC_H

/**
 * @brief Add two numbers
 * @param a int
 * @param b int 
 * @return a + b 
*/
int add(int a, int b);

/**
 * @brief Subtract two numbers
 * @param a int 
 * @param b int 
 * @return a - b
*/
int substract(int a, int b);

/**
 * @brief Multiply two numbers
 * @param a int
 * @param b int
 * @return a * b
*/
int multiply(int a, int b);

/**
 * @brief Divide two numbers. Cannot divide by 0
 * @param a int   
 * @param b int non zero
 * @return a / b
*/
double divide(int a, int b);

#endif
