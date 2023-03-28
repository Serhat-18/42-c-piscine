#include <unistd.h>


void    ft_print_numbers(void) // Void = fonksiyonun herhangi bir değer döndürmediğini belirtir
{

char number = '9'; // letter isimli değişkene 9 karakterinin atanmasını sağlar

while (number >= '1') // 9 dan 1 e kadar saymasını sağlar

{
write(1, &number, 1); // 1. standart çıktı yazdırmak için kullanılır 2. c nin adresi gitmesi için okuma işlemi için 3. byte için
number--; // number değişkeninin değerini 1 azaltır. 9 dan geriye saymasını sağlar
}


}

int main() // main tarafı
{

ft_print_numbers(); // void ile belirttiğimiz fonkisyonu maine çeker

return 0; // kodu bitirmek için 0 a döndürüyoruz
}



