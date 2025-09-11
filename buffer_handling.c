#include "main.h"

void flush_buffer(Buffer* buff)
{
    if(buff->index > 0)
    {
        write(1, buff->buffer, buff->index);
        buff->index = 0;
    }
}

void add_to_buffer(Buffer* buff, const char* str)
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