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

---

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

---

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

---

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

---

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

--
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

---

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

---

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

---

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

**Note:** These snippets go inside `main()`. Include `libft.h` and the required standard headers in `main.c`. Each compilation command assumes you have a separate `main.c` containing only the corresponding test. Keep `main.c` out of your 42 submission.