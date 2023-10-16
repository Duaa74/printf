#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Struct for specifiers */
typedef struct specifier {
    char *spec;
    int (*f)(va_list);
} spec_t;

/* Prototypes for our custom _printf and its helper functions */
int _printf(const char *format, ...);
int nebula_parser(const char *format, va_list args);
int stellar_flags(va_list args);
int comet_width(va_list args);
int meteor_precision(va_list args);
int quasar_length(va_list args);
int star_char(va_list args);
int galaxy_string(va_list args);
int planet_int(va_list args);
int moon_unsigned(va_list args);
int asteroid_octal(va_list args);
int satellite_hex(va_list args);
int orbit_pointer(va_list args);
int neutron_float(va_list args);
int eclipse_percent(va_list args);

#endif /* MAIN_H */
