/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaska <skaska@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:00:34 by skaska            #+#    #+#             */
/*   Updated: 2023/03/28 21:00:39 by skaska           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir
{
    char letter = 'z'; // letter isimli değişkene z karakterinin atanmasını sağlar

    // C dilinde karakterleri tutmak için kullanılan veri tipidir. 'z' karakteri ise ASCII karakter kodu 122 olan bir karakterdir. 
    // Bu kod, 'a' karakterinin ASCII kodundan (97) 25 birim fazladır. Bu sebeple, 'z' karakteri 'a' karakterinin 25 karakter sonrasında gelir.

    while (letter >= 'a') // Z den a ya gitmesini sağlıyoruz
    {
        write(1, &letter, 1); // 1. standart çıktı yazdırmak için kullanılır 2. c nin adresi gitmesi için okuma işlemi için 3. byte için
        letter--; // letter değişkeninin değerini 1 azaltır. küçük harflerden oluşan bir alfabeyi tersten yazdırır
    }
}

int main() // main tarafı
{
    ft_print_alphabet(); // void ile belirttiğimiz fonkisyonu maine çeker
    return 0; // kodu bitirmek için 0 a döndürüyoruz
}
 
