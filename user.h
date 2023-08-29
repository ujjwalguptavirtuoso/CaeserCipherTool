
#ifndef USER_H
#define USER_H
#include <stdbool.h>
typedef struct {
    char username[50];
    unsigned long password_hash;
} User;
bool register_user(const char *username, const char *password);
bool authenticate_user(const char *username, const char *password);
#endif
    