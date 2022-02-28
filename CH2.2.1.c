/*
 * File: CH2.2.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:06:25 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:05:37 am	H.K.	added comment
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

 /*
 Schreiben sie das Programm "helloWorld.c¨aus dem vorherigen Abschnitt 2.1.3 so um,
 dass es seinen Quelltext am Bildschirm ausgibt. Dieses ist mit dem bisher erlernten
 printf und den Escape-Sequenzen zu loesen.
 */

#include <stdio.h>

int main() {
    printf("#include <stdio.h>\n");
    printf("int main()\n{\n");
    printf("\t\tprintf(\"hello world!\\n\");\n");
    printf("\t\treturn 0;\n");
    printf("\n}");
    return 0;
}
