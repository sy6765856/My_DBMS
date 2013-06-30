#include "types.h"

/* Only when u want to echo table */
char *modetype_2_string(ModeType mode_type)
{
    switch(mode_type) {
        case NUL: 
            return "NULL";
            break;
        case INTEGER:
            return "INTEGER";
            break;
        case REAL:
            return "REAL";
            break;
        case TEXT:
            return "TEXT";
            break;
        case BLOB:
            return "BLOB";
            break;
        default:
            return "UNKNOW TYPE";
            break;
    }
}

char *boolean_2_string(Boolean b)
{
    switch(b) {
        case FALSE:
            return "FALSE";
            break;
        case TRUE:
            return "TRUE";
            break;
        default:
            return "ERROR";
            break;
    }
}
