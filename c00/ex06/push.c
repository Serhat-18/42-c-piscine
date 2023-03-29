/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:02:01 by skaska            #+#    #+#             */
/*   Updated: 2023/03/28 21:02:05 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c) 
{
	write (1, &c, 1); 
}

void	ft_write_comb(int a, int b, bool last) 
{
	ft_putchar(48 + a / 10); 
	ft_putchar(48 + a % 10); 
	ft_putchar(' '); 
	ft_putchar(48 + b / 10); 
	ft_putchar(48 + b % 10);
	if (last) 
	{
		ft_putchar(','); 
		ft_putchar(' '); 
	}
}

void	ft_print_comb2(void) 
{
	int	a;
	int	b;
	bool last;

	a = 0;
	while(a <= 99) 
	{
		b = a + 1; 
		while (b <= 99) 
		{
			last = !(a == 98 && b == 99); 
			ft_write_comb(a, b, last); 
			b++; 
		}
		a++; 
	}
}

