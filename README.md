# Libft – Function Testing Guide

## 1. ft_atoi

Converts a string of numbers (including spaces and `+` or `-` signs) into a real integer (`int`). It stops reading as soon as it hits a non-number character.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_atoi("12345"));
	printf("%d\n", ft_atoi("-42"));
	return (0);
}

```

**Expected output:**

```text
12345
-42

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_atoi.c -o test
./test

```

---

## 2. ft_bzero

Erases the first `n` bytes of a memory area by filling them with zeros (`\0`). It works on any data type by clearing the memory one byte at a time.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "LibftProject";

	printf("Before: %s\n", str);
	ft_bzero(str, 5);
	printf("After:  %s\n", str + 5);
	return (0);
}

```

**Expected output:**

```text
Before: LibftProject
After:  Project

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_bzero.c -o test
./test

```

---

## 3. ft_calloc

Allocates memory for an array of elements and sets every byte to zero. This prevents leftover garbage values from appearing in your new memory.

**Test code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int	*numbers;
	int	i;

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
	return (0);
}

```

**Expected output:**

```text
numbers[0] = 0
numbers[1] = 0
numbers[2] = 0
numbers[3] = 0
numbers[4] = 0
<<<<<<< HEAD

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_calloc.c ft_bzero.c -o test
./test

```

---

## 4. ft_isalnum

Checks if a character is either a letter (`A–Z`, `a–z`) or a number (`0–9`). It returns a non-zero value if true, and `0` if false.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('@'));
	return (0);
}

```

**Expected output:**

```text
1
1
0

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_isalnum.c -o test
./test

```

---

## 5. ft_isalpha

Checks if a character is an alphabet letter (`A–Z` or `a–z`). It returns a non-zero value for letters and `0` for everything else.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha('@'));
	return (0);
}

```

**Expected output:**

=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
```text
1
1
0
<<<<<<< HEAD
0

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_isalpha.c -o test
./test

```

---

## 6. ft_isascii

Checks if a number falls inside the standard 7-bit ASCII table (`0` to `127`). It returns `1` if valid and `0` if it is outside that range.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(128));
	return (0);
}

```

**Expected output:**

```text
1
1
1
0

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_isascii.c -o test
./test

```

---

## 7. ft_isdigit

Checks if a character is a numeric digit from `'0'` to `'9'`. It returns a non-zero value if it is a digit and `0` otherwise.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('@'));
	return (0);
}

```

**Expected output:**

```text
1
1
0
0

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_isdigit.c -o test
./test

```

---

## 8. ft_isprint

Checks if a character is visible on screen, including the space character (ASCII `32` to `126`). Control characters like `\n` or `DEL` (`127`) return `0`.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('5'));
	printf("%d\n", ft_isprint(31));
	printf("%d\n", ft_isprint(127));
	return (0);
}

```

**Expected output:**
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
1
1
1
0
0

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_isprint.c -o test
./test

```

---

## 9. ft_itoa

Converts a whole number (`int`) into a newly allocated text string. It handles negative signs and edge cases like `-2147483648`.

**Test code:**
=======
----------------------------------------------------------------------

## 9. ft_itoa

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```c
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}

```

**Expected output:**
=======

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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
42
-123
0
2147483647
-2147483648

```
<<<<<<< HEAD

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_itoa.c -o test
./test

```

---

## 10. ft_memchr

Searches the first `n` bytes of a memory block for a specific byte value. If found, it returns a pointer to that byte; otherwise, it returns `NULL`.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "HELLO";
	char	*result;

	result = ft_memchr(str, 'L', 5);
	if (result != NULL)
		printf("Found: %c\n", *result);
	else
		printf("Not found\n");
	result = ft_memchr(str, 'L', 2);
	if (result != NULL)
		printf("Found: %c\n", *result);
	else
		printf("Not found\n");
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**

```text
Found: L
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
Not found

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_memchr.c -o test
./test

```

---

## 11. ft_memcmp

Compares two memory blocks byte by byte up to `n` bytes. It returns `0` if they match, or the difference between the first two differing bytes.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s1[] = "CAT";
	char	s2[] = "CAR";

	printf("Result: %d\n", ft_memcmp(s1, s2, 3));
	printf("Result: %d\n", ft_memcmp("HELLO", "HELLO", 5));
	printf("Result: %d\n", ft_memcmp("DOG", "DOT", 3));
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Result: 2
Result: 0
Result: -13

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_memcmp.c -o test
./test

```

---

## 12. ft_memcpy

Copies `n` bytes directly from a source memory block to a destination memory block. It does not stop at `\0` and assumes the two memory areas do not overlap.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "Hello";
	char	dest[20];

	ft_memcpy(dest, src, 6);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Source: Hello
Destination: Hello

```
<<<<<<< HEAD

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_memcpy.c -o test
./test

```

---

## 13. ft_memmove

Copies `n` bytes from source to destination safely, even when the two memory blocks overlap. If the destination starts after the source, it copies backwards to avoid overwriting data.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "ABCDE";

	ft_memmove(str1, str1 + 1, 4);
	printf("Test 1: %s\n", str1);
	ft_memmove(str2 + 1, str2, 4);
	printf("Test 2: %s\n", str2);
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Test 1: ello
Test 2: AABCD

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_memmove.c -o test
./test

```

---

## 14. ft_memset

Fills the first `n` bytes of a memory block with a single chosen byte value. It returns a pointer to the start of that memory block.

**Test code:**

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "Hello";

	printf("Before: %s\n", str);
	ft_memset(str, 'X', 3);
	printf("After:  %s\n", str);
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Before: Hello
After:  XXXlo

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_memset.c -o test
./test

```

---

## 15. ft_putchar_fd

Writes a single character to the given file descriptor (`1` for standard output, `2` for standard error). It uses the `write` system call.

**Test code:**

```c
#include "libft.h"
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

int	main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('\n', 1);
<<<<<<< HEAD
	ft_putchar_fd('X', 2);
	ft_putchar_fd('\n', 2);
=======

	ft_putchar_fd('X', 2);
	ft_putchar_fd('\n', 2);

>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
	return (0);
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Hello
X

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_putchar_fd.c -o test
./test

```

---

## 16. ft_putendl_fd

Writes a string to the given file descriptor followed immediately by a newline (`\n`). If the string is `NULL`, it safely does nothing.

**Test code:**

```c
#include "libft.h"

int	main(void)
{
	ft_putendl_fd("Hello World", 1);
	ft_putendl_fd("42 Abu Dhabi", 1);
	ft_putendl_fd("Error message", 2);
	ft_putendl_fd(NULL, 1);
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Hello World
42 Abu Dhabi
Error message

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c -o test
./test

```

---

## 17. ft_putnbr_fd

Prints a whole number (`int`) to the given file descriptor by breaking it into single digits. It handles negative numbers and `-2147483648` properly.

**Test code:**

```c
#include "libft.h"

int	main(void)
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
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
123
-456
0
-2147483648
2147483647

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c -o test
./test

```

---

## 18. ft_putstr_fd

Writes an entire string to the given file descriptor without adding a newline at the end. It safely ignores `NULL` strings.

**Test code:**

```c
#include "libft.h"

int	main(void)
{
	ft_putstr_fd("Hello 42 Abu Dhabi!", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Testing Libft", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(NULL, 1);
	return (0);
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Hello 42 Abu Dhabi!
Testing Libft


```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_putstr_fd.c ft_putchar_fd.c -o test
./test

```

---

## 19. ft_split

Splits a string into an array of smaller strings wherever a chosen delimiter character appears. The returned array ends with a `NULL` pointer and must be freed after use.

**Test code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
arr[0] = Hello
arr[1] = 42
arr[2] = Abu
arr[3] = Dhabi

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_split.c ft_substr.c ft_strlen.c ft_strdup.c -o test
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_split.c ft_substr.c ft_strlen.c ft_strdup.c -o test
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
./test

```

<<<<<<< HEAD
---

## 20. ft_strchr

Scans a string from left to right to find the first match of character `c`. It returns a pointer to that character (including `\0` if searched) or `NULL` if not found.

**Test code:**

```c
=======
*Note: Make sure `<stdio.h>` is included when testing `printf`, and include all helper functions used by `ft_split` and `ft_substr` during compilation.*


-------------------------------------------------------------------

তোমার `ft_strchr()` function-এর নিচে এই ছোট `main()` বসাও।

```
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strchr("banana", 'a');
	printf("Expected: anana\n");
	printf("Actual:   %s\n\n", result);
<<<<<<< HEAD
	result = ft_strchr("banana", 'z');
	printf("Expected: NULL\n");
	printf("Actual:   %s\n\n", result ? result : "NULL");
	result = ft_strchr("banana", '\0');
	printf("Expected: empty string\n");
	printf("Actual:   %s\n", result);
	return (0);
}

=======

	result = ft_strchr("banana", 'z');
	printf("Expected: NULL\n");
	printf("Actual:   %s\n\n", result ? result : "NULL");

	result = ft_strchr("banana", '\0');
	printf("Expected: empty string\n");
	printf("Actual:   %s\n", result);

	return (0);
}
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
```

**Expected output:**

<<<<<<< HEAD
```text
=======
```
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
Expected: anana
Actual:   anana

Expected: NULL
Actual:   NULL

Expected: empty string
<<<<<<< HEAD
Actual:   

```

**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strchr.c -o test
./test

```

---

## 21. ft_strdup

Creates an exact duplicate of a string in newly allocated memory. Remember to `free` the returned pointer when you are done with it.

**Test code:**
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Original: Hello 42
Copy:     Hello 42

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strdup.c ft_strlen.c -o test
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strdup.c ft_strlen.c -o test
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
./test

```

<<<<<<< HEAD
---

## 22. ft_striteri

Applies a custom function `f` to every character in a string, passing each character's index and memory address. This modifies the original string directly in place.

**Test code:**
=======
*Note: Make sure any helper functions used inside `ft_strdup` (such as `ft_strlen.c` or `ft_memcpy.c`) are included in the compilation.*

--------------------------------------------------------------------------------------------------

## ft_striteri

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Before: hello 42
After:  HELLO 42

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_striteri.c -o test
./test

```

---

## 23. ft_strjoin

Allocates memory and joins two strings (`s1` followed by `s2`) into one new string. Both original strings stay unchanged.

**Test code:**
=======
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
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Result: Hello 42 Abu Dhabi

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strjoin.c ft_strlen.c -o test
./test

```

---

## 24. ft_strlcat

Safely appends `src` to the end of `dst` without exceeding the total buffer size `dstsize`. It always ends the result with `\0` and returns the total length it tried to create.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strjoin.c ft_strlen.c -o test
./test

``` -------------------------------------------
## ft_strlcat

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[20] = "Hello ";
	size_t	result;

	result = ft_strlcat(dst, "42", sizeof(dst));
<<<<<<< HEAD
	printf("Result: %s\n", dst);
	printf("Return: %zu\n", result);
=======

	printf("Result: %s\n", dst);
	printf("Return: %zu\n", result);

>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
	return (0);
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Result: Hello 42
Return: 8

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strlcat.c ft_strlen.c -o test
./test

```

---

## 25. ft_strlcpy

Safely copies up to `dstsize - 1` characters from `src` into `dst` and always adds `\0` at the end. It returns the full length of `src` so you can check if the text was cut short.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c -o test
./test

```
-----------------------------------------------------------

## ft_strlcpy

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[5];
	size_t	result;

	result = ft_strlcpy(dst, "HELLO", sizeof(dst));
<<<<<<< HEAD
	printf("Destination: %s\n", dst);
	printf("Return: %zu\n", result);
=======

	printf("Destination: %s\n", dst);
	printf("Return: %zu\n", result);

>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
	return (0);
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Destination: HELL
Return: 5

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strlcpy.c -o test
./test

```

---

## 26. ft_strlen

Counts and returns the number of characters in a string before the ending `\0` byte. It does not count the `\0` itself.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strlcpy.c -o test
./test

```
------------------------------------------------
## ft_strlen

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Expected: 5 | Actual: 5
Expected: 3 | Actual: 3
Expected: 0 | Actual: 0

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strlen.c -o test
./test

```

---

## 27. ft_strmapi

Applies a function `f` to every character of a string and saves the results in a newly allocated string. Unlike `ft_striteri`, it leaves the original string untouched.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strlen.c -o test
./test

```
-------------------------------------------------------
## ft_strmapi

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Original: hello
Result:   HELLO

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strmapi.c ft_strlen.c -o test
./test

```

---

## 28. ft_strncmp

Compares up to `n` characters of two strings. It returns `0` if they are identical within that limit, or the ASCII difference at the first mismatch.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strmapi.c ft_strlen.c -o test
./test

```
------------------------------------

## ft_strncmp

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Test 1: %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("Test 2: %d\n", ft_strncmp("CAT", "CAR", 3));
	printf("Test 3: %d\n", ft_strncmp("CAT", "DOG", 0));
	printf("Test 4: %d\n", ft_strncmp("ABC", "ABD", 2));
<<<<<<< HEAD
=======

>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
	return (0);
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Test 1: 0
Test 2: 2
Test 3: 0
Test 4: 0

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strncmp.c -o test
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strncmp.c -o test
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
./test

```

<<<<<<< HEAD
---

## 29. ft_strnstr

Searches for the small string `needle` inside `haystack`, checking at most `len` characters. It returns a pointer to the start of the match, or `NULL` if it is not found within `len`.

**Test code:**
=======
------------------------------------------------------
## ft_strnstr

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strnstr("Hello World", "World", 11);
	printf("Test 1: %s\n", result ? result : "NULL");
<<<<<<< HEAD
	result = ft_strnstr("Hello World", "World", 5);
	printf("Test 2: %s\n", result ? result : "NULL");
	result = ft_strnstr("Hello World", "", 5);
	printf("Test 3: %s\n", result ? result : "NULL");
	result = ft_strnstr("Hello World", "Cat", 11);
	printf("Test 4: %s\n", result ? result : "NULL");
=======

	result = ft_strnstr("Hello World", "World", 5);
	printf("Test 2: %s\n", result ? result : "NULL");

	result = ft_strnstr("Hello World", "", 5);
	printf("Test 3: %s\n", result ? result : "NULL");

	result = ft_strnstr("Hello World", "Cat", 11);
	printf("Test 4: %s\n", result ? result : "NULL");

>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
	return (0);
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Test 1: World
Test 2: NULL
Test 3: Hello World
Test 4: NULL

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strnstr.c -o test
./test

```

---

## 30. ft_strrchr

Searches a string for the **last** occurrence of character `c`. It returns a pointer to that final match, or `NULL` if the character does not appear.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strnstr.c -o test
./test

```
--------------------------------------------------------
## ft_strrchr

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*result;

	result = ft_strrchr("banana", 'a');
	printf("Expected: a\n");
	printf("Actual:   %s\n\n", result);
<<<<<<< HEAD
	result = ft_strrchr("banana", 'n');
	printf("Expected: na\n");
	printf("Actual:   %s\n\n", result);
	result = ft_strrchr("banana", 'z');
	printf("Expected: NULL\n");
	printf("Actual:   %s\n", result ? result : "NULL");
=======

	result = ft_strrchr("banana", 'n');
	printf("Expected: na\n");
	printf("Actual:   %s\n\n", result);

	result = ft_strrchr("banana", 'z');
	printf("Expected: NULL\n");
	printf("Actual:   %s\n", result ? result : "NULL");

>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
	return (0);
}

```

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Expected: a
Actual:   a

Expected: na
Actual:   na

Expected: NULL
Actual:   NULL

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strrchr.c -o test
./test

```

---

## 31. ft_strtrim

Removes all characters listed in `set` from both the beginning and the end of string `s1`. It returns a newly allocated copy of the cleaned string.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strrchr.c -o test
./test

```
-------------------------------------------------
## ft_strtrim

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Result: 'Hello 42 Abu Dhabi!'

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_strtrim.c ft_strchr.c ft_strlen.c ft_strlcpy.c -o test
./test

```

---

## 32. ft_substr

Extracts a smaller piece of text from string `s`, starting at index `start` with a maximum length of `len`. The extracted piece is returned in newly allocated memory.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_strtrim.c ft_strchr.c ft_strlen.c ft_strlcpy.c -o test
./test

```
---------------------------------------------------------------
## ft_substr

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Result: '42 Abu Dhabi'

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_substr.c ft_strlen.c ft_strdup.c -o test
./test

```

---

## 33. ft_tolower

Converts an uppercase letter (`'A'` to `'Z'`) into its lowercase version (`'a'` to `'z'`). Non-uppercase characters are returned unchanged.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_substr.c ft_strlen.c ft_strdup.c -o test
./test

```
-----------------------------------------------------------------
## ft_tolower

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Input 'A': a
Input 'Z': z
Input 'm': m
Input '5': 5

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_tolower.c -o test
./test

```

---

## 34. ft_toupper

Converts a lowercase letter (`'a'` to `'z'`) into its uppercase version (`'A'` to `'Z'`). Non-lowercase characters are returned unchanged.

**Test code:**
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_tolower.c -o test
./test

```
--------------------------------------------------

## ft_toupper

Test code:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

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

<<<<<<< HEAD
**Expected output:**
=======
Expected output:
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1

```text
Input 'a': A
Input 'z': Z
Input 'M': M
Input '5': 5

```

<<<<<<< HEAD
**Compile and run:**

```bash
cc -Wall -Wextra -Werror main.c ft_toupper.c -o test
./test

```

---

**Note:** Each compilation command assumes you have a separate `main.c` containing only the corresponding test. Keep `main.c` and the `test` binary out of your 42 submission.
=======
Compile and run:

```bash
cc -Wall -Wextra -Werror ft_toupper.c -o test
./test

```
---------------------------------------------------------
**Note:** These snippets go inside `main()`. Include `libft.h` and the required standard headers in `main.c`. Each compilation command assumes you have a separate `main.c` containing only the corresponding test. Keep `main.c` out of your 42 submission.
>>>>>>> 0c3e89c1a133c5dd16de7879339f974d35e106b1
