/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftnocheat.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:24:37 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 12:24:40 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTNOCHEAT_H
# define LIBFTNOCHEAT_H

void	ft_swap(int *a, int *b);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
int		ft_recursive_power(int nb, int power);
int		ft_recursive_factorial(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

#endif
