/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:06:51 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 15:27:19 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H //#ifndef HEADER_H: checks if the symbol HEADER_H is undefined
# define LIBFT_H //If HEADER_H is not defined, it defines it here.

# include <stdio.h> //actual content of the header file goes here.
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//<ctype.h> Functions
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//<string.h> Functions
void	ft_bzero(void *str, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int find);
char	*ft_strrchr(const char *str, int find);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

//<stdlib.h> Functions
int		ft_atoi(const char *str);
void	*ft_calloc(size_t num_elements, size_t element_size);

//Additional Functions that are non-standard
char	*ft_itoa(int n);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

//bonus functions
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

//gnl
char	*get_next_line(int fd);

//printf
int		ft_check_types(va_list *args, const char format);
int		ft_printf(const char *format, ...);

//ft_write_args.c
int		ft_print_char(va_list *args);
int		ft_print_string(va_list *args);
int		ft_print_pointer(va_list *args);

//ft_write_argsnum.c
int		ft_print_num(va_list *args);
int		ft_print_unsignednum(va_list *args);
int		ft_print_hexa(char var, va_list *args);

//ft_libf.c
int		ft_putchar_p(char c);
int		ft_putstr_p(char *s);
int		ft_putnbr_p(int n);
int		ft_puthexa_p(unsigned long nb, char var);

#endif
