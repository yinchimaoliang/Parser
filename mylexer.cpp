/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 54 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 11/17/18
* Time: 19:33:48
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"


#include <string>

#include "myparser.h"
#include "NodeAndTable.h"
#include <iostream>
using namespace std;

int address=0;   //存储ID在符号表中的位置
extern NodeTable my;    //NodeTable对象
TreeNode node;    //临时定义一个TreeNode 

#line 52 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 29 ".\\mylexer.l"

	// place any extra initialisation code here

#line 76 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 34 ".\\mylexer.l"

	// place any extra cleanup code here

#line 88 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 54 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	

#line 160 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 62 ".\\mylexer.l"

#line 167 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 63 ".\\mylexer.l"
/*no action and no return */
#line 174 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 64 ".\\mylexer.l"
my.lineno++;
#line 181 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 65 ".\\mylexer.l"
return INT;
#line 188 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 66 ".\\mylexer.l"
return CHAR;
#line 195 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 67 ".\\mylexer.l"
return FLOAT;
#line 202 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 68 ".\\mylexer.l"
return DOUBLE;
#line 209 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 69 ".\\mylexer.l"
return VOID;
#line 216 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 70 ".\\mylexer.l"
return MAIN;
#line 223 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 71 ".\\mylexer.l"
return RETURN;
#line 230 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 74 ".\\mylexer.l"
return IF;
#line 237 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 75 ".\\mylexer.l"
return ELSE;
#line 244 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 76 ".\\mylexer.l"
return FOR;
#line 251 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 77 ".\\mylexer.l"
return WHILE;
#line 258 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 80 ".\\mylexer.l"
return ASSIGN;
#line 265 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 81 ".\\mylexer.l"
return CIN;
#line 272 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 82 ".\\mylexer.l"
return COUT;
#line 279 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 87 ".\\mylexer.l"
return LT;
#line 286 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 88 ".\\mylexer.l"
return LE;
#line 293 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 89 ".\\mylexer.l"
return EQ;
#line 300 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 90 ".\\mylexer.l"
return GT;
#line 307 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 91 ".\\mylexer.l"
return GE;
#line 314 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 92 ".\\mylexer.l"
return NEQ;
#line 321 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 95 ".\\mylexer.l"
return PLUS;
#line 328 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 96 ".\\mylexer.l"
return MINUS;
#line 335 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 97 ".\\mylexer.l"
return MUL;
#line 342 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 98 ".\\mylexer.l"
return DIV;
#line 349 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 99 ".\\mylexer.l"
return MOD;
#line 356 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 100 ".\\mylexer.l"
return INC;
#line 363 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 101 ".\\mylexer.l"
return DEC;
#line 370 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 103 ".\\mylexer.l"
return INAD;
#line 377 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 104 ".\\mylexer.l"
return IOR;
#line 384 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 105 ".\\mylexer.l"
return XOR;
#line 391 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 106 ".\\mylexer.l"
return NOT;
#line 398 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 107 ".\\mylexer.l"
return SHL;
#line 405 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 108 ".\\mylexer.l"
return SHR;
#line 412 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 110 ".\\mylexer.l"
return AND;
#line 419 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 111 ".\\mylexer.l"
return OR;
#line 426 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 112 ".\\mylexer.l"
return OPPOSITE;
#line 433 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 115 ".\\mylexer.l"
return LBRACE;
#line 440 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 116 ".\\mylexer.l"
return RBRACE;
#line 447 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 117 ".\\mylexer.l"
return LPRACE;
#line 454 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 118 ".\\mylexer.l"
return RPRACE;
#line 461 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 119 ".\\mylexer.l"
return LSBRACE;
#line 468 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 120 ".\\mylexer.l"
return RSBRACE;
#line 475 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 121 ".\\mylexer.l"
return COMMA;
#line 482 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 122 ".\\mylexer.l"
return SIMICOLON;
#line 489 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 123 ".\\mylexer.l"
return COLON;
#line 496 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 124 ".\\mylexer.l"
return SQUITO;
#line 503 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 130 ".\\mylexer.l"
 yylval=&node;
              yylval->attr.valc=yytext[1];      //const Char
              return CONSTCHAR;
              
#line 513 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 134 ".\\mylexer.l"
 
              string str(yytext);
              address=my.getadd(str);          //判断是否在符号表中
              if(address==-1)
               address=my.insert(str,ID);      //不在插入
              else 
                 node.type=my.gettype(address);  //获得type
              yylval=&node;
              yylval->attr.symbol_add=address;  //在符号表中的位置存入属性
              
              return ID;               
             
#line 531 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 146 ".\\mylexer.l"

              yylval=&node;
              yylval->attr.val=my.getNumber(yytext); //数字的值存入属性
               return NUMBER;
             
             
#line 543 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 209;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 3, 3 },
		{ 44, 86 },
		{ 40, 7 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 86, 68 },
		{ 96, 86 },
		{ 44, 15 },
		{ 58, 29 },
		{ 60, 30 },
		{ 70, 68 },
		{ 59, 29 },
		{ 45, 15 },
		{ 3, 1 },
		{ 5, 1 },
		{ 3, 3 },
		{ 47, 71 },
		{ 61, 30 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 62, 31 },
		{ 15, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 0, 96 },
		{ 63, 32 },
		{ 53, 26 },
		{ 54, 26 },
		{ 72, 47 },
		{ 64, 33 },
		{ 72, 47 },
		{ 65, 34 },
		{ 68, 96 },
		{ 55, 26 },
		{ 66, 36 },
		{ 46, 16 },
		{ 69, 96 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 48, 19 },
		{ 49, 19 },
		{ 51, 21 },
		{ 52, 21 },
		{ 67, 41 },
		{ 23, 1 },
		{ 70, 45 },
		{ 24, 1 },
		{ 25, 1 },
		{ 0, 46 },
		{ 0, 8 },
		{ 74, 53 },
		{ 75, 54 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 76, 55 },
		{ 77, 56 },
		{ 30, 1 },
		{ 78, 57 },
		{ 79, 58 },
		{ 80, 59 },
		{ 31, 1 },
		{ 81, 61 },
		{ 82, 62 },
		{ 83, 63 },
		{ 50, 20 },
		{ 32, 1 },
		{ 84, 64 },
		{ 85, 65 },
		{ 86, 69 },
		{ 33, 1 },
		{ 34, 1 },
		{ 42, 12 },
		{ 43, 14 },
		{ 88, 76 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 87, 74 },
		{ 89, 77 },
		{ 90, 78 },
		{ 91, 79 },
		{ 92, 82 },
		{ 93, 83 },
		{ 94, 84 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 95, 85 },
		{ 56, 27 },
		{ 97, 89 },
		{ 98, 91 },
		{ 22, 102 },
		{ 99, 93 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 22, 102 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 100, 95 },
		{ 57, 28 },
		{ 101, 97 },
		{ 102, 99 },
		{ 39, 5 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 102, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 2 },
		{ 0, 0, 3 },
		{ 0, 147, 39 },
		{ 0, 0, 28 },
		{ 0, -33, 31 },
		{ -41, 78, 49 },
		{ 0, 0, 42 },
		{ 0, 0, 43 },
		{ 0, 0, 26 },
		{ 0, 69, 24 },
		{ 0, 0, 46 },
		{ 0, 68, 25 },
		{ 0, -24, 27 },
		{ 71, 20, 52 },
		{ 0, 0, 48 },
		{ 0, 0, 47 },
		{ 0, 18, 18 },
		{ 0, 44, 15 },
		{ 0, 19, 21 },
		{ 102, 0, 51 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 0, 33 },
		{ 102, -47, 51 },
		{ 102, 52, 51 },
		{ 102, 97, 51 },
		{ 102, -89, 51 },
		{ 102, -82, 51 },
		{ 102, -59, 51 },
		{ 102, -45, 51 },
		{ 102, -51, 51 },
		{ 102, -42, 51 },
		{ 0, 0, 40 },
		{ 0, -59, 32 },
		{ 0, 0, 41 },
		{ 0, 0, 34 },
		{ 0, 0, 23 },
		{ 0, 0, 37 },
		{ 0, 43, 0 },
		{ 0, 0, 29 },
		{ 0, 0, 30 },
		{ 96, 0, 0 },
		{ -45, 74, 0 },
		{ 71, 18, 0 },
		{ 73, 16, 0 },
		{ 0, 0, 35 },
		{ 0, 0, 19 },
		{ 0, 0, 20 },
		{ 0, 0, 22 },
		{ 0, 0, 36 },
		{ 102, -8, 51 },
		{ 102, -20, 51 },
		{ 102, -22, 51 },
		{ 102, -21, 51 },
		{ 102, -17, 51 },
		{ 102, -12, 51 },
		{ 102, -14, 51 },
		{ 102, 0, 11 },
		{ 102, -14, 51 },
		{ 102, -2, 51 },
		{ 102, -12, 51 },
		{ 102, 2, 51 },
		{ 102, 3, 51 },
		{ 0, 0, 38 },
		{ 0, 0, 50 },
		{ -44, -26, 0 },
		{ 96, 67, 0 },
		{ 0, 0, 1 },
		{ 0, -42, 52 },
		{ 73, 0, 0 },
		{ 0, 146, 52 },
		{ 102, 15, 51 },
		{ 102, 0, 16 },
		{ 102, -2, 51 },
		{ 102, 32, 51 },
		{ 102, 30, 51 },
		{ 102, 35, 51 },
		{ 102, 0, 13 },
		{ 102, 0, 4 },
		{ 102, 23, 51 },
		{ 102, 17, 51 },
		{ 102, 35, 51 },
		{ 102, 54, 51 },
		{ 69, -30, 0 },
		{ 102, 0, 5 },
		{ 102, 0, 17 },
		{ 102, 56, 51 },
		{ 102, 0, 12 },
		{ 102, 49, 51 },
		{ 102, 0, 9 },
		{ 102, 53, 51 },
		{ 102, 0, 8 },
		{ 102, 103, 51 },
		{ -44, 21, 1 },
		{ 102, 105, 51 },
		{ 102, 0, 6 },
		{ 102, 97, 51 },
		{ 102, 0, 14 },
		{ 102, 0, 7 },
		{ 0, 71, 10 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 153 ".\\mylexer.l"



