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
#include <stdlib.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
    int     fd;
    char    *line;

    if (argc < 2)
        return (1);

    fd = open(argv[1], O_RDONLY);

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
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
With a file:
```c
./a.out [a file]
```
With input:
```c
./a.out "whatever you put here"
```
Output will write the whole content of the given file, or print the input when pressing enter (use Ctrl + D to stop the program.

### Algorithm:
Read the given file, assign the first read words to buffer and send it to stash and free the buffer, search for a new line in the stocked stash, if its found then we return the line, in case not, we send the contained stash into a temporary buffer we free the stash, re-read the file and assign to buffer again but this time we put the stocked temporary buffer first into stash then we continue with the read buffer.
All error are handled, some may not but will discover in case so.

## Resources:

- Most of the research were done on Google Search Engine, apart, some other 42 students share their work on github for newcomers to get some knowledge and inspiration. Youtube tutorials were necessary in the use of static variables.

- AI usage : As we all know, AI could just do all the work for us, but in this case it didn't, it was used only on syntax fixes, no blatant code at all. Syntax errors were a pain to repair manually, debugging also take so much time which I clearly don't have enough, so in that case i had to use some tools i had in hand.
