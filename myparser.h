/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 55 of your 30 day trial period.
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
* Date: 11/18/18
* Time: 21:25:44
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
#define ID 263
#define NUMBER 264
#define CONSTCHAR 265
#define IF 266
#define ELSE 267
#define FOR 268
#define WHILE 269
#define CIN 270
#define COUT 271
#define RETURN 272
#define ASSIGN 273
#define LT 274
#define LE 275
#define EQ 276
#define GT 277
#define GE 278
#define NEQ 279
#define PLUS 280
#define MINUS 281
#define MUL 282
#define DIV 283
#define MOD 284
#define INC 285
#define DEC 286
#define INAD 287
#define IOR 288
#define XOR 289
#define NOT 290
#define SHL 291
#define SHR 292
#define AND 293
#define OR 294
#define OPPOSITE 295
#define LBRACE 296
#define RBRACE 297
#define LPRACE 298
#define RPRACE 299
#define LSBRACE 300
#define RSBRACE 301
#define COMMA 302
#define SIMICOLON 303
#define COLON 304
#define SQUITO 305
#define NOTE 306
#define LNOTE 307
#define RNOTE 308
#define UMINUS 309
#endif
