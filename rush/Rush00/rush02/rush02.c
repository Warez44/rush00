/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 00:04:46 by clingier          #+#    #+#             */
/*   Updated: 2018/08/12 09:14:25 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

void	ft_putchar(char t);

void	ft_putline(int x, char c1, char c2, char c3)
{
	int i;

	i = 1;
	ft_putchar(c1);
	while (i <= (x - 2))
	{
		ft_putchar(c2);
		i++;
	}
	if (x != 1 && x != 0)
		ft_putchar(c3);
	ft_putchar('\n');
}

void	ft_putcol(int x, int y, char c1, char c2)
{
	int i;
	int j;

	j = 0;
	while (j < y - 2)
	{
		i = 0;
		ft_putchar(c1);
		while (i < (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
		{
			ft_putchar(c2);
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x < 0 || y < 0)
		return ;
	j = 0;
	i = 0;
	ft_putline(x, 'A', 'B', 'A');
	ft_putcol(x, y, 'B', 'B');
	if (y > 1)
		ft_putline(x, 'C', 'B', 'C');
}
