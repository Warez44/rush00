/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:50:55 by clingier          #+#    #+#             */
/*   Updated: 2018/08/08 20:41:13 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char t)
{
	write(1, &t, 1);
}

void ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while( n1 <= 98){
		n2 = n1 + 1;
		while (n2 <= 99){
			ft_putchar((n1 / 10) + 48);
			ft_putchar((n1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((n2 / 10) + 48);
			ft_putchar((n2 % 10) + 48);
			if (!( n1 == 98 && n2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
	n1++;
	}	
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
