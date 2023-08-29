
#include "xor.h"
#include "utils.h"
#include <stdlib.h>
bool xor_encrypt(const char *inputFile, const char *outputFile, char key) {
    char *content = read_file(inputFile);
    if (!content) return false;
    for (int i = 0; content[i]; i++) {
        content[i] ^= key;
    }
    bool success = write_file(outputFile, content);
    free(content);
    return success;
}
bool xor_decrypt(const char *inputFile, const char *outputFile, char key) {
    return xor_encrypt(inputFile, outputFile, key);
}
    