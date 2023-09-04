#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header_info - Print information from the ELF header
 * @ehdr: Pointer to the ELF header structure
 */

void print_elf_header_info(Elf64_Ehdr *ehdr)
{
	printf("Magic\n");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ehdr->e_ident[i]);
		if (i < EI_NIDENT - 1)
		printf(" ");
	}

	printf("\n");

	printf("Class\n");

	if (ehdr->e_ident[EI_CLASS] == ELFCLASS32)
	printf("ELF32\n");
	else if (ehdr->e_ident[EI_CLASS] == ELFCLASS64)
	printf("ELF64\n");

	printf("Data\n");
	if (ehdr->e_ident[EI_DATA] == ELFDATA2LSB)
	printf("2's complement, little endian\n");
	else if (ehdr->e_ident[EI_DATA] == ELFDATA2MSB)
	printf("2's complement, big endian\n");

	printf("Version\n");
	printf("%d (current)\n", ehdr->e_ident[EI_VERSION]);

	printf("OS/ABI\n");
	if (ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV)
	printf("UNIX - System V\n");
	else
	printf("Unknown\n");

	printf("ABI Version\n");
	printf("%d\n", ehdr->e_ident[EI_ABIVERSION]);

	printf("Type\n");
	if (ehdr->e_type == ET_EXEC)
	printf("EXEC (Executable file)\n");
	else
	printf("Unknown\n");

	printf("Entry point address\n");
	printf("0x%lx\n", ehdr->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd;
	Elf64_Ehdr ehdr;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file '%s'\n", argv[1]);
		exit(98);
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
	dprintf(STDERR_FILENO, "Error: Can't read ELF header from file '%s'\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: '%s' is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header_info(&ehdr);

	close(fd);
	return (0);
}

