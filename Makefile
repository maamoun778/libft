NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BNS			= ft_lstnew_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c \
			  ft_lstdelone_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
			  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS		= $(SRCS:.c=.o)
OBNS		= $(BNS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBNS)

fclean:		clean
	rm -f $(NAME) libft.so

re:			fclean all

bonus:		$(OBJS) $(OBNS)
	ar rcs $(NAME) $(OBJS) $(OBNS)
	
.PHONY: all clean fclean re bonus
