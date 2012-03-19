/************************************`
 * <Basics>
 *	1. File: sub1_pm_c_util_h.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120317_074347
 *	4. Dependencies:
 *		1)
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. 
 * <Related>
 * 	1.
 * <Others>
 * <Description of the program>
 * 	1. 
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDIO_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h>
#endif
#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#ifndef INCLUDE_CTYPE_H
#define INCLUDE_CTYPE_H
#include <ctype.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

/*
#include "mylib.h"
*/
#ifdef MYLIB
#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib.h"
#endif
#endif

// macros ============================

// global vars ============================
#ifndef HAVE_BOOL
    #define HAVE_BOOL
    typedef int bool;
#endif
#ifndef true
    enum    boolvalue { false=0, true=1 };
#endif


// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    bool    ans;
    
    /* set value    */
    ans = true;
    
    /* show         */
    printf("ans=%d\n", ans);
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
