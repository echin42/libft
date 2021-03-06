# Libft

The very first project of the 42 cursus: building our own C library.
The functions can then be used in other projects.

`Library` `Makefile` `Linked List`

## :sunny: List of functions

1. Mandatory Part
    - ***memory*** : 
    [`memset`](./ft_memset.c) [`bzero`](./ft_bzero.c) [`memcpy`](./ft_memcpy.c) [`memccpy`](./ft_memccpy.c) [`memmove`](./ft_memmove.c) [`memchr`](./ft_memchr.c) [`memcmp`](./ft_memcmp.c) [`calloc`](./ft_calloc.c)
    - ***string (lib)*** :
    [`strlen`](./ft_strlen.c) [`strlcpy`](./ft_strlcpy.c) [`strlcat`](./ft_strlcat.c) [`strchr`](./ft_strchr.c) [`strrchr`](./ft_strrchr.c) [`strnstr`](./ft_strnstr.c) [`strncmp`](./ft_strncmp.c) [`atoi`](./ft_atoi.c) [`strdup`](./ft_strdup.c)
    - ***is_sth, to_sth*** : 
    [`isalpha`](./ft_isalpha.c) [`isdigit`](./ft_isdigit.c) [`isalnum`](./ft_isalnum.c) [`isascii`](./ft_isascii.c) [`isprint`](./ft_isprint.c) [`toupper`](./ft_toupper.c) [`tolower`](./ft_tolower.c)
    - ***string (non-lib)*** : 
    [`ft_substr`](./ft_substr.c) [`ft_strjoin`](./ft_strjoin.c) [`ft_strtrim`](./ft_strtrim.c) [`ft_split`](./ft_split.c) [`ft_itoa`](./ft_itoa.c) [`ft_strmapi`](./ft_strmapi.c)
    - ***put_fd*** : 
    [`ft_putchar_fd`](./ft_putchar_fd.c) [`ft_putstr_fd`](./ft_putstr_fd.c) [`ft_putendl_fd`](./ft_putendl_fd.c) [`ft_putnbr_fd`](./ft_putnbr_fd.c)

2. Bonus Part
    - ***linked_list*** :
    [`ft_lstnew`](./ft_lstnew.c) [`ft_lstadd_front`](./ft_lstadd_front.c) [`ft_lstsize`](./ft_lstsize.c) [`ft_lstlast`](./ft_lstlast.c) [`ft_lstadd_back`](./ft_lstadd_back.c) [`ft_lstdelone`](./ft_lstdelone.c) [`ft_lstclear`](./ft_lstclear.c) [`ft_lstiter`](./ft_lstiter.c) [`ft_lstmap`](./ft_lstmap.c)

## :sunny: Testers
- __Libftest__ by [_jtoty_](https://github.com/jtoty/Libftest)
    ```
    git clone https://github.com/jtoty/Libftest.git
    ```
- __libft-unit-test__ by [_alelievr_](https://github.com/alelievr/libft-unit-test)
    ```
    git clone https://github.com/alelievr/libft-unit-test.git
    ```
- __libft-war-machine__ by [_ska42_](https://github.com/ska42/libft-war-machine)
    ```
    git clone https://github.com/ska42/libft-war-machine.git
    ```
## :sunny: Evaluation log
1. 78%	KO [21/01/17]
2. 115%	OK [21/01/19]
	- Mandatory 100 + Bonus 15
