#include <unistd.h>
void	ft_print_comb(void) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir
{

    // bu kısımda void aksine int kullanıyoruz int = fonksiyonun herhangi bir değer döndürdüğünü belirtir 
	int	a;
	int	b;
	int	c;

	a = '0'; // a değerinin karşılığı 0 dır tırnak içersinde olmasaydı ascıı karşılığı alınacaktı  
	while (a <= '7') // bu while döngüsü şunu belirtir a değişkeni 7 karakterinden küçük veya eşit olduğu sürece devam eder. 
	{
		b = a + 1; // b yi tanımlar b nin tanımı burada a değişkenine 1 eklenmiş halidir örn a 0 ise b 1 e eşit olur
		while (b <= '8') // bu while döngüsü şunu belirtir b değişkeni 8 karakterinden küçük veya eşit olduğu sürece devam eder. 
		{
			c = b + 1; // c yi tanımlar c nin tanımı burada b değişkenine 1 eklenmiş halidir örn b 1 e eşit ise c 2 ye eişt olacaktır
			
			while (c <= '9') // bu while döngüsü şunu belirtir c değişkeni 9 karakterinden küçük veya eşit olduğu sürece devam eder. 
			{
				write (1, &a, 1); // a yı consol a yazdırır
				write (1, &b, 1); // b yi consol a yazdırır
				write (1, &c, 1); // c yi consol a yazdırır
				if (a != '7') // a değişkeninin 7 ye eşit olup olmadığını kontrol eder
					write (1, ", ", 2); // eğer a 7 ye eşit değil ise konsola ", "  iki karakter içerdiğinden, ikinci parametre olarak 2 değeri verilmiştir.
				c++; //c değişkeni, döngü içinde kullanılan bir sayaçtır ve her döngü turunda bir artırılır.  döngü tamamlandığında kaç tane karakterin yazıldığını belirlemek için kullanılabilir.
			}
			
			b++; //b değişkeni, döngü içinde kullanılan bir sayaçtır ve her döngü turunda bir artırılır.  döngü tamamlandığında kaç tane karakterin yazıldığını belirlemek için kullanılabilir.
		}
		a++; //a değişkeni, döngü içinde kullanılan bir sayaçtır ve her döngü turunda bir artırılır.  döngü tamamlandığında kaç tane karakterin yazıldığını belirlemek için kullanılabilir.
	}
}	


int	main() // main tarafı
{
	ft_print_comb(); // fonksiyonu çekiyoruz 

	return(0); 0 // 0 a döndürerek kodu bitirelim
}
