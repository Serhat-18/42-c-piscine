/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:59:52 by skaska            #+#    #+#             */
/*   Updated: 2023/03/28 21:00:13 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void ft_putchar(char c) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir
{
	write(1, &c, 1); // 1. standart çıktı yazdırmak için kullanılır 2. c nin adresi gitmesi için okuma işlemi için 3. byte için
}

int main() // main tarafı
{
	ft_putchar('m'); // voidde tanımladığımız değeri mainde çalıştırıyoruz
	return 0; // kodu bitirmek için 0 a döndürüyoruz

}
