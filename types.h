#ifndef VARTYPE_H
#define VARTYPE_H
#define LEN 1000
#define M 10000
typedef enum {
    NUL,
    INTEGER,
    REAL,
    TEXT,
    BLOB,
} ModeType;

typedef enum {
    FALSE,
    TRUE,
} Boolean;

typedef enum {
    ADD,
    DROP,
    ALTER,
} AlterMode;

char *modetype_2_string(ModeType);
char *boolean_2_string(Boolean);

#endif
