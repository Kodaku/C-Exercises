#ifndef DEFINED_ENUM
#define DEFINED_ENUM 0
typedef enum
{
    DEPOSIT = 1,
    SEARCH_BY_NAME = 2,
    SEARCH_BY_SPECIES = 3,
    SEARCH_BY_OWNER = 4,
    SEARCH_BY_ID = 5,
    WITHDRAW = 6,
    EXIT = 7
} AppState;
#endif

#ifndef DEFINED_BOOL
#define DEFINED_BOOL 1
typedef enum
{
    FALSE,
    TRUE
} Bool;
#endif

#ifndef DEFINED_ANIMAL
#define DEFINED_ANIMAL 2
typedef struct
{
    char name[50];
    char species[50];
    char owner[50];
    int permanence_days;
    int id;
} Animal;
#endif