#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int x = 42;
	int len1 = 0;
	int len2 = 0;

    // Test %c
    ft_printf("ft_printf %%c: %c\n", 'A');
    printf("printf    %%c: %c\n", 'A');

    // Test %s
	ft_printf("ft_printf %%s: %s\n", "Hello");
 	printf("printf    %%s: %s\n", "Hello");
    
    // Test %s (empty string)
    ft_printf("ft_printf %%s (empty): %s\n", "");
    printf("printf    %%s (empty): %s\n", "");

    // Test %p
    ft_printf("ft_printf %%p: %p\n", &x);
    printf("printf    %%p: %p\n", &x);
    
    // Test %p (NULL)
    ft_printf("ft_printf %%p (NULL): %p\n", NULL);
    printf("printf    %%p (NULL): %p\n", NULL);

    // Test %d
    ft_printf("ft_printf %%d: %d\n", -42);
    printf("printf    %%d: %d\n", -42);
    
    // Test %d (zero)
    ft_printf("ft_printf %%d (zero): %d\n", 0);
    printf("printf    %%d (zero): %d\n", 0);
    
    // Test %d (min int)
    ft_printf("ft_printf %%d (min): %d\n", INT_MIN);
    printf("printf    %%d (min): %d\n", INT_MIN);

    // Test %i
    ft_printf("ft_printf %%i: %i\n", 123);
    printf("printf    %%i: %i\n", 123);

    // Test %u
    ft_printf("ft_printf %%u: %u\n", 456);
    printf("printf    %%u: %u\n", 456);
    
    // Test %u (zero)
    ft_printf("ft_printf %%u (zero): %u\n", 0);
    printf("printf    %%u (zero): %u\n", 0);

    // Test %x
    ft_printf("ft_printf %%x: %x\n", 255);
    printf("printf    %%x: %x\n", 255);
    
    // Test %x (zero)
    ft_printf("ft_printf %%x (zero): %x\n", 0);
    printf("printf    %%x (zero): %x\n", 0);

    // Test %X
    ft_printf("ft_printf %%X: %X\n", 255);
    printf("printf    %%X: %X\n", 255);

    // Test %%
    ft_printf("ft_printf %%%%: %%\n");
    printf("printf    %%%%: %%\n");

	// Test multiple specifiers
	ft_printf("ft_printf multiple: %c %s %d %u %x %X %p\n", 'B', "Test", -100, 100, 170, 170, &x);
	printf("printf    multiple: %c %s %d %u %x %X %p\n", 'B', "Test", -100, 100, 170, 170, &x);

	// Test random
	len1 = ft_printf("ft_printf random: Hello %s%%%dyour score is %d%%i and your pointer is %p\n", "User", 55, 95, &x);
	len2 = printf("ft_printf random: Hello %s%%%dyour score is %d%%i and your pointer is %p\n", "User", 55, 95, &x);

	// Test lengths
	ft_printf("Length: ft_printf = %d\n", len1);
	printf("Length: printf = %d\n", len2);


    return (0);
}