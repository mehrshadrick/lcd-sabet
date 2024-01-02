
#include <io.h>
#include <alcd.h>
#include <delay.h>

void main(void)
{
lcd_init(16);

while (1)
    {
    lcd_gotoxy(5,1);
    lcd_putsf("hello");
    delay_ms(600);
    lcd_clear();




    }
}
