#include "hexdump.h"

t_hexdump_file	*alloc_hexdump_file(void)
{
	t_hexdump_file	*hf;

	hf = (t_hexdump_file *)malloc(sizeof(t_hexdump_file));
	hf->prev = (char *)malloc(17);
	hf->buffer = malloc_with_null_init(17);
	hf->duplicated = 0;
	hf->file_len = 0;
	hf->is_printed = 0;
	hf->offset = 0;
	return (hf);
}

void	set_hf_filename(t_hexdump_file *hf, char *filename, char *program)
{
	hf->filename = filename;
	hf->program = program;
}

void	free_hf(t_hexdump_file *hf)
{
	free(hf->prev);
	free(hf->buffer);
	free(hf);
}
