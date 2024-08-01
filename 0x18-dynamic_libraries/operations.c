#include "main.h"
#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (*s++) len++;
    return len;
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s++);
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    char *d = dest;
    while ((*d++ = *src++));
    return dest;
}

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    if (*s == '-') {
        sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }
    return sign * result;
}

char *_strcat(char *dest, char *src) {
    char *d = dest;
    while (*d) d++;
    while ((*d++ = *src++));
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *d = dest;
    while (*d) d++;
    while (n-- && (*d++ = *src++));
    if (n < 0) *d = '\0';
    return dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *d = dest;
    while (n-- && (*d++ = *src++));
    if (n < 0) *d = '\0';
    return dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *p = s;
    while (n--) {
        *p++ = b;
    }
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *d = dest;
    char *s = src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) return s;
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    char *a;
    while (*s) {
        for (a = accept; *a; a++) {
            if (*s == *a) {
                count++;
                break;
            }
        }
        if (*a == '\0') return count;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    char *a;
    while (*s) {
        for (a = accept; *a; a++) {
            if (*s == *a) return s;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *h = haystack;
    char *n = needle;
    if (!*needle) return haystack;
    while (*haystack) {
        h = haystack;
        n = needle;
        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }
        if (!*n) return haystack;
        haystack++;
    }
    return NULL;
}

