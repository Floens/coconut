#pragma once

#include <stdarg.h>
#include <stdbool.h>

/**
 * Object to describe location information of a compile time object.
 * Pass this to CTIobj function.
 *
 * Values that are 0/NULL are not displayed, but are handled.
 */
struct ctinfo {
    int first_line;
    int first_column;
    int last_line;
    int last_column;
    char *filename;
    char *line;
};

/**
 * Type of message for the CTI and CTIobj functions.
 * Determine header and the error and warning messages have a counter
 * counting the errors and warnings.
 */
enum cti_type {
    CTI_STATE,
    CTI_NOTE,
    CTI_WARN,
    CTI_ERROR,

};

extern void CTIinstallInterruptHandlers(void);
extern int CTIgetErrorMessageLineLength();
extern int CTIgetWarnMessageLineLength(void);
extern int CTIgetWarnings();
extern void CTIabortCompilation();
extern void CTIabortOnError();
extern void CTIabortOutOfMemory(unsigned int request);
extern void CTI(enum cti_type type, bool newline, const char *format, ...);
extern void CTIobj(enum cti_type type, bool newline, struct ctinfo obj, const char *format, ...);