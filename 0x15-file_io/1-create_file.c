#include "main.h"
/**
 * create_file -creates array of chars then initializes
 *
 * @text_content: NULL terminated string to write to the file
 * @filename: Name of file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
	
	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	
	if (o == -1 || w == -1)
		return (-1);
	
	close(o);
	
	return (1);
}
