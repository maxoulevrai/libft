NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -f

LIBC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

ADDITIONAL =	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
				ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c

BONUS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

SRCS_LIST = $(LIBC) $(ADDITIONAL)
SRCS_LIST_ALL = $(LIBC) $(ADDITIONAL) $(BONUS)

SRCS_DIR = ./
BONUS_DIR = ./bonus/

OBJS = $(SRCS:.c=.o)
OBJSALL = $(SRCSALL:.c=.o)

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_LIST)))
SRCS_ALL = $(addprefix $(SRCS_DIR) $(BONUS_DIR), $(addsuffix .c, $(SRCS_LIST_ALL)))



all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $@ $^

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

# bonus:	fclean ${OBJSALL}
# 		ar -rsc ${LIB} ${OBJSALL}

.PHONY: all clean fclean re bonus