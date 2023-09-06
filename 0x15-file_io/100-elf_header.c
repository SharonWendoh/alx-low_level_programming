#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * check_elf - check if it is an elf file.
 *
 * @header: magic.
 *
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *header)
{
	int addr = (int)header[0];
	char E = header[1];
	char L = header[2];
	char F = header[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * print_magic_info - prints magic info.
 *
 * @header: magic.
 *
 * Return: no return.
 */
void print_magic_info(char *header)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", header[bytes]);

	printf("\n");

}
/**
 * print_data_encoding - prints data
 *
 * @header: magic.
 *
 * Return: no return.
 */
void print_data_encoding(char *header)
{
	char data = header[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}
/**
 * print_version - prints version
 *
 * @header: magic.
 *
 * Return: no return.
 */
void print_version(char *header)
{
	int version = header[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_os_abi - prints os/abi
 *
 * @header: magic.
 *
 * Return: no return.
 */
void print_os_abi(char *header)
{
	char os_abi = header[7];

	printf("  OS/ABI:                            ");
	if (os_abi == 0)
		printf("UNIX - System V\n");
	else if (os_abi == 2)
		printf("UNIX - NetBSD\n");
	else if (os_abi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os_abi);

	printf("  ABI Version:                       %d\n", header[8]);
}
/**
 * print_file_type - prints type
 *
 * @header: magic.
 *
 * Return: no return.
 */
void print_file_type(char *header)
{
	char type = header[16];

	if (header[5] == 1)
		type = header[16];
	else
		type = header[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
/**
 * print_entry_address - prints address
 *
 * @header: magic.
 *
 * Return: no return.
 */
void print_entry_address(char *header)
{
	int i;
	int start;
	char system_type;

	printf("  Entry point address:               0x");

	system_type = header[4] + '0';
	if (system_type == '1')
	{
		start = 26;
		printf("80");
		for (i = start; i >= 22; i--)
		{
			if (header[i] > 0)
				printf("%x", header[i]);
			else if (header[i] < 0)
				printf("%x", 256 + header[i]);
		}
		if (header[7] == 6)
			printf("00");
	}

	if (system_type == '2')
	{
		start = 26;
		for (i = start; i > 23; i--)
		{
			if (header[i] >= 0)
				printf("%02x", header[i]);

			else if (header[i] < 0)
				printf("%02x", 256 + header[i]);

		}
	}
	printf("\n");
}
/**
 * check_sys - check the version system.
 *
 * @header: magic.
 *
 * Return: no return.
 */
void check_sys(char *header)
{
	char sys = header[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic_info(header);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	print_data_encoding(header);
	print_version(header);
	print_os_abi(header);
	print_file_type(header);
	print_entry_address(header);
}
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char header_buffer[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, header_buffer, 27);

	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(header_buffer))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(header_buffer);
	close(fd);

	return (0);
}
