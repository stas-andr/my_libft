NAME 		= libft.a
SOLIB		= $(NAME:%.a=%.so)
CC 		= gcc
FLAGS 		= -Wall -Wextra -Werror 
LIBTOOL		= ar rcs
HEADERS 	= libft.h
DIR_HDRS	= ./
SOURCES		= ft_memset.c ft_memcpy.c ft_bzero.c ft_memccpy.c 	\
		  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c	\
		  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c	\
	  	  ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c	\
		  ft_strrchr.c ft_strncmp.c ft_atoi.c ft_strlcpy.c	\
	  	  ft_strlcat.c ft_strdup.c ft_calloc.c ft_strnstr.c	\
		  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c	\
		  ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c	\
		  ft_putendl_fd.c ft_putnbr_fd.c

SOURCES_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c 	\
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c 	\
	  	  ft_lstmap.c	  

OBJS		= $(SOURCES:%.c=%.o)

OBJS_BONUS	= $(SOURCES_BONUS:%.c=%.o)

all:		$(NAME)

so:		$(OBJS) $(OBJS_BONUS)
		$(CC)  -shared -o $(SOLIB) $(OBJS) $(OBJS_BONUS)

$(NAME):	$(OBJS)
	 	$(LIBTOOL) $(NAME) $(OBJS)

bonus:		$(OBJS_BONUS) $(OBJS)
		$(LIBTOOL) $(NAME) $(OBJS) $(OBJS_BONUS)

.c.o:		$(DIR_HDRS) $(HEADERS)	
		$(CC) $(FLAGS) -c $<

clean:			
		rm -f  $(OBJS) $(OBJS_BONUS)

fclean:		clean
		rm -f $(NAME) $(SOLIB) 
	
re:		fclean	all

.PHONY:		all so clean fclean re	
