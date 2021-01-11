/*

PART B excercise: 
a) 
error #2001: Syntax error: expected '}' but found 'end of input'.
b)
Building main.obj.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(8):error #2001: Syntax error: expected ';' but found 'printf'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(8): warning #2099: Missing type specifier; assuming 'int'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(8): error #2001: Syntax error: expected ')' but found 'string constant'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(8): error #2120: Redeclaration of 'printf', previously declared at C:\Program Files\PellesC\Include\stdio.h(117); expected 'int function(const char * restrict, ...)' but found 'int function()'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(9): warning #2099: Missing type specifier; assuming 'int'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(9): error #2001: Syntax error: expected ')' but found 'string constant'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(10): error #2156: Unrecognized declaration.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(10): error #2156: Unrecognized declaration.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(11): error #2156: Unrecognized declaration.
*** Error code: 1 ***

c)
No error message

d)
POLINK: error: Unresolved external symbol 'main' - referenced from 'crt64.lib(_crt0.obj)'.
POLINK: fatal error: 1 unresolved external(s).

e)
POLINK: error: Unresolved external symbol 'main' - referenced from 'crt64.lib(_crt0.obj)'.
POLINK: fatal error: 1 unresolved external(s).

f) 
POLINK: error: Unresolved external symbol 'pintf' - referenced from 'C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\output\main.obj'.
POLINK: fatal error: 1 unresolved external(s)

g)
 error #2001: Syntax error: expected ')' but found '{'.

h)
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(5): error #2001: Syntax error: expected ')' but found '('.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(5): warning #2117: Old-style function definition for 'main'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(5): error #2014: Empty declaration.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(5): error #2001: Syntax error: expected ';' but found ')'.
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(8): error #2001: Syntax error: expected '{' but found 'printf'.

i)
C:\Users\momo_\OneDrive\Documents\Fall 2020\SYSC2006\Code\Labs\Lab 1\hello\main.c(11): error #2001: Syntax error: expected ';' but found '}'.
*/

#include <stdio.h>
#include <stdlib.h>

/*main: generate some simple output*/ 
int main(void)
{

 	printf("Hello, world!\n");
	printf("C programming is fun!");
 	return EXIT_SUCCESS;
}
