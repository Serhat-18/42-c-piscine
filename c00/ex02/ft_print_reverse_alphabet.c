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


void    ft_print_reverse_alphabet(void) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir
{

char letter = 'z'; // letter isimli değişkene z karakterinin atanmasını sağlar

while (letter >= 'a') // z den a ya kadar saymasını sağlar

{
write(1, &letter, 1); // 1. standart çıktı yazdırmak için kullanılır 2. c nin adresi gitmesi için okuma işlemi için 3. byte için
letter--; // letter değişkeninin değerini 1 azaltır. z den geriye saymasını sağlar
}


}

int main() // main tarafı
{

ft_print_reverse_alphabet(); // void ile belirttiğimiz fonkisyonu maine çeker

return 0; // kodu bitirmek için 0 a döndürüyoruz
}
