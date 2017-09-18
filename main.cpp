#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "module_1.h"



int main() {
	int result = 0;
	int flag_menu = 0;
	char str[100] = { 0 };
	
	const char* str_1 = "Perva9 stroka dl9 primera";
	const char* str_2 = "stroka";
	char* str_3 = "stroka";
	char* str_res = NULL;
	char s = 'r';
	
	for (int i = 0; i < strlen(str_1); i++) {
		str[i] = str_1[i];
	}

	do {
		printf("\n Vvedite nomer funcii 1-7 \n");
		scanf_s("%d", &flag_menu);
		fflush(stdin);

		if (flag_menu == 1) {
			printf("\n Dana stroka= %s", str);
			result = mystrlen(str);
			printf("\n ee dlina Resultat= %d", result);
		}
		if (flag_menu == 2) {
			printf("\n Dana stroka= %s", str);
			printf("\n Dana stroka= %s", str_2);
			str_res = mystrncpy(&str[0], str_2, 100);
			printf("\n Resultat = %s", str_res);
		}
		if (flag_menu == 3) {
			printf("\n Dana stroka= %s", str);
			printf("\n Dana stroka= %s", str_2);
			
			str_res = mystrncat(&str[0], str_2, 100);
			printf("\n Resultat = %s", str_res);
		}
		if (flag_menu == 4) {
			printf("\n Dana stroka= %s", str);
			printf("\n Dan simvol= %c", s);
			str_res = mystrchr(str, s);
			printf("\n Resultat = %s", str_res);
		}
		if (flag_menu == 5) {
			printf("\n Dana stroka= %s", str);
			printf("\n Dana stroka= %s", str_3);
			str_res = mystrstr(str, str_3);
			printf("\n Resultat = %s", str_res);
		}
		if (flag_menu == 6) {
			result = mystrcmp(str_1, str_2);
			printf("Resultat= %d", result);
		}
		if (flag_menu == 7) {
			result = mystrregcmp(str_1, str_2);
			printf("Resultat= %d", result);
		}

	} while (flag_menu != 0);
	return 0;

}