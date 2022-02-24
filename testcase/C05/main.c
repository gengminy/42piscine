#include "./ex00/ft_iterative_factorial.c"
#include "./ex01/ft_recursive_factorial.c"
#include "./ex02/ft_iterative_power.c"
#include "./ex03/ft_recursive_power.c"
#include "./ex04/ft_fibonacci.c"
#include "./ex05/ft_sqrt.c"
#include "./ex06/ft_is_prime.c"
#include "./ex07/ft_find_next_prime.c"
#include "./ex08/ft_ten_queens_puzzle.c"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(void)
{
	printf("\n------------ ex00 ------------\n");
	printf("Iterative-Factorial(0) : ");
	printf("%d\n", ft_iterative_factorial(0));
	printf("Correct Answer : 1\n");
	printf("Iterative-Factorial(5) : ");
	printf("%d\n", ft_iterative_factorial(5));
	printf("Correct Answer : 120\n");
	printf("Iterative-Factorial(99) : ");
	printf("%d\n", ft_iterative_factorial(99));
	printf("Correct Answer : 0\n");
	printf("Iterative-Factorial(-100) : ");
	printf("%d\n", ft_iterative_factorial(-1));
	printf("Correct Answer : 0\n");

	printf("\n------------ ex01 ------------\n");
	printf("Recursive-Factorial(0) : ");
	printf("%d\n", ft_recursive_factorial(0));
	printf("Correct Answer : 0\n");
	printf("Recursive-Factorial(5) : ");
	printf("%d\n", ft_recursive_factorial(5));
	printf("Correct Answer : 120\n");
	printf("Recursive-Factorial(99) : ");
	printf("%d\n", ft_recursive_factorial(99));
	printf("Correct Answer : 0\n");
	printf("Recursive-Factorial(-100) : ");
	printf("%d\n", ft_recursive_factorial(-100));
	printf("Correct Answer : 0\n");

	printf("\n------------ ex02 ------------\n");
	printf("ft_iterative_power(0, 0) : ");
	printf("%d\n", ft_iterative_power(0, 0));
	printf("Correct Answer : 1\n");
	printf("ft_iterative_power(-5, 3) : ");
	printf("%d\n", ft_iterative_power(-5, 3));
	printf("Correct Answer : -125\n");
	printf("ft_iterative_power(5, 3) : ");
	printf("%d\n", ft_iterative_power(5, 3));
	printf("Correct Answer : 125\n");
	printf("ft_iterative_power(1, 1) : ");
	printf("%d\n", ft_iterative_power(1, 1));
	printf("Correct Answer : 1\n");
	printf("ft_iterative_power(2, 10) : ");
	printf("%d\n", ft_iterative_power(2, 10));
	printf("Correct Answer : 1024\n");
	/* power lower than 0 returns 0. */
	printf("ft_iterative_power(2, -10) : ");
	printf("%d\n", ft_iterative_power(2, -10));
	printf("Correct Answer : 0\n");

	printf("\n------------ ex03 ------------\n");
	printf("ft_recursive_power(0, 0) : ");
	printf("%d\n", ft_recursive_power(0, 0));
	printf("Correct Answer : 1\n");
	printf("ft_recursive_power(-5, 3) : ");
	printf("%d\n", ft_recursive_power(-5, 3));
	printf("Correct Answer : -125\n");
	printf("ft_recursive_power(5, 3) : ");
	printf("%d\n", ft_recursive_power(5, 3));
	printf("Correct Answer : 125\n");
	printf("ft_recursive_power(1, 1) : ");
	printf("%d\n", ft_recursive_power(1, 1));
	printf("Correct Answer : 1\n");
	printf("ft_recursive_power(2, 10) : ");
	printf("%d\n", ft_recursive_power(2, 10));
	printf("Correct Answer : 1024\n");
	printf("ft_recursive_power(1, 0) : ");
	printf("%d\n", ft_recursive_power(1, 0));
	printf("Correct Answer : 1\n");
	printf("ft_recursive_power(2, 0) : ");
	printf("%d\n", ft_recursive_power(2, 0));
	printf("Correct Answer : 1\n");
	printf("ft_recursive_power(0, 1) : ");
	printf("%d\n", ft_recursive_power(0, 1));
	printf("Correct Answer : 0\n");
	/* power lower than 0 returns 0. */
	printf("ft_recursive_power(2, -10) : ");
	printf("%d\n", ft_recursive_power(2, -10));
	printf("Correct Answer : 0\n");

	printf("\n------------ ex04 ------------\n");
	printf("ft_fibonacci(-3) : ");
	printf("%d\n", ft_fibonacci(-3));
	printf("Correct Answer : -1\n");
	printf("ft_fibonacci(0) : ");
	printf("%d\n", ft_fibonacci(0));
	printf("Correct Answer : 0\n");
	printf("ft_fibonacci(1) : ");
	printf("%d\n", ft_fibonacci(1));
	printf("Correct Answer : 1\n");
	printf("ft_fibonacci(2) : ");
	printf("%d\n", ft_fibonacci(2));
	printf("Correct Answer : 1\n");
	printf("ft_fibonacci(3) : ");
	printf("%d\n", ft_fibonacci(3));
	printf("Correct Answer : 2\n");
	printf("ft_fibonacci(4) : ");
	printf("%d\n", ft_fibonacci(4));
	printf("Correct Answer : 3\n");
	printf("ft_fibonacci(5) : ");
	printf("%d\n", ft_fibonacci(5));
	printf("Correct Answer : 5\n");

	printf("\n------------ ex05 ------------\n");
	printf("ft_sqrt(0) : ");
	printf("%d\n", ft_sqrt(0));
	printf("Correct Answer : 0\n");
	printf("ft_sqrt(3) : ");
	printf("%d\n", ft_sqrt(3));
	printf("Correct Answer : 0\n");
	printf("ft_sqrt(9) : ");
	printf("%d\n", ft_sqrt(9));
	printf("Correct Answer : 3\n");
	printf("ft_sqrt(1) : ");
	printf("%d\n", ft_sqrt(1));
	printf("Correct Answer : 1\n");
	printf("ft_sqrt(-9) : ");
	printf("%d\n", ft_sqrt(-9));
	printf("Correct Answer : 0\n");
	printf("ft_sqrt(25) : ");
	printf("%d\n", ft_sqrt(25));
	printf("Correct Answer : 5\n");
	printf("ft_sqrt(26) : ");
	printf("%d\n", ft_sqrt(26));
	printf("Correct Answer : 0\n");
	printf("ft_sqrt(2147483647) : ");
	printf("%d\n", ft_sqrt(2147483647));
	printf("Correct Answer : 0\n");
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("Correct Answer : 1000\n");
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("Correct Answer : 0\n");
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("Correct Answer : 0\n");
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));	
	printf("Correct Answer : 46340\n");

	printf("\n------------ ex06 ------------\n");
	printf("ft_is_prime(0) : ");
	printf("%d\n", ft_is_prime(0));
	printf("Correct Answer : 0\n");
	printf("ft_is_prime(1) : ");
	printf("%d\n", ft_is_prime(1));
	printf("Correct Answer : 0\n");
	printf("ft_is_prime(2) : ");
	printf("%d\n", ft_is_prime(2));
	printf("Correct Answer : 1\n");
	printf("ft_is_prime(3) : ");
	printf("%d\n", ft_is_prime(3));
	printf("Correct Answer : 1\n");
	printf("ft_is_prime(4) : ");
	printf("%d\n", ft_is_prime(4));
	printf("Correct Answer : 0\n");
	printf("ft_is_prime(5) : ");
	printf("%d\n", ft_is_prime(5));
	printf("Correct Answer : 1\n");
	printf("ft_is_prime(-3) : ");
	printf("%d\n", ft_is_prime(-3));
	printf("Correct Answer : 0\n");
	printf("ft_is_prime(2147395695) : ");
	printf("%d\n", ft_is_prime(2147395695));
	printf("Correct Answer : 0\n");
	printf("ft_is_prime(2147395696) : ");
	printf("%d\n", ft_is_prime(2147395696));
	printf("Correct Answer : 0\n");
	printf("ft_is_prime(2147395697) : ");
	printf("%d\n", ft_is_prime(2147395697));
	printf("Correct Answer : 1\n");

	printf("\n------------ ex07 ------------\n");
	printf("ft_find_next_prime(-1824) : ");
	printf("%d\n", ft_find_next_prime(-1824));
	printf("Correct Answer : 2\n");	
	printf("ft_find_next_prime(-2) : ");
	printf("%d\n", ft_find_next_prime(-2));
	printf("Correct Answer : 2\n");
	printf("ft_find_next_prime(-1) : ");
	printf("%d\n", ft_find_next_prime(-1));
	printf("Correct Answer : 2\n");
	printf("ft_find_next_prime(0) : ");
	printf("%d\n", ft_find_next_prime(0));
	printf("Correct Answer : 2\n");
	printf("ft_find_next_prime(1) : ");
	printf("%d\n", ft_find_next_prime(1));
	printf("Correct Answer : 2\n");
	printf("ft_find_next_prime(2) : ");
	printf("%d\n", ft_find_next_prime(2));
	printf("Correct Answer : 2\n");
	printf("ft_find_next_prime(3) : ");
	printf("%d\n", ft_find_next_prime(3));
	printf("Correct Answer : 3\n");
	printf("ft_find_next_prime(4) : ");
	printf("%d\n", ft_find_next_prime(4));
	printf("Correct Answer : 5\n");
	printf("ft_find_next_prime(5) : ");
	printf("%d\n", ft_find_next_prime(5));
	printf("Correct Answer : 5\n");
	printf("ft_find_next_prime(6) : ");
	printf("%d\n", ft_find_next_prime(6));
	printf("Correct Answer : 7\n");
	printf("ft_find_next_prime(7) : ");
	printf("%d\n", ft_find_next_prime(7));
	printf("Correct Answer : 7\n");
	printf("ft_find_next_prime(8) : ");
	printf("%d\n", ft_find_next_prime(8));
	printf("Correct Answer : 11\n");
	printf("ft_find_next_prime(9) : ");
	printf("%d\n", ft_find_next_prime(9));
	printf("Correct Answer : 11\n");
	printf("ft_find_next_prime(54) : ");	
	printf("%d\n", ft_find_next_prime(54));
	printf("Correct Answer : 59\n");
	printf("ft_find_next_prime(55) : ");
	printf("%d\n", ft_find_next_prime(55));
	printf("Correct Answer : 59\n");		
	printf("ft_find_next_prime(2147395694) : ");
	printf("%d\n", ft_find_next_prime(2147395694));
	printf("Correct Answer : 2147395697\n");
	printf("ft_find_next_prime(2147395695) : ");
	printf("%d\n", ft_find_next_prime(2147395695));
	printf("Correct Answer : 2147395697\n");
	printf("ft_find_next_prime(2147395696) : ");
	printf("%d\n", ft_find_next_prime(2147395696));
	printf("Correct Answer : 2147395697\n");
	printf("ft_find_next_prime(2147395697) : ");
	printf("%d\n", ft_find_next_prime(2147395697));
	printf("Correct Answer : 2147395697\n");
	printf("ft_find_next_prime(2147395698) : ");
	printf("%d\n", ft_find_next_prime(2147395698));
	printf("Correct Answer : 2147395703\n");

	printf("\n------------ ex08 ------------\n");
	printf("Your Answer : %d\n", ft_ten_queens_puzzle());
	printf("Correct Answer : 724\n");
}
