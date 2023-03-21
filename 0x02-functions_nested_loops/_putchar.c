 #include <unistd.h>


/**
* _putchar -writes the character c to stdout
* @C: The charactert to print
* Return: On successs 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
       return (write(1, &c, 1));
}
