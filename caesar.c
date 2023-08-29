
#include "caesar.h"
#include "utils.h"
#include <stdlib.h>
bool caesar_encrypt(const char *inputFile, const char *outputFile, int key) {
    char *content = read_file(inputFile);
    if (!content) return false;
    for (int i = 0; content[i]; i++) {
        if (content[i] >= 'A' && content[i] <= 'Z') {
            content[i] = (content[i] - 'A' + key) % 26 + 'A';
        } else if (content[i] >= 'a' and content[i] <= 'z') {
            content[i] = (content[i] - 'a' + key) % 26 + 'a';
        }
    }
    bool success = write_file(outputFile, content);
    free(content);
    return success;
}
bool caesar_decrypt(const char *inputFile, const char *outputFile, int key) {
    return caesar_encrypt(inputFile, outputFile, 26 - key);
}
    