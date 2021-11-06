
NAME		=	libft.a

SRC			=	ft_strlen.c ft_strlcat.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
				ft_isprint.c ft_isascii.c ft_isalnum.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strdup.c \
				ft_atoi.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c \
				ft_memcmp.c ft_memccpy.c ft_memchr.c ft_memmove.c ft_calloc.c \
				ft_strjoin.c ft_itoa.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_substr.c ft_strtrim.c ft_putendl_fd.c ft_strmapi.c ft_split.c \

SRC_B		=	ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstiter.c \
				ft_lstlast.c ft_lstsize.c ft_lstdelone.c ft_lstmap.c \

OBJ			=	$(patsubst %.c,%.o,$(SRC))
OBJ_B		=	$(patsubst %.c,%.o,$(SRC_B))

D_FILES		=	$(patsubst %.c,%.d,$(SRC)$(SRC_B))

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus:
	make OBJ="$(OBJ_B)" all

clean:
	rm -f $(OBJ) $(OBJ_B) $(D_FILES)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus
