#ifndef ERROR_H
#define ERROR_H

typedef enum {
    DB_NOT_EXIST,
    DB_DROP_FAILED,
    DB_IN_USE,
    DB_NOT_CHOICED,
    TABLE_EXIST,
    TABLE_NOT_EXIST,
    COLUMN_NOT_EXIST,
    UNKNOW_OPERATOR,
} ErrorType;

int error(ErrorType, ...);

#endif
