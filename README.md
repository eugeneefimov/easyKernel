# easyKernel

Компиляция по команде make

Кроме строки с функцией open все работает, без нее запускал - работает

Взят код из https://habr.com/ru/post/343828/

Ошибка такая: error: implicit declaration of function ‘open’ [-Werror=implicit-function-declaration]

Не помогает: 1. Включение #include <fcntl.h> 
             2. Включение #include <linux/fcntl.h>


