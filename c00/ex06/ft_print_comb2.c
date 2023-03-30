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

void	ft_putchar(char c) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir
{
	write (1, &c, 1); // ilk kısım terminal ekranına standart biçimde yazmasını sağlar ikinci kısım char c fonksiyonunu çeker en sondaki ise byte belirtir
}

void	ft_write_comb(int a, int b, bool last) // ft_write_comb fonksiyonunu belirtir 3 farklı parametre alır a,b,last adında bir boolen (mantıksal) değer  olarak 
{
	ft_putchar(48 + a / 10); // İlk önce, "a" tamsayısının onlar basamağındaki rakamı elde etmek için "a / 10" ifadesi kullanılır ve bunun sonucu 48 ile toplanarak ASCII koduna dönüştürülür.
	ft_putchar(48 + a % 10); // "a" tamsayısının birler basamağındaki rakamı elde etmek için "a % 10" ifadesi kullanılır ve aynı şekilde 48 ile toplanarak ASCII koduna dönüştürülür
	ft_putchar(' '); // bir boşluk karakteri ekrana yazdırılır 
	ft_putchar(48 + b / 10); // "b" tamsayısının onlar basamağındaki rakamı elde etmek için "b / 10" ifadesi kullanılır ve bunun sonucu 48 ile toplanarak ASCII koduna dönüştürülür.
	ft_putchar(48 + b % 10); // "b" tamsayısının birler basamağındaki rakamı elde etmek için "b % 10" ifadesi kullanılır ve aynı şekilde 48 ile toplanarak ASCII koduna dönüştürülür
	if (last) // Eğer "last" parametresi true ise, bir virgül ve bir boşluk karakteri ekrana yazdırılır.
	{
		ft_putchar(','); // bir virgül koyar
		ft_putchar(' '); // bir boşluk koyar
	}
}

void	ft_print_comb2(void) // ft_write_comb2 fonksiyonunu belirtir 
{
	int	a;
	int	b;
	bool last;

	a = 0; // a 0 olarak tanımlanır
	while(a <= 99) // a 99 a eşit olana kadar devam eder
	{
		b = a + 1; // b = 0 + 1 yani 1 olarak alınır
		while (b <= 99) // b 99 a eşit olana kadar devam eder
		{
			last = !(a == 98 && b == 99); //"last" boolen (mantıksal) değerinin hesaplanmasını sağlar. "last" değeri, son kombinasyonun hesaplanıp hesaplanmadığını belirler.
			ft_write_comb(a, b, last); // "ft_write_comb" fonksiyonunu çağırmak için kullanılır. Bu fonksiyon, "a" ve "b" tamsayılarından oluşan bir kombinasyonu ekrana yazdırır.
			b++; // b yi bir arttırır
		}
		a++; // a yı bir arttırır
	}
}

 int main () // main tarafı
{
	ft_print_comb2(); // Fonksiyonu maine çekelim
	return 0; // kodu 0 a döndürüp bitirelim
}  

/*

UPDATED
*/
