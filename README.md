*This project has been created as part of the 42 cullicum by tverschu.*

###DESCRIPTION

| Function name | Description | Input | Expected Output |
|:--|:--|:-:|:-:|
|ft_atoi| Converts ASCII to Integer | \*s = "-621" | nb = -621 |
|ft_bzero| Writes '\0' from set pointer | "123456", n = 2 | "12\0\0\0\0" |
|ft_calloc| Malloc to n bytes sizes | nmemb = 3, size = int | 3\*4 pointer |
|ft_isalnum| Is "c" alphanumeric | c = 'a', c = ':' | 1, 0 |
|ft_isalpha| Is "c" alphabetical | c = 'b', c = '2' | 1, 0 |
|ft_isascii| Is "c" in ASCII table | c = 124, c = 254 | 1, 0 |
|ft_isdigit| Is "c" a digit number | c = 'c', c = '6' | 0, 1 |
|ft_isprint| Is "c" a printable | c = '\t', c = ';' | 0, 1 |
|ft_itoa| Converts Integer to ASCII | nb = -1738 | \*s = "-1738" |
|ft_lstadd_back| Adds chained list at end | o-o-o | o-o-o-**o** |
|ft_lstadd_front| Adds chained list at beginning | o-o-o | **o**-o-o-o |
|ft_lstclear| Clears chained list contents | o-o-o | x-x-x |
|ft_lstdelone| Deletes one chained list content | o-o-o-o | o-o-x-o |
|ft_lstiter| Iterate through the chained list | o-o-o-o | 1-2-3-4 |
|ft_lstlast| Finds last list of the chain | o-o-o-o | o-o-o-**i** |
|ft_lstmap| Creates new list from function | o-o-o-o | o-c-p-c |
|ft_lstnew| Creates new list |  | o- |
|ft_lstsize| Returns size of chained list| o-o-o-o | 4 |
|ft_memchr| Searches memory for a char | \*s = "abcde", 'd' | s + 4 |
|ft_memcmp| Compares two memories content | \*s1 = "a12" \*s2 = "a15" | -3 |
|ft_memcpy| Copies memory to new one | \*s1 = "Woof" | \*s2 = "Woof" |
|ft_memmove| Moves memory somewhere else | \*s1 = 5\]\[8 | \*s1 = 2\]\[5 |
|ft_memset| Fills memory with a byte | \*s1 = "---", 'a' | \*s1 = "aaa" |
|ft_putchar_fd| Writes char to file descriptor | "c", 2 | "c" Error output |
|ft_putendl_fd| Writes then jumps line | \*s = "Woof", 1 | "Woof\n" Stdout |
|ft_putnbr_fd| Writes number to file descriptor | "-25", 2 | "-25" Error output |
|ft_putstr_fd| Writes string to file descriptor | "Woof" | "Woof" Error output |
|ft_split| Splits a string with given sep | "I am new" | "I" "am" "new"|
|ft_strchr| Searches string for a char | \*s = "efgh", 'g' | s + 3 |
|ft_strdup| Duplicates string to new memory | \*s1 = "Ouch" | \*s2 = "Ouch" |
|ft_striteri| Iterates function through string | \*s1 = "bla", ft_toupper | \*s1 = "BLA" |
|ft_strjoin| Joins words to single string | "It" "is" "hot" | "It is hot" |
|ft_strlcat| Concatenates then gives total size | \*s1 = "All", \*s2 = "Stars" | \*s1 = "AllStars", 8 |
|ft_strlcpy| Copies up to length size | \*s1 = "Weirdo", 5 | \*s2 = "Weird", 5 |
|ft_strlen| Returns length of string | \*s1 = "Hello" | 5 |
|ft_strmapi| Creates modified string from function | \*s1 = "HELLO", ft_tolower | \*s2 = "hello" |
|ft_strncmp| Compares strings up until n | \*s1 = "hell", \*s2 = "help", 3 | 0 |
|ft_strnstr| Finds string in bigger string | Littlebig, big | 7 |
|ft_strrchr| Searches char in string from end | \*s = "zyxw", 'x' | s + 3 |
|ft_strtrim| Trims a string with given set | "AAAscaryAAA", "A" | "scary" |
|ft_substr| Returns substring from string | "Quick Fox", 7 | "Fox" |
|ft_tolower| Returns lowercase letters | "TOLOWER" | "tolower" |
|ft_toupper| Returns uppercase letters | "toupper | "TOUPPER" |
||||
|**Extra functions** | **Description** | **Input** | **Expected Output** |
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
