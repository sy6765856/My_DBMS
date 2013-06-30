#include <string.h>
#include "tools.h"

char *add_ext(char name[], const char file_ext[], char file_name[])
{
    int len = strlen(name);
    strcpy(file_name, name);
    strcpy(&file_name[len], file_ext);
    return file_name;
}
