
#pragma once

int mystrlen(const char* str);
char* mystrncpy(char* str_1, const char* str_2, int len);
char* mystrncat(char* str_1, const char* str_2, int len);
char* mystrchr(char* str, char s);
char* mystrstr(char* str_1, char* str_2);
int mystrcmp(const char* str_1, const char* str_2);
int mystrregcmp(const char* str_1, const char* str_2);