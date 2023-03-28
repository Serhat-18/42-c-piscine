#include <unistd.h>

void	ft_is_negative(int n) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir


{
	if (n >= 0) // n değeri 0 dan büyük ise yani pozitif ise eğer 
		write (1, &"P", 1); // Consola p yazdır
	else // eğer 0 dan küçük ise yani negatif ise
		write (1, &"N", 1); // Consola N yazdır
}


int main() // main tarafı
{

ft_is_negative(1); // void ile belirttiğimiz fonkisyonu maine çeker (bu alana pozitif veya negatif bir sayı yazarak deneyebilirsiniz)

return 0; // kodu bitirmek için 0 a döndürüyoruz
}
