## :desktop_computer: General Information

This is the first project at 42.

The goal is to code a set a function that will be reused during all of our studies in our own librairy. This library can later be implemented with other functions.

The first set of functions are the same functions from the libc library. 

The second set of functions are not a part of the libc but remain very useful.

Lastly, as bonuses the third set of function focuses on chained lists. 

## :pushpin: File Organisation

The directories are organized as follows : 
- ft_mem : for all the functions that manipulate memory
- ft_is : for all the functions that check for a specific character type in a string of characters
- ft_str : for all the functions that manipulate strings
- ft_put :for all function that write on the terminal as an output
- ft_ls : for all the functions that manipulate chained lists
- others : for all function that don't fit into those categories

  ### Here is a more detailed description of the files of the library :

  #### Ft_mem :
  - ft_memset : Fill the memory with a given byte
  - ft_memcpy : Copy the elements from a memory area to another
  - ft_memmove : Move the elements from a memory area to another
  - ft_memchr : Search a character in a specific memory area
  - ft_memcmp : Compare 2 strings of characters in memory areas

  #### Ft_is :
  - ft_isalpha : Check if a character is a part of the alphabet
  - ft_isdigit : Check if a character is a digit (from 0 to 9)
  - ft_isalnum : Check if a character is a part the alphabet or a digit
  - ft_isascii : Check if a character is a part of the ASCII table
  - ft_isprint : Check if the character is printable
   
   #### Ft_str :
  - ft_strlcpy : Copy a string of character into another and returns the lenght of string copied
  - ft_strlcat : Concatenate a string of characters to another and returns de total lenght of the concatenated string
  - ft_strchr : Locate the first iteration of a character in a string of characters
  - ft_strrchr : Locate the last iteration of a character in a string of characters
  - ft_strnstr : Find a substring in a string of characters up to n characters
  - ft_strncmp : Compare 2 strings of characters up to n characters
  - ft_strdup : Duplicate a string of characters and allocate the necessary memory
  - ft_strndup : Duplicate a string of characters up to n characters and allocate the necessary memory
  - ft_strlen : Compute the length of a string of characters
  - ft_strjoin : Allocate and return a string of characters as a result of a concatenation of strings
  - ft_strtrim : Allocate and return a string of characters wihtout a set of given characters at the beginning or the end of the string
  - ft_strmapi : Apply a function to all characters from a string of characters
  - ft_stritetri : Apply a function and allocate the memory for the result of this function on a string of characters

  #### Ft_put :
  - ft_putchar_fd : Writes a character in a file descriptor
  - ft_putstr_fd : Writes a string of character in a file descriptor
  - ft_putendl_fd : Writes a string of characters in a file descriptor followed by a newline
  - ft_putnbr_fd : Writes an integer in a file descriptor
 
  #### Ft_ls :
  - ft_lstnew : Creates a new element of the chained list
  - ft_lstsize : Compute the number of element of a chained list
  - ft_lstlast : Finds the last element of the chained list (the element that points to NULL)
  - ft_lstaddback : Adds a new element at the end of the chained list
  - ft_lstaddfront : Adds a new element at the beginning of the chained list
  - ft_lstdelone : Deletes on element of the chained list
  - ft_lstclear : Deletes all the elements of the chained list and free the previously allocated space
  - ft_lstiteri : Apply a function to all the elements of the chained list
  - ft_lstmap : Apply a function to all the elements of the chained list a create and new chained list with the result
 
  #### Ft_other :
  - ft_atoi : Converts a string input into an integer
  - ft_itoa : Converts an integer input a string
  - ft_tolower : Converts upper case characters into lower case characters
  - ft_toupper : Converts lower case characters into upper case characters
  - ft_bzero : Sets all bytes in a block of memory to zero
  - ft_calloc : Allocates dynamically memory for an array of elements and initializes all bits to zero
  - ft_split : Divides a string into multiple substrings based on a specified delimiter and returns an array of these substring

## :open_file_folder: Installation 

In order to use the library, you can include this folder in your project and don't forget to run the command "make"
for the the libft in your project's Makefile.
Here is an example of how you can include a rule in your Makefile to use the libft in any project. 
Define the following variables :
```
LIBFT_PATH	= libft/
LIBFT		= $(LIBFT_PATH)libft.a
```
Then, when building the .o files, don't forget to include the libft.
```
%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDE_PATH) -I$(LIBFT_PATH) -I/usr/include -c $< -o $@
```
Same goes when building the executable file of your project.
```
$(NAME): $(OBJ_FILES)
	@make -C $(LIBFT_PATH) --no-print-directory -s
	@$(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT) -o $(NAME)
```
Lastly, when building the clean and fclean rule don't forget to include the libft as well !
```
clean :
	@rm -f *.o ${OBJ_FILES}
	@make clean -C $(LIBFT_PATH) --no-print-directory -s

fclean : clean
	@rm -f ${NAME}
	@make fclean -C $(LIBFT_PATH) --no-print-directory -s
```
