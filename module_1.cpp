#include "module_1.h"
int mystrlen(const char* str) {  // #1
	int i = 0;
	int ind = 0;
	do {
		if (str[i] != '\0') {
			ind++;
		}
		i++;
	} while (str[i] != '\0');
	return ind;
}

char* mystrncpy(char* str_1, const char* str_2, int len) {   //#2
	for (int i = 0; i < len; i++) {
		str_1[i] = str_2[i];
	}
	return &str_1[0];
}

char* mystrncat(char* str_1, const char* str_2, int len) {  //#3
	for (int i = 0; i < len; i++) {
		if (str_2[i] != '\0') {
			str_1[mystrlen(str_1)+i]= str_2[i];
			
		}
		else {
			str_1 = str_1 + '\0';
			break;
		}
		
	}
	return &str_1[0];
}

char* mystrchr(char* str, char s) {  //#4
	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == s) {
			return &str[i];
		}
	}
	return 0;
}

char* mystrstr(char* str_1, char* str_2) { //#5
	int ind = 0;
	int ind_2 = 0;
	for (int i = 0; i < mystrlen(str_1); i++) {
		if (str_2[i] == str_1[ind]) {
			ind++;
			ind_2++;
		}
		else {
			ind++;
			ind_2 = 0;
		}
		if (ind_2 == mystrlen(str_2)) {
			return &str_1[i - ind_2];
		}
	}
	return 0;
}

int mystrcmp(const char* str_1, const char* str_2) {
	int ind = 0;
	for (int i = 0; i < sizeof(str_1); i++) {
		if (str_1[i] == str_2[i]) {
			ind++;
		}
	}
	if (ind == sizeof(str_1)) {
		return 0;
	}
	return 1;

}

int mystrregcmp(const char* str_1, const char* str_2) {
	int ind = 0;
	for (int i = 0; i < sizeof(str_1); i++) {
		if (str_1[i] == str_2[i] || str_1[i] == str_2[i]) {
			ind++;
		}
	}
	if (ind == sizeof(str_1)) {
		return 0;
	}
	return 1;
}
