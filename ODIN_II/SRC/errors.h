#ifndef ERRORS_H
#define ERRORS_H

void error_message(short error_type, int line_number, int file, const char *message, ...);
void warning_message(short error_type, int line_number, int file, const char *message, ...);

#endif
