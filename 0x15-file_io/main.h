#ifndef __MAIN_H__
#define __MAIN_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

void elf_header_check(unsigned char *e_ident);
void elf_header_print_magic(unsigned char *e_ident);
void elf_header_print_class(unsigned char *e_ident);
void elf_header_print_data(unsigned char *e_ident);
void elf_header_print_version(unsigned char *e_ident);
void elf_header_print_abi(unsigned char *e_ident);
void elf_header_print_osabi(unsigned char *e_ident);
void elf_header_print_type(unsigned int e_type, unsigned char *e_ident);
void elf_header_print_entry(unsigned long int e_entry, unsigned char *e_ident);
void elf_header_close(int elf);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
