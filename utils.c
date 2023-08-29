
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *read_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return NULL;
    fseek(fp, 0, SEEK_END);
    long fsize = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    char *buffer = (char *)malloc(fsize + 1);
    fread(buffer, 1, fsize, fp);
    buffer[fsize] = 0;
    fclose(fp);
    return buffer;
}
bool write_file(const char *filename, const char *content) {
    FILE *fp = fopen(filename, "w");
    if (!fp) return false;
    fputs(content, fp);
    fclose(fp);
    return true;
}
bool append_to_file(const char *filename, const char *content) {
    FILE *fp = fopen(filename, "a");
    if (!fp) return false;
    fputs(content, fp);
    fclose(fp);
    return true;
}
unsigned long hash_string(const char *str) {
    unsigned long hash = 5381;
    int c;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}
    