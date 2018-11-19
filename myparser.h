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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 11/20/18
* Time: 07:46:33
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 27 ".\\myparser.y"

	// place any extra class members here

#line 69 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 42 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE TreeNode*
#endif

#line 82 "myparser.h"
#define INT 257
#define CHAR 258
#define VOID 259
#define FLOAT 260
#define DOUBLE 261
#define MAIN 262
#define STRING 263
#define ID 264
#define NUMBER 265
#define CONSTCHAR 266
#define IF 267
#define ELSE 268
#define FOR 269
#define WHILE 270
#define CIN 271
#define COUT 272
#define RETURN 273
#define ASSIGN 274
#define LT 275
#define LE 276
#define EQ 277
#define GT 278
#define GE 279
#define NEQ 280
#define PLUS 281
#define MINUS 282
#define MUL 283
#define DIV 284
#define MOD 285
#define INC 286
#define DEC 287
#define INAD 288
#define IOR 289
#define XOR 290
#define NOT 291
#define SHL 292
#define SHR 293
#define AND 294
#define OR 295
#define OPPOSITE 296
#define LBRACE 297
#define RBRACE 298
#define LPRACE 299
#define RPRACE 300
#define LSBRACE 301
#define RSBRACE 302
#define COMMA 303
#define SIMICOLON 304
#define COLON 305
#define SQUITO 306
#define NOTE 307
#define LNOTE 308
#define RNOTE 309
#define UMINUS 310
#endif
