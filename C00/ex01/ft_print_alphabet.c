/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:46:20 by skaska            #+#    #+#             */
/*   Updated: 2023/03/30 23:46:24 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	letter	;

	letter = 'a' ;
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
