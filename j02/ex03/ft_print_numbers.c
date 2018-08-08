/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 11:39:48 by clingier          #+#    #+#             */
/*   Updated: 2018/08/08 11:39:50 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet (void)
{
	char i;

	i = 48;
	while( i < 58)
	{
		ft_putchar(i);
		i = i + 1;
	}	
}

int 	main(void)
{
	ft_print_alphabet();
}
