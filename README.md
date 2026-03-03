_This project has been creaeted as part of the 42 curriculum by **rhrandri**_

# GET NEXT LINE

## Description:
`Get next line` is a foundational project in the **42 school** projects, it requires student
to code a function in C which returns a single line from a file descriptor.

- Prototype: 
```c
    char    *get_next_line(int  fd)
```

- Behavior: When a loop is called, it allows the reader to process a file line by line until the end.

- Constraints: The program reads with the limits of a ***BUFFER_SIZE*** flag, which determines how many bytes are read at once.

## Instruction:
### *Usage:*
Example of a `main.c`
```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"


int    main(argc, **argv)
{
    int        fd;
    char    *line;

    void (argc);
    fd = open(argv[1], O_RDONLY);
    line = "";
    while (line != NULL)
    {
        line = get_next_line(fd);
        printf("%s", line);
        free(line);
    }
    fd = close(fd);
    return (0);
}
```
### Compilation:

```c
gcc main.c get_next_line.c get_next_line_utils.c
```

`BUFFER_SIZE` can be modified to your liking:
```c
gcc -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c
```
### Execution:
```c
./a.out [a file]
```
Output will write the whole content of the given file.
