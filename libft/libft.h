/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 03:54:18 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/22 03:55:09 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);
int		ft_strcmp(const char *s1, char *s2);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlen(const char *str);
void	*ft_memalloc(size_t size);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_memccpy(void *dest, const void *source, int c, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_memdel(void **a);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strcat(char *str1, const char *str2);
char	*ft_strcpy(char *dest, const char *source);
char	*ft_strncat(char *str1, const char *str2, size_t n);
char	*ft_strncpy(char *dest, const char *source, size_t n);
void	*ft_memmove(void *cpy, const void *source, size_t n);
int		ft_memcmp(void *arr1, void *arr2, size_t n);
void	*ft_memcpy(void *cpy, const void *source, size_t n);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
int		ft_nospaces(const char *s);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
size_t	ft_strlcat(char *s1, const char *s2, size_t size);

#endif
