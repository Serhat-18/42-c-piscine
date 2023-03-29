/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:00:57 by skaska            #+#    #+#             */
/*   Updated: 2023/03/28 21:01:02 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void    ft_print_reverse_alphabet(void) 
{

char letter = 'z'; 

while (letter >= 'a') 

{
write(1, &letter, 1); 
letter--; 
}


}

