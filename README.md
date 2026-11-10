*This project has been created as part of the 42 cullicum by tverschu.*

###DESCRIPTION

| Function name | Description | Input | Expected Output |
|:--|:--|:-:|:-:|
|ft_atoi| Converts ASCII to Integer | s\* = "-621" | nb = -621 |
|ft_bzero| Writes '\0' from set pointer | "123456", n = 2 | "12\0\0\0\0" |
|ft_calloc| Malloc to n bytes sizes | nmemb = 3, size = int | 3\*4 pointer |
|ft_isalnum| Is "c" alphanumeric | c = 'a', c = ':' | 1, 0 |
|ft_isalpha| Is "c" alphabetical | c = 'b', c = '2' | 1, 0 |
|ft_isascii| Is "c" in ASCII table | c = 124, c = 254 | 1, 0 |
|ft_isdigit| Is "c" a digit number | c = 'c', c = '6' | 0, 1 |
|ft_isprint| Is "c" a printable | c = '\t', c = ';' | 0, 1 |
|ft_itoa| Converts Integer to ASCII | nb = -1738 | s\* = "-1738" |
|ft_lstadd_back| Adds chained list at end | o-o-o | o-o-o-**o** |
|ft_lstadd_front| Adds chained list at beginning | o-o-o | **o**-o-o-o |
|ft_lstclear| Clears chained list contents | o-o-o | x-x-x |
|ft_lstdelone| Deletes one chained list content | o-o-o-o | o-o-x-o |
|ft_lstiter| Iterate through the chained list | o-o-o-o | 1-2-3-4 |
|ft_lstlast| Finds last list of the chain | o-o-o-o | o-o-o-**i** |
|ft_lstmap| Creates new list from function | o-o-o-o | o-c-p-c |
|ft_lstnew| Creates new list |  | o- |
|ft_lstsize| Returns size of chained list| o-o-o-o | 4 |
|ft_memchr| Searches memory for a char | s\* = "abcde", 'd' | s + 4 |
||||
|**Extra functions | Description | Input | Expected Output** |
|ft_isspace| Is "c" a Whitespace | c = '\n', c = '#' | 1, 0 |

###INSTRUCTIONS

###RESOURCES

All functions with MAN.

How to make a Makefile:
https://dev.to/ashcript/comprendre-le-makefile-exemple-avec-le-langage-c-47n9

Discovery of the errno library:
https://man7.org/linux/man-pages/man3/errno.3.html
https://www.chromium.org/chromium-os/developer-library/reference/linux-constants/errnos/

Discovery of unsigned char:
https://www.geeksforgeeks.org/c/unsigned-char-in-c-with-examples/

Discovery of SIZE_MAX:
https://stackoverflow.com/questions/22514803/maximum-size-of-size-t

How to make Tables on Markdown:
https://www.codecademy.com/resources/docs/markdown/tables

You need to add:
ft_strtok.c
