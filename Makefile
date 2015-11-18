NAME = libft.a

SRC = ft_memccpy.c ft_putnbr.c ft_strequ.c ft_strnequ.c ft_lstdelone.c ft_lstdel.c\
	   ft_memchr.c    ft_putnbr_fd.c  ft_striter.c    ft_strnew.c     ft_lstadd.c\
	   ft_memcmp.c    ft_putstr.c     ft_striteri.c   ft_strnstr.c    ft_lstnew.c\
	   ft_atoi.c      ft_memcpy.c     ft_putstr_fd.c  ft_strjoin.c    ft_strrchr.c\
	   ft_bzero.c     ft_memdel.c     ft_strcat.c     ft_strlcat.c    ft_strstr.c\
	   ft_isalnum.c   ft_memmove.c    ft_strchr.c     ft_strlen.c     ft_strsub.c\
	   ft_isalpha.c   ft_memset.c     ft_strclr.c     ft_strmap.c     ft_strtrim.c\
	   ft_isascii.c   ft_putchar.c    ft_strcmp.c     ft_strmapi.c    ft_tolower.c\
	   ft_isdigit.c   ft_putchar_fd.c ft_strcpy.c     ft_strncat.c    ft_toupper.c\
	   ft_isprint.c   ft_putendl.c    ft_strdel.c     ft_strncmp.c    ft_itoa.c\
	   ft_memalloc.c  ft_putendl_fd.c ft_strdup.c     ft_strncpy.c    ft_lstiter.c\
	   ft_lstmap.c    ft_strsplit.c   ft_sort.c       ft_swap.c       ft_pgcd.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f libft.a

re: fclean all
