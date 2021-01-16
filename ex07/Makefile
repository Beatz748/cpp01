SRCS		= main.cpp

DIR_OBJS		= ./obj/

DIR_SRCS	=	./

OBJS		=	$(SRCS:%.cpp=$(DIR_OBJS)%.o)

CC			= clang++ -g

CC_FLAGS	=  -std=c++98

NAME		= replace

RM			= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
				@echo "\x1b[1m\x1b[34mSTARTING COMPILE\x1b[0m"
				@$(CC) $(CC_FLAGS) $(OBJS) -o $(NAME)
				@echo "\x1b[1m\x1b[32mEND OF COMPILE\x1b[0m ✅"

$(OBJS):		| $(DIR_OBJS)

$(DIR_OBJS)%.o: %.cpp
				@$(CC) $(CC_FLAGS) -c $< -o $@
				@echo "\x1b[36mcompiling --> $< \x1b[0m"

$(DIR_OBJS):
				@mkdir $(DIR_OBJS)

clean:
				@$(RM) $(DIR_OBJS)
				@echo "\x1b[31m$(DIR_OBJS) deleted\x1b[0m"

fclean:			clean
				@$(RM) $(NAME)
				@echo "\x1b[31m$(NAME) deleted\x1b[0m"

re:				fclean all