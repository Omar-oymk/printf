#include "main.h"

/**
 * flush_buffer - Writes the contents of the buffer to standard output.
 * @buff: Pointer to the Buffer structure.
 *
 * Description:
 * If the buffer contains any characters, this function writes them to
 * standard output using the write system call. After flushing, the
 * buffer index is reset to zero. If the buffer is empty, nothing is done.
 *
 * Return: Nothing.
 */
void flush_buffer(Buffer* buff)
{
    if(buff->index > 0)
    {
        write(1, buff->buffer, buff->index);
        buff->index = 0;
    }
}

/**
 * add_to_buffer - Adds a string to the buffer, flushing when necessary.
 * @buff: Pointer to the Buffer structure.
 * @str: Pointer to the null-terminated string to add.
 *
 * Description:
 * This function copies the characters of @str into the buffer. If the
 * string is larger than or equal to the buffer size, the current buffer
 * is flushed, and the string is written directly to standard output
 * (bypassing the buffer). If adding the string would overflow the buffer,
 * the buffer is flushed before copying. The buffer index is updated
 * accordingly.
 *
 * Return: Nothing.
 */
void add_to_buffer(Buffer* buff, char* str)
{
    int len_str = _strlen(str);
    int i = 0;

    if(len_str >= BUFFER_SIZE)
    {
        flush_buffer(buff);
        write(1, str, len_str);
        return;
    }
    if (buff->index + len_str > BUFFER_SIZE)
    {
        flush_buffer(buff);
    }

    for (i = 0; i < len_str; i++)
    {
        buff->buffer[buff->index] = str[i];
        buff->index++;
    }
}

/**
 * add_to_buffer_char - Adds a single character to the buffer.
 * @buff: Pointer to the Buffer structure.
 * @c: The character to add.
 *
 * Description:
 * This function appends one character to the buffer. If the buffer is
 * full (i.e., cannot accommodate the character), it is flushed before
 * appending. The buffer index is updated accordingly.
 *
 * Return: Nothing.
 */
void add_to_buffer_char(Buffer* buff, char c)
{
    if (buff->index + 1 > BUFFER_SIZE)
    {
        flush_buffer(buff);
    }

    buff->buffer[buff->index] = c;
    buff->index++;
}