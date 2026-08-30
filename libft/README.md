# libft
*This project has been created as part of the 42 curriculum by yeliew.*

## Description
### Libft

Libft is the first project of the 42 curriculum. The goal of this project is to create a personal C library by reimplementing functions from the standard C library, as well as creating additional utility functions that will be useful in future projects.

Through this project, I learned and practiced important C programming concepts such as memory management, pointers, string manipulation, structures, dynamic allocation, and linked lists.

The final result is a reusable static library (`libft.a`) that can be included in future C projects.

### library
The library is divided into several categories:

## Character Functions

These functions are used to check and convert characters.

- `ft_isalpha`  
  Checks whether a character is an alphabetic character.

- `ft_isdigit`  
  Checks whether a character is a digit.

- `ft_isalnum`  
  Checks whether a character is either alphabetic or numeric.

- `ft_isascii`  
  Checks whether a character belongs to the ASCII character set.

- `ft_isprint`  
  Checks whether a character is printable.

- `ft_toupper`  
  Converts a lowercase character into uppercase.

- `ft_tolower`  
  Converts an uppercase character into lowercase.


## String Functions

These functions handle string manipulation and processing.

- `ft_strlen`  
  Calculates the length of a string.

- `ft_strchr`  
  Searches for the first occurrence of a character in a string.

- `ft_strrchr`  
  Searches for the last occurrence of a character in a string.

- `ft_strncmp`  
  Compares two strings up to a specified number of characters.

- `ft_strnstr`  
  Searches for a substring inside another string.

- `ft_strlcpy`  
  Copies a string safely into another buffer.

- `ft_strlcat`  
  Concatenates strings while preventing buffer overflow.

- `ft_strdup`  
  Creates a duplicated copy of a string.

- `ft_substr`  
  Creates a substring from a given string.

- `ft_strjoin`  
  Joins two strings into a newly allocated string.

- `ft_strtrim`  
  Removes specified characters from the beginning and end of a string.

- `ft_split`  
  Splits a string into an array of strings using a delimiter.

- `ft_strmapi`  
  Creates a new string by applying a function to each character with its index.

- `ft_striteri`  
  Applies a function to each character of an existing string.


## Memory Functions

These functions provide memory manipulation and allocation utilities.

- `ft_memset`  
  Fills a block of memory with a specified value.

- `ft_bzero`  
  Sets a block of memory to zero.

- `ft_memcpy`  
  Copies memory from one location to another.

- `ft_memmove`  
  Copies memory safely when source and destination overlap.

- `ft_memchr`  
  Searches for a byte value inside a memory block.

- `ft_memcmp`  
  Compares two memory areas.

- `ft_calloc`  
  Allocates memory and initializes it to zero.


## Conversion Functions

These functions handle conversion between numbers and strings.

- `ft_atoi`  
  Converts a string into an integer.

- `ft_itoa`  
  Converts an integer into a string.


## File Descriptor Functions

These functions provide output operations using file descriptors.

- `ft_putchar_fd`  
  Writes a character to a specified file descriptor.

- `ft_putstr_fd`  
  Writes a string to a specified file descriptor.

- `ft_putendl_fd`  
  Writes a string followed by a newline.

- `ft_putnbr_fd`  
  Writes an integer to a specified file descriptor.


## Linked List Functions

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```
Each linked list node contains:

- content: Stores the data contained in the node. Using void * allows the node to store different types of data.
- next: Stores the address of the next node in the list. The last node points to NULL.

The implemented linked list functions are:

- `ft_lstnew`
Creates a new linked list node.
- `ft_lstadd_front`
Adds a new node at the beginning of a list.
- `ft_lstsize`
Counts the number of nodes in a list.
- `ft_lstlast`
Returns the last node of a list.
- `ft_lstadd_back`
Adds a new node at the end of a list.
- `ft_lstdelone`
Deletes a single node and frees its content using a provided delete function.
- `ft_lstclear`
Deletes and frees an entire linked list.
- `ft_lstiter`
Applies a function to every node's content.
- `ft_lstmap`
Creates a new list by applying a function to each node's content.

# Instructions
libft.a will create a static library that is compiled by running make (via the MAKEFILE).

To remove object files (make clean).

To remove object file AND library (make fclean).

To recompile (make re).

To test the files simply create a test.c and compile them together.
{cc test.c libft.a}

# Resources
- Man page
- Mostly asking peers for help

## AI Usage

AI was used for:
- Understanding fundamental C concepts such as pointers, memory allocation, structures, and linked lists.
- Explaining the behavior and expected implementation logic of standard C library functions.
- Debugging compilation errors and understanding error messages from the compiler.
- Reviewing implementations and helping identify possible logical errors.
- Learning and understanding linked list operations, including node creation, insertion, deletion, iteration, and mapping.
