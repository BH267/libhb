
SRC = hb_isprint.c    hb_putnbr_fd.c  hb_strlen.c hb_atoi.c \
	  hb_itoa.c       hb_putstr_fd.c  hb_strncmp.c hb_bzero.c \
	  hb_memchr.c     hb_split.c      hb_strnstr.c hb_calloc.c \
	  hb_memcpy.c     hb_strchr.c     hb_strrchr.c hb_isalnum.c \
	  hb_memmove.c    hb_strdup.c     hb_substr.c hb_isalpha.c \
	  hb_memset.c     hb_strjoin.c    hb_tolower.c hb_isascii.c \
	  hb_putchar_fd.c hb_strlcat.c    hb_toupper.c hb_isdigit.c \
	  hb_putendl_fd.c hb_strlcpy.c hb_memcmp.c hb_striteri.c \
	  hb_strmapi.c hb_strtrim.c hb_lstadd_back.c hb_lstadd_front.c \
	  hb_lstclear.c hb_lstdelone.c hb_lstiter.c hb_lstlast.c \
	  hb_lstmap.c hb_lstnew.c hb_lstsize.c hb_mtrfree.c hb_mtrcpy.c \
	  hb_mtrlen.c hb_putmtr.c hb_printf.c hb_putuh.c hb_bubble_sort.c \
	  hb_isorted.c hb_cputchar.c hb_cputnbr.c hb_cputuh.c hb_cputstr.c

NAME = libhb.a
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -rf

all :$(NAME)

$(NAME) : $(OBJ)
	@(echo "		█   ███ ██  █ █ ██  " && echo "		█    █  █ █ █ █ █ █ " && echo "		█    █  ██  ███ ██  " && echo "		█    █  █ █ █ █ █ █ " && echo "		███ ███ ██  █ █ ██  " )| lolcat
	@$(AR) $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean 
	@$(RM) $(NAME)

re : fclean all

.PHONY: clean
