# Printf Function

This is a custom implementation of the `printf` function in C. The `printf` function is used to print formatted output to the standard output stream. This implementation provides similar functionality to the standard `printf` function in the C library.

## Usage

To use this `printf` function, follow these steps:

1. Include the necessary header files:
```c
#include <limits.h>
#include <stdio.h>
#include "main.h"
```

2. Write your program's `main` function and call the `_printf` function to print the desired output. For example:
```c
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    // More printf statements...

    return (0);
}
```

3. Compile and run your program. Make sure to link the `main.h` header file.
```bash
gcc -o program main.c main.h
./program
```

## Functionality

This implementation of `printf` supports the following format specifiers:

- `%d` or `%i` - for printing integers.
- `%c` - for printing characters.
- `%s` - for printing strings.
- `%%` - for printing a literal percent sign.

It also supports the following modifiers:

- `-` - for left-aligning the output.
- `0` - for zero-padding the output.

## Examples

Here are some examples of how to use the custom `_printf` function:

```c
_printf("Length:[%d, %i]\n", len, len);
```

```c
_printf("Negative:[%d]\n", -762534);
```

```c
_printf("Character:[%c]\n", 'H');
```

```c
_printf("String:[%s]\n", "I am a string !");
```

```c
_printf("Percent:[%%]\n");
```

## Note

Please note that this implementation might have limitations or differences compared to the standard `printf` function in the C library. It is intended as a learning exercise and may not be suitable for all production use cases.

If you encounter any issues or have any questions, please feel free to contact us.

Enjoy using our custom `printf` function!
