# Libft – Function Testing Guide

## 1. ft_atoi

**Test code:**
```c
#include <stdio.h>

printf("%d\n", ft_atoi("12345"));
printf("%d\n", ft_atoi("-42"));
```

**Compilation:**
```bash
cc -Wall -Wextra -Werror main.c ft_atoi.c -o test
```

**Expected output:**
```text
12345
-42
```

------------------------------------------------------------------------

## 2. ft_bzero

**Test code:**
```c
#include <stdio.h>

char str[] = "LibftProject";

printf("Before: %s\n", str);
ft_bzero(str, 5);
printf("After: %s\n", str + 5);
```

**Compilation:**
```bash
cc -Wall -Wextra -Werror main.c ft_bzero.c -o test
```

**Expected output:**
```text
Before: LibftProject
After: Project
```

------------------------------------------------------------------------

## 3. ft_calloc

**Test code:**
```c
#include <stdio.h>
#include <stdlib.h>

int *numbers;
int i;

numbers = ft_calloc(5, sizeof(int));
if (numbers == NULL)
    return (1);

i = 0;
while (i < 5)
{
    printf("numbers[%d] = %d\n", i, numbers[i]);
    i++;
}
free(numbers);
```

**Compilation:**
```bash
cc -Wall -Wextra -Werror main.c ft_calloc.c ft_bzero.c -o test
```

**Expected output:**
```text
numbers[0] = 0
numbers[1] = 0
numbers[2] = 0
numbers[3] = 0
numbers[4] = 0
```

------------------------------------------------------------------------

## 4. ft_isalnum

**Test code:**
```c
#include <stdio.h>

printf("%d\n", ft_isalnum('A'));
printf("%d\n", ft_isalnum('5'));
printf("%d\n", ft_isalnum('@'));
```

**Compilation:**
```bash
cc -Wall -Wextra -Werror main.c ft_isalnum.c -o test
```

**Expected output:**
```text
1
1
0
```

------------------------------------------------------------------------

Markdown
### 5. ft_isalpha

Test code:

```c
#include <stdio.h>

printf("%d\n", ft_isalpha('A'));
printf("%d\n", ft_isalpha('z'));
printf("%d\n", ft_isalpha('5'));
printf("%d\n", ft_isalpha('@'));
Compilation:

Bash
cc -Wall -Wextra -Werror main.c ft_isalpha.c -o test
Expected output:

Plaintext
1
1
0
0
```
---------------------------------------------------------------------
## 6. ft_isascii

Test code:

```c
#include <stdio.h>

printf("%d\n", ft_isascii('A'));
printf("%d\n", ft_isascii('5'));
printf("%d\n", ft_isascii(127));
printf("%d\n", ft_isascii(128));

```

Compilation:

```bash
cc -Wall -Wextra -Werror main.c ft_isascii.c -o test

```

Expected output:

```text
1
1
1
0

```

----------------------------------------------------------------------

## 7. ft_isdigit

Test code:

```c
#include <stdio.h>

printf("%d\n", ft_isdigit('5'));
printf("%d\n", ft_isdigit('0'));
printf("%d\n", ft_isdigit('A'));
printf("%d\n", ft_isdigit('@'));

```

Compilation:

```bash
cc -Wall -Wextra -Werror main.c ft_isdigit.c -o test

```

Expected output:

```text
1
1
0
0

```

----------------------------------------------------------------------

## 8. ft_isprint

Test code:

```c
#include <stdio.h>

printf("%d\n", ft_isprint('A'));
printf("%d\n", ft_isprint(' '));
printf("%d\n", ft_isprint('5'));
printf("%d\n", ft_isprint(31));
printf("%d\n", ft_isprint(127));

```

Compilation:

```bash
cc -Wall -Wextra -Werror main.c ft_isprint.c -o test

```

Expected output:

```text
1
1
1
0
0

```

----------------------------------------------------------------------

## 9. ft_itoa

Test code:

```c
#include <stdio.h>
#include <stdlib.h>

printf("%s\n", ft_itoa(42));
printf("%s\n", ft_itoa(-123));
printf("%s\n", ft_itoa(0));
printf("%s\n", ft_itoa(2147483647));
printf("%s\n", ft_itoa(-2147483648));

```

Compilation:

```bash
cc -Wall -Wextra -Werror main.c ft_itoa.c -o test

```

Expected output:

```text
42
-123
0
2147483647
-2147483648

```
---------------------------------------------------------------------------------

## 10. ft_memchr

Test code:

```c
#include <stdio.h>

int main(void)
{
    char str[] = "HELLO";
    char *result;

    result = ft_memchr(str, 'L', 5);
    if (result != NULL)
        printf("Found: %c\n", *result);
    else
        printf("Not found\n");
    return (0);
}

```

Expected output:

```text
Found: L

```

Test another case:

Change:

```c
result = ft_memchr(str, 'L', 5);

```

to:

```c
result = ft_memchr(str, 'L', 2);

```

Expected output:

```text
Not found

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_memchr.c -o test
./test

```
-------------------------------------------------------------------

## 11. ft_memcmp

Test code:

```c
#include <stdio.h>

int main(void)
{
    char s1[] = "CAT";
    char s2[] = "CAR";

    printf("Result: %d\n", ft_memcmp(s1, s2, 3));
    printf("Result: %d\n", ft_memcmp("HELLO", "HELLO", 5));
    printf("Result: %d\n", ft_memcmp("DOG", "DOT", 3));
    return (0);
}

```

Expected output:

```text
Result: 2
Result: 0
Result: -13

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_memcmp.c -o test
./test

```
## 12. ft_memcpy

Test code:

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello";
    char dest[20];

    ft_memcpy(dest, src, 6);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return (0);
}

```

Expected output:

```text
Source: Hello
Destination: Hello

```
-------------------------------------------------------------------

## 13. ft_memmove

Test code:

```c
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "ABCDE";

    ft_memmove(str1, str1 + 1, 4);
    printf("Test 1: %s\n", str1);

    ft_memmove(str2 + 1, str2, 4);
    printf("Test 2: %s\n", str2);

    return (0);
}

```

Expected output:

```text
Test 1: ello
Test 2: AABCD

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_memmove.c -o test
./test

```
-------------------------------------------------------------------


## 14. ft_memset

Test code:

```c
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";

    printf("Before: %s\n", str);

    ft_memset(str, 'X', 3);

    printf("After:  %s\n", str);

    return (0);
}

```

Expected output:

```text
Before: Hello
After:  XXXlo

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_memset.c -o test
./test

```
-------------------------------------------------------------------

## 15. ft_putchar_fd

Test code:

```c
#include <unistd.h>

int	main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('X', 2);
	ft_putchar_fd('\n', 2);

	return (0);
}

```

Expected output:

```text
Hello
X

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_putchar_fd.c -o test
./test

```
-------------------------------------------------------------------

## 16. ft_putendl_fd

Test code:

```c
int main(void)
{
    ft_putendl_fd("Hello World", 1);
    ft_putendl_fd("42 Abu Dhabi", 1);
    ft_putendl_fd("Error message", 2);
    ft_putendl_fd(NULL, 1);
    return (0);
}

```

Expected output:

```text
Hello World
42 Abu Dhabi
Error message

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_putendl_fd.c -o test
./test

```
-------------------------------------------------------------------

## ft_putnbr_fd

Test code:

```c
int main(void)
{
    ft_putnbr_fd(123, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-456, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n', 1);

    return (0);
}

```

Expected output:

```text
123
-456
0
-2147483648
2147483647

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c -o test
./test

```
-------------------------------------------------------------------

## ft_putstr_fd

Test code:

```c
int main(void)
{
    ft_putstr_fd("Hello 42 Abu Dhabi!", 1);
    ft_putchar_fd('\n', 1);

    ft_putstr_fd("Testing Libft", 1);
    ft_putchar_fd('\n', 1);

    ft_putstr_fd("", 1);
    ft_putchar_fd('\n', 1);

    ft_putstr_fd(NULL, 1);

    return (0);
}

```

Expected output:

```text
Hello 42 Abu Dhabi!
Testing Libft


```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_putstr_fd.c ft_putchar_fd.c -o test
./test

Note: Make sure any helper functions used inside ft_putstr_fd (such as ft_strlen.c) are also included in the compilation.

-------------------------------------------------------------------
```
## ft_split

Test code:

```c
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("  Hello   42 Abu Dhabi  ", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("arr[%d] = %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

```

Expected output:

```text
arr[0] = Hello
arr[1] = 42
arr[2] = Abu
arr[3] = Dhabi

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_split.c ft_substr.c ft_strlen.c ft_strdup.c -o test
./test

```

*Note: Make sure `<stdio.h>` is included when testing `printf`, and include all helper functions used by `ft_split` and `ft_substr` during compilation.*


-------------------------------------------------------------------

তোমার `ft_strchr()` function-এর নিচে এই ছোট `main()` বসাও।

```
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strchr("banana", 'a');
	printf("Expected: anana\n");
	printf("Actual:   %s\n\n", result);

	result = ft_strchr("banana", 'z');
	printf("Expected: NULL\n");
	printf("Actual:   %s\n\n", result ? result : "NULL");

	result = ft_strchr("banana", '\0');
	printf("Expected: empty string\n");
	printf("Actual:   %s\n", result);

	return (0);
}
```

**Expected output:**

```
Expected: anana
Actual:   anana

Expected: NULL
Actual:   NULL

Expected: empty string
Actual:
```

**Compile:**

```
cc -Wall -Wextra -Werror ft_strchr.c -o test
./test
```
-------------------------------------------------------------
## ft_strdup

Test code:

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*copy;

	copy = ft_strdup("Hello 42");
	if (!copy)
		return (1);
	printf("Original: Hello 42\n");
	printf("Copy:     %s\n", copy);
	free(copy);
	return (0);
}

```

Expected output:

```text
Original: Hello 42
Copy:     Hello 42

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strdup.c ft_strlen.c -o test
./test

```

*Note: Make sure any helper functions used inside `ft_strdup` (such as `ft_strlen.c` or `ft_memcpy.c`) are included in the compilation.*

--------------------------------------------------------------------------------------------------

## ft_striteri

Test code:

```c
#include <stdio.h>
#include "libft.h"

void	make_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	str[] = "hello 42";

	printf("Before: %s\n", str);
	ft_striteri(str, make_upper);
	printf("After:  %s\n", str);
	return (0);
}

```

Expected output:

```text
Before: hello 42
After:  HELLO 42

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_striteri.c -o test
./test

```
---------------------------------------------------------------------------

## ft_striteri

Test code:

```c
#include <stdio.h>
#include "libft.h"

void	test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'X';
}

int	main(void)
{
	char	str[] = "HELLO";

	printf("Before: %s\n", str);
	ft_striteri(str, test);
	printf("After:  %s\n", str);

	return (0);
}

```

Expected output:

```text
Before: HELLO
After:  XEXLX

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_striteri.c -o test
./test

```
---------------------------------------------------------------
## ft_strjoin

Test code:

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strjoin("Hello ", "42 Abu Dhabi");
	if (!result)
		return (1);
	printf("Result: %s\n", result);
	free(result);
	return (0);
}

```

Expected output:

```text
Result: Hello 42 Abu Dhabi

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strjoin.c ft_strlen.c -o test
./test

``` -------------------------------------------
## ft_strlcat

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[20] = "Hello ";
	size_t	result;

	result = ft_strlcat(dst, "42", sizeof(dst));

	printf("Result: %s\n", dst);
	printf("Return: %zu\n", result);

	return (0);
}

```

Expected output:

```text
Result: Hello 42
Return: 8

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c -o test
./test

```
-----------------------------------------------------------

## ft_strlcpy

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[5];
	size_t	result;

	result = ft_strlcpy(dst, "HELLO", sizeof(dst));

	printf("Destination: %s\n", dst);
	printf("Return: %zu\n", result);

	return (0);
}

```

Expected output:

```text
Destination: HELL
Return: 5

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strlcpy.c -o test
./test

```
------------------------------------------------
## ft_strlen

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Expected: 5 | Actual: %zu\n", ft_strlen("HELLO"));
	printf("Expected: 3 | Actual: %zu\n", ft_strlen("CAT"));
	printf("Expected: 0 | Actual: %zu\n", ft_strlen(""));
	return (0);
}

```

Expected output:

```text
Expected: 5 | Actual: 5
Expected: 3 | Actual: 3
Expected: 0 | Actual: 0

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strlen.c -o test
./test

```
-------------------------------------------------------
## ft_strmapi

Test code:

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	make_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("hello", make_upper);
	if (!result)
		return (1);
	printf("Original: hello\n");
	printf("Result:   %s\n", result);
	free(result);
	return (0);
}

```

Expected output:

```text
Original: hello
Result:   HELLO

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strmapi.c ft_strlen.c -o test
./test

```
------------------------------------

## ft_strncmp

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Test 1: %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("Test 2: %d\n", ft_strncmp("CAT", "CAR", 3));
	printf("Test 3: %d\n", ft_strncmp("CAT", "DOG", 0));
	printf("Test 4: %d\n", ft_strncmp("ABC", "ABD", 2));

	return (0);
}

```

Expected output:

```text
Test 1: 0
Test 2: 2
Test 3: 0
Test 4: 0

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strncmp.c -o test
./test

```

------------------------------------------------------
## ft_strnstr

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strnstr("Hello World", "World", 11);
	printf("Test 1: %s\n", result ? result : "NULL");

	result = ft_strnstr("Hello World", "World", 5);
	printf("Test 2: %s\n", result ? result : "NULL");

	result = ft_strnstr("Hello World", "", 5);
	printf("Test 3: %s\n", result ? result : "NULL");

	result = ft_strnstr("Hello World", "Cat", 11);
	printf("Test 4: %s\n", result ? result : "NULL");

	return (0);
}

```

Expected output:

```text
Test 1: World
Test 2: NULL
Test 3: Hello World
Test 4: NULL

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strnstr.c -o test
./test

```
--------------------------------------------------------
## ft_strrchr

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strrchr("banana", 'a');
	printf("Expected: a\n");
	printf("Actual:   %s\n\n", result);

	result = ft_strrchr("banana", 'n');
	printf("Expected: na\n");
	printf("Actual:   %s\n\n", result);

	result = ft_strrchr("banana", 'z');
	printf("Expected: NULL\n");
	printf("Actual:   %s\n", result ? result : "NULL");

	return (0);
}

```

Expected output:

```text
Expected: a
Actual:   a

Expected: na
Actual:   na

Expected: NULL
Actual:   NULL

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strrchr.c -o test
./test

```
-------------------------------------------------
## ft_strtrim

Test code:

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*trimmed;

	trimmed = ft_strtrim("  \t\nHello 42 Abu Dhabi!\n\t  ", " \t\n");
	if (!trimmed)
		return (1);
	printf("Result: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}

```

Expected output:

```text
Result: 'Hello 42 Abu Dhabi!'

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strtrim.c ft_strchr.c ft_strlen.c ft_strlcpy.c -o test
./test

```
---------------------------------------------------------------
## ft_substr

Test code:

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*sub;

	sub = ft_substr("Hello 42 Abu Dhabi!", 6, 12);
	if (!sub)
		return (1);
	printf("Result: '%s'\n", sub);
	free(sub);
	return (0);
}

```

Expected output:

```text
Result: '42 Abu Dhabi'

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_substr.c ft_strlen.c ft_strdup.c -o test
./test

```
-----------------------------------------------------------------
## ft_tolower

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Input 'A': %c\n", ft_tolower('A'));
	printf("Input 'Z': %c\n", ft_tolower('Z'));
	printf("Input 'm': %c\n", ft_tolower('m'));
	printf("Input '5': %c\n", ft_tolower('5'));
	return (0);
}

```

Expected output:

```text
Input 'A': a
Input 'Z': z
Input 'm': m
Input '5': 5

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_tolower.c -o test
./test

```
--------------------------------------------------

## ft_toupper

Test code:

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Input 'a': %c\n", ft_toupper('a'));
	printf("Input 'z': %c\n", ft_toupper('z'));
	printf("Input 'M': %c\n", ft_toupper('M'));
	printf("Input '5': %c\n", ft_toupper('5'));
	return (0);
}

```

Expected output:

```text
Input 'a': A
Input 'z': Z
Input 'M': M
Input '5': 5

```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_toupper.c -o test
./test

```
---------------------------------------------------------
**Note:** These snippets go inside `main()`. Include `libft.h` and the required standard headers in `main.c`. Each compilation command assumes you have a separate `main.c` containing only the corresponding test. Keep `main.c` out of your 42 submission.