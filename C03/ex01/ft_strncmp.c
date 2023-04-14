/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:55:31 by skaska            #+#    #+#             */
/*   Updated: 2023/04/11 14:55:34 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	if (n == 0)
		return (0);
	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a] && a < n - 1)
		a++;
	return (s1[a] - s2[a]);
}