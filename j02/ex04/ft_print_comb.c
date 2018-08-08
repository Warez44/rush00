/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 11:42:46 by clingier          #+#    #+#             */
/*   Updated: 2018/08/08 15:47:22 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char t)
{
	write(1, &t, 1);
}

void	ft_putvirgule(char a, char b, char c)
{
	char v;
	char s;

	v = 44;
	s = 32;
	if (a == 48 && b == 49 && c == 50)
	{
	}
	else
	{
	ft_putchar(v);
	ft_putchar(s);
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = 48;
	while (c < 56)
	{
		d = c + 1;
		while(d < 57)
		{
			u = d + 1;
			while(u < 58)
			{
				ft_putvirgule(c, d, u);
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
				u++;
			}
		d++;
		}
	c++;
	}
}

int	main()
{
	ft_print_comb();	
	return (0);
}
