/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:24:06 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/02 07:55:38 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftnocheat.h"
#include "do_op.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	void	(*f[6])(int, int);

	f[0] = &add;
	f[1] = &sub;
	f[2] = &mul;
	f[3] = &div;
	f[4] = &mod;
	f[5] = &nul;
	if (argc == 4)
	{
		(f[ft_do_func(argv[2])])(ft_atoi(argv[1]), ft_atoi(argv[3]));
		write(1, "\n", 1);
	}
}

int	ft_do_func(char *str)
{
	if (!ft_strcmp(str, "+"))
		return (0);
	else if (!ft_strcmp(str, "-"))
		return (1);
	else if (!ft_strcmp(str, "*"))
		return (2);
	else if (!ft_strcmp(str, "/"))
		return (3);
	else if (!ft_strcmp(str, "%"))
		return (4);
	else
		return (5);
}

void	nul(int a, int b)
{
	a = b;
	ft_putnbr(0);
}
