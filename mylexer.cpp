/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 56 of your 30 day trial period.
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
* Date: 11/19/18
* Time: 20:56:26
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
	case 53:
		{
#line 152 ".\\mylexer.l"

				yylval=&node;
              yylval->attr.vals=my.getString(yytext); //数字的值存入属性
               return STRING;
			 
#line 554 "mylexer.cpp"
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

	yytransitionmax = 212;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 0, 41 },
		{ 46, 88 },
		{ 3, 3 },
		{ 0, 98 },
		{ 62, 31 },
		{ 88, 70 },
		{ 55, 27 },
		{ 56, 27 },
		{ 53, 22 },
		{ 54, 22 },
		{ 72, 70 },
		{ 70, 98 },
		{ 63, 31 },
		{ 57, 27 },
		{ 98, 88 },
		{ 71, 98 },
		{ 60, 30 },
		{ 64, 32 },
		{ 74, 49 },
		{ 61, 30 },
		{ 74, 49 },
		{ 3, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 41, 41 },
		{ 3, 3 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 65, 33 },
		{ 16, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 22, 1 },
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
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 46, 16 },
		{ 49, 73 },
		{ 50, 20 },
		{ 51, 20 },
		{ 66, 34 },
		{ 47, 16 },
		{ 67, 35 },
		{ 68, 37 },
		{ 24, 1 },
		{ 0, 9 },
		{ 25, 1 },
		{ 26, 1 },
		{ 69, 43 },
		{ 72, 47 },
		{ 0, 48 },
		{ 52, 21 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 76, 55 },
		{ 77, 56 },
		{ 31, 1 },
		{ 78, 57 },
		{ 79, 58 },
		{ 80, 59 },
		{ 32, 1 },
		{ 81, 60 },
		{ 82, 61 },
		{ 83, 63 },
		{ 85, 65 },
		{ 33, 1 },
		{ 84, 64 },
		{ 86, 66 },
		{ 87, 67 },
		{ 34, 1 },
		{ 35, 1 },
		{ 44, 13 },
		{ 88, 71 },
		{ 45, 15 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 39, 1 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 58, 28 },
		{ 89, 76 },
		{ 90, 78 },
		{ 91, 79 },
		{ 92, 80 },
		{ 93, 81 },
		{ 94, 84 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 95, 85 },
		{ 96, 86 },
		{ 97, 87 },
		{ 59, 29 },
		{ 23, 104 },
		{ 99, 91 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 23, 104 },
		{ 48, 17 },
		{ 100, 93 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 101, 95 },
		{ 102, 97 },
		{ 40, 5 },
		{ 103, 99 },
		{ 104, 101 },
		{ 42, 8 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 104, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -4, 2 },
		{ 0, 0, 3 },
		{ 0, 147, 39 },
		{ 41, 0, 0 },
		{ 0, 0, 28 },
		{ 0, 173, 31 },
		{ -43, 74, 49 },
		{ 0, 0, 42 },
		{ 0, 0, 43 },
		{ 0, 0, 26 },
		{ 0, 69, 24 },
		{ 0, 0, 46 },
		{ 0, 69, 25 },
		{ 0, 33, 27 },
		{ 73, 148, 52 },
		{ 0, 0, 48 },
		{ 0, 0, 47 },
		{ 0, 17, 18 },
		{ 0, 29, 15 },
		{ 0, -50, 21 },
		{ 104, 0, 51 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 0, 33 },
		{ 104, -95, 51 },
		{ 104, 18, 51 },
		{ 104, 57, 51 },
		{ 104, -89, 51 },
		{ 104, -95, 51 },
		{ 104, -77, 51 },
		{ 104, -63, 51 },
		{ 104, -32, 51 },
		{ 104, -23, 51 },
		{ 0, 0, 40 },
		{ 0, -42, 32 },
		{ 0, 0, 41 },
		{ 0, 0, 34 },
		{ 0, 0, 23 },
		{ -6, -7, 53 },
		{ 0, 0, 37 },
		{ 0, 48, 0 },
		{ 0, 0, 29 },
		{ 0, 0, 30 },
		{ 98, 0, 0 },
		{ -47, 78, 0 },
		{ 73, 20, 0 },
		{ 75, -22, 0 },
		{ 0, 0, 35 },
		{ 0, 0, 19 },
		{ 0, 0, 20 },
		{ 0, 0, 22 },
		{ 0, 0, 36 },
		{ 104, -2, 51 },
		{ 104, -14, 51 },
		{ 104, -19, 51 },
		{ 104, -18, 51 },
		{ 104, -15, 51 },
		{ 104, -9, 51 },
		{ 104, -11, 51 },
		{ 104, 0, 11 },
		{ 104, -12, 51 },
		{ 104, 2, 51 },
		{ 104, -11, 51 },
		{ 104, 3, 51 },
		{ 104, 4, 51 },
		{ 0, 0, 38 },
		{ 0, 0, 50 },
		{ -46, -34, 0 },
		{ 98, 71, 0 },
		{ 0, 0, 1 },
		{ 0, 7, 52 },
		{ 75, 0, 0 },
		{ 0, 17, 52 },
		{ 104, 16, 51 },
		{ 104, 0, 16 },
		{ 104, 15, 51 },
		{ 104, 34, 51 },
		{ 104, 32, 51 },
		{ 104, 37, 51 },
		{ 104, 0, 13 },
		{ 104, 0, 4 },
		{ 104, 25, 51 },
		{ 104, 45, 51 },
		{ 104, 63, 51 },
		{ 104, 56, 51 },
		{ 71, -30, 0 },
		{ 104, 0, 5 },
		{ 104, 0, 17 },
		{ 104, 59, 51 },
		{ 104, 0, 12 },
		{ 104, 79, 51 },
		{ 104, 0, 9 },
		{ 104, 92, 51 },
		{ 104, 0, 8 },
		{ 104, 106, 51 },
		{ -46, -28, 1 },
		{ 104, 108, 51 },
		{ 104, 0, 6 },
		{ 104, 100, 51 },
		{ 104, 0, 14 },
		{ 104, 0, 7 },
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
		0,
		0
	};
	yybackup = backup;
}
#line 157 ".\\mylexer.l"



