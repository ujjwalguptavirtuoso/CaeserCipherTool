
#ifndef UTILS_H
#define UTILS_H
#include <stdbool.h>
char *read_file(const char *filename);
bool write_file(const char *filename, const char *content);
bool append_to_file(const char *filename, const char *content);
unsigned long hash_string(const char *str);
#endif
    