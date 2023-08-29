
#include "logs.h"
#include "utils.h"
#include <stdio.h>
#include <time.h>
bool log_activity(const char *username, const char *operation) {
    time_t t;
    struct tm *tmp;
    char timestamp[100];
    time(&t);
    tmp = localtime(&t);
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", tmp);
    char log_entry[200];
    snprintf(log_entry, sizeof(log_entry), "[%s] %s: %s\n", timestamp, username, operation);
    return append_to_file("logs.txt", log_entry);
}
void display_logs() {
    char *logs = read_file("logs.txt");
    if (logs) {
        printf("%s", logs);
        free(logs);
    } else {
        printf("No logs to display.\n");
    }
}
    