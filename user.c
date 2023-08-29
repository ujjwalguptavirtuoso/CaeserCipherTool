
#include "user.h"
#include "utils.h"
#include <stdio.h>
#include <string.h>
bool register_user(const char *username, const char *password) {
    FILE *fp = fopen("users.txt", "a");
    if (!fp) return false;
    User user;
    strncpy(user.username, username, sizeof(user.username));
    user.password_hash = hash_string(password);
    fwrite(&user, sizeof(User), 1, fp);
    fclose(fp);
    return true;
}
bool authenticate_user(const char *username, const char *password) {
    FILE *fp = fopen("users.txt", "r");
    if (!fp) return false;
    User user;
    unsigned long input_password_hash = hash_string(password);
    while (fread(&user, sizeof(User), 1, fp)) {
        if (strcmp(user.username, username) == 0 && user.password_hash == input_password_hash) {
            fclose(fp);
            return true;
        }
    }
    fclose(fp);
    return false;
}
    