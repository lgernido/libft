This is the first project at 42.

The goal is to code a set a function that will be reused during all of our studies in our own librairy. This library can later be implemented with other functions.

The first set of functions are the same functions from the libc library. 

The second set of functions are not a part of the libc but remain very useful.

Lastly, as bonuses the third set of function focuses on chained lists. 

The files are organized as followed : 
- ft_mem : for all the functions that manipulate memory
- ft_is : for all the functions that check for a specific character type in a string of characters
- ft_str : for all the functions that manipulate strings
- ft_put :for all function that write on the terminal as an output
- ft_lst : for all the functions that manipulate chained lists
- ft_printf : for all the functions necessary to code the printf function
- gnl : for all the functions necessary to code the get_next_line function
- ft_others : for all function that don't fit into those catgories

  Here is a more detailed description of the files of the librairy;

  Ft_mem :
  - ft_memset : Fill the memory with a given byte
  - ft_memcpy : Copy the elements from a memory area to another
  - ft_memmove : Move the elements from a memory area to another
  - ft_memchr : Search a character in a specific memory area
  - ft_memcmp : Compare 2 strings of characters in memory areas

  Ft_is :
  - ft_isalpha : Check if a character is a part of the alphabet
  - ft_isdigit : Check if a character is a digit (from 0 to 9)
  - ft_isalnum : Check if a character is a part the alphabet or a digit
  - ft_isascii : Check if a character is a part of the ASCII table
  - ft_isprint : Check if the character is printable
   
  Ft_str :
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

