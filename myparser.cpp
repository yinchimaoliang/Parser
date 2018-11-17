/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 53 of your 30 day trial period.
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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/17/18
* Time: 09:54:54
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"



#include "mylexer.h"
#include "NodeAndTable.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include<fstream>
using namespace std;

extern NodeTable my;

ifstream in("code.txt");

#line 57 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 32 ".\\myparser.y"

	// place any extra initialisation code here

#line 81 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 37 ".\\myparser.y"

	// place any extra cleanup code here

#line 95 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 82 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(4 - 4);
             
#line 207 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 86 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 5);
             
#line 222 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 90 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 5);
             
#line 237 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 94 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 6); 
             
#line 252 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 98 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 6); 
             
#line 267 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 102 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 5); 
             
#line 282 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 106 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 6); 
             
#line 297 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 110 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 5); 
             
#line 312 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 116 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(STMT, COMP_STMT, 0, Notype, yyattribute(2 - 3),NULL,NULL,NULL);
             
#line 327 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 120 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
             
#line 342 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 125 ".\\myparser.y"

              YYSTYPE t=yyattribute(1 - 2);
               if(t!=NULL)
               {
                while(t->sibling!=NULL)
                   t=t->sibling;
                t->sibling=yyattribute(2 - 2);
                (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
                 } 
                else
                 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 2);              
             
#line 366 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 138 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 381 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 143 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 396 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 147 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 411 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 151 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 426 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 155 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 441 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 159 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 456 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 163 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 471 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 167 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 486 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 171 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 501 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 177 ".\\myparser.y"

              //同时声明的ID 赋给同样的类型
              TreeNode *p;
              (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(DECL,VAR_DECL,0,Notype,yyattribute(1 - 3),yyattribute(2 - 3),NULL,NULL);
               for(p=yyattribute(2 - 3);p!=NULL&&p->type==ID;p=p->sibling)
               { 
                 p->type=yyattribute(1 - 3)->type;
                 my.set_type(p->attr.symbol_add,p->type);
                 
               }
                
             
#line 525 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 191 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(EXPR, TYPE_EXPR, 0, Integer,NULL,NULL,NULL,NULL);
              
#line 540 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 195 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(EXPR, TYPE_EXPR, 0, Char,NULL,NULL,NULL,NULL);
              
#line 555 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 201 ".\\myparser.y"
 
               //将兄弟结点串起来
                 YYSTYPE t=yyattribute(1 - 3);
                 if(t!=NULL)
                 {
                   while(t->sibling!=NULL)
                     t=t->sibling;
                   t->sibling=yyattribute(3 - 3);
                  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 3);
                 }
                 else 
                  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(3 - 3);
                 
               
#line 581 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 216 ".\\myparser.y"

                 YYSTYPE t=yyattribute(1 - 3);
                 if(t!=NULL)
                 {
                  while(t->sibling!=NULL)
                     t=t->sibling;
                   t->sibling=yyattribute(3 - 3);
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 3);
                  }
                  else 
                  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(3 - 3);
               
#line 605 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 229 ".\\myparser.y"

                 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
               
#line 620 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 233 ".\\myparser.y"

                 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
               
#line 635 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 239 ".\\myparser.y"

                 (*(YYSTYPE YYFAR*)yyvalptr) =my.createnode(EXPR, ID_EXPR, yyattribute(1 - 1)->attr.symbol_add, yyattribute(1 - 1)->type,NULL,NULL,NULL,NULL);
                
#line 650 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 244 ".\\myparser.y"

                  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,IF_STMT,0,Notype,yyattribute(3 - 7),yyattribute(5 - 7),yyattribute(7 - 7),NULL);
                
#line 665 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 248 ".\\myparser.y"

                  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,IF_STMT,0,Notype,yyattribute(3 - 5),yyattribute(5 - 5),NULL,NULL);
                
#line 680 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 253 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,FOR_STMT,0,Notype,yyattribute(3 - 7),yyattribute(4 - 7),yyattribute(5 - 7),yyattribute(7 - 7));
                 
#line 695 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 257 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,FOR_STMT,0,Notype,yyattribute(3 - 6),yyattribute(4 - 6),yyattribute(6 - 6),NULL);
                 
#line 710 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 262 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,WHILE_STMT,0,Notype,yyattribute(3 - 5),yyattribute(5 - 5),NULL,NULL);
                 
#line 725 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 267 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,INPUT_STMT,0,Notype,yyattribute(3 - 4),yyattribute(4 - 4),NULL,NULL);
                 
#line 740 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 272 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,INPUT_STMT,0,Notype,yyattribute(3 - 3),yyattribute(4 - 3),NULL,NULL);
                 
#line 755 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 276 ".\\myparser.y"

                  (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
                 
#line 770 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 281 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,OUTPUT_STMT,0,Notype,yyattribute(3 - 4),yyattribute(4 - 4),NULL,NULL);
                  
#line 785 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 286 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,OUTPUT_STMT,0,Notype,yyattribute(3 - 3),yyattribute(4 - 3),NULL,NULL);
                  
#line 800 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 290 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
                  
#line 815 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 295 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,EXP_STMT,0,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
#line 830 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 299 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
                  
#line 845 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 304 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 860 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 308 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,yyattribute(1 - 5),yyattribute(4 - 5),NULL,NULL);
                  
#line 875 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 312 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 890 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 318 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,OR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
#line 905 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 322 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 920 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 327 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,AND,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
#line 935 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 331 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 950 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 336 ".\\myparser.y"

                     (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHL,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 965 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 340 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 980 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 344 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                   
#line 995 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 349 ".\\myparser.y"

                    
                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,EQ,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1011 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 354 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,LT,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1026 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 358 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,GT,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1041 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 362 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,LE,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1056 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 366 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,GE,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1071 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 370 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,NEQ,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1086 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 374 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1); 
                  
#line 1101 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 379 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,PLUS,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1116 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 383 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MINUS,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1131 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 387 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MINUS,Notype,yyattribute(2 - 2),NULL,NULL,NULL);
                  
#line 1146 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 391 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,INC,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
#line 1161 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 395 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,DEC,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
#line 1176 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 399 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1191 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 404 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MUL,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1206 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 408 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,DIV,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1221 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 412 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MOD,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1236 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 416 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1251 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 421 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
                 
#line 1266 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 425 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                 
#line 1281 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 429 ".\\myparser.y"

				  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.val,Integer,NULL,NULL,NULL,NULL);
                 
#line 1296 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 433 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.valc,Char,NULL,NULL,NULL,NULL);
                 
#line 1311 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 437 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR, NOT_EXPR, NOT, Notype, yyattribute(2 - 2),NULL,NULL,NULL);
                 
#line 1326 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "INT", 257 },
		{ "CHAR", 258 },
		{ "VOID", 259 },
		{ "MAIN", 260 },
		{ "ID", 261 },
		{ "NUMBER", 262 },
		{ "CONSTCHAR", 263 },
		{ "IF", 264 },
		{ "ELSE", 265 },
		{ "FOR", 266 },
		{ "WHILE", 267 },
		{ "CIN", 268 },
		{ "COUT", 269 },
		{ "ASSIGN", 270 },
		{ "LT", 271 },
		{ "LE", 272 },
		{ "EQ", 273 },
		{ "GT", 274 },
		{ "GE", 275 },
		{ "NEQ", 276 },
		{ "PLUS", 277 },
		{ "MINUS", 278 },
		{ "MUL", 279 },
		{ "DIV", 280 },
		{ "MOD", 281 },
		{ "INC", 282 },
		{ "DEC", 283 },
		{ "NOT", 287 },
		{ "SHL", 288 },
		{ "SHR", 289 },
		{ "AND", 290 },
		{ "OR", 291 },
		{ "LBRACE", 293 },
		{ "RBRACE", 294 },
		{ "LPRACE", 295 },
		{ "RPRACE", 296 },
		{ "COMMA", 299 },
		{ "SIMICOLON", 300 },
		{ "SQUITO", 302 },
		{ "UMINUS", 306 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: MAIN LPRACE RPRACE comp_stmt",
		"program: MAIN LPRACE VOID RPRACE comp_stmt",
		"program: VOID MAIN LPRACE RPRACE comp_stmt",
		"program: VOID MAIN LPRACE VOID RPRACE comp_stmt",
		"program: INT MAIN LPRACE VOID RPRACE comp_stmt",
		"program: INT MAIN LPRACE RPRACE comp_stmt",
		"program: CHAR MAIN LPRACE VOID RPRACE comp_stmt",
		"program: CHAR MAIN LPRACE RPRACE comp_stmt",
		"comp_stmt: LBRACE stmt_list RBRACE",
		"comp_stmt: LBRACE RBRACE",
		"stmt_list: stmt_list stmt",
		"stmt_list: stmt",
		"stmt: var_dec",
		"stmt: exp_stmt",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: for_stmt",
		"stmt: input_stmt",
		"stmt: output_stmt",
		"stmt: comp_stmt",
		"var_dec: type_spec idlist SIMICOLON",
		"type_spec: INT",
		"type_spec: CHAR",
		"idlist: idlist COMMA id",
		"idlist: idlist COMMA exp",
		"idlist: id",
		"idlist: exp",
		"id: ID",
		"if_stmt: IF LPRACE exp RPRACE stmt ELSE stmt",
		"if_stmt: IF LPRACE exp RPRACE stmt",
		"for_stmt: FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt",
		"for_stmt: FOR LPRACE exp_stmt exp_stmt RPRACE stmt",
		"while_stmt: WHILE LPRACE exp RPRACE stmt",
		"input_stmt: CIN SHR exp input_child",
		"input_child: SHR exp input_child",
		"input_child: SIMICOLON",
		"output_stmt: COUT SHL exp output_child",
		"output_child: SHL exp output_child",
		"output_child: SIMICOLON",
		"exp_stmt: exp SIMICOLON",
		"exp_stmt: SIMICOLON",
		"exp: id ASSIGN exp",
		"exp: id ASSIGN SQUITO exp SQUITO",
		"exp: or_exp",
		"or_exp: or_exp OR and_exp",
		"or_exp: and_exp",
		"and_exp: and_exp AND shift_exp",
		"and_exp: shift_exp",
		"shift_exp: shift_exp SHL rel_exp",
		"shift_exp: shift_exp SHR rel_exp",
		"shift_exp: rel_exp",
		"rel_exp: rel_exp EQ simple_exp",
		"rel_exp: rel_exp LT simple_exp",
		"rel_exp: rel_exp GT simple_exp",
		"rel_exp: rel_exp LE simple_exp",
		"rel_exp: rel_exp GE simple_exp",
		"rel_exp: rel_exp NEQ simple_exp",
		"rel_exp: simple_exp",
		"simple_exp: simple_exp PLUS term",
		"simple_exp: simple_exp MINUS term",
		"simple_exp: MINUS simple_exp",
		"simple_exp: simple_exp INC",
		"simple_exp: simple_exp DEC",
		"simple_exp: term",
		"term: term MUL factor",
		"term: term DIV factor",
		"term: term MOD factor",
		"term: factor",
		"factor: LPRACE exp RPRACE",
		"factor: id",
		"factor: NUMBER",
		"factor: CONSTCHAR",
		"factor: NOT factor"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 4, 0 },
		{ 1, 5, 1 },
		{ 1, 5, 2 },
		{ 1, 6, 3 },
		{ 1, 6, 4 },
		{ 1, 5, 5 },
		{ 1, 6, 6 },
		{ 1, 5, 7 },
		{ 2, 3, 8 },
		{ 2, 2, 9 },
		{ 3, 2, 10 },
		{ 3, 1, 11 },
		{ 4, 1, 12 },
		{ 4, 1, 13 },
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 5, 3, 20 },
		{ 6, 1, 21 },
		{ 6, 1, 22 },
		{ 7, 3, 23 },
		{ 7, 3, 24 },
		{ 7, 1, 25 },
		{ 7, 1, 26 },
		{ 8, 1, 27 },
		{ 9, 7, 28 },
		{ 9, 5, 29 },
		{ 10, 7, 30 },
		{ 10, 6, 31 },
		{ 11, 5, 32 },
		{ 12, 4, 33 },
		{ 13, 3, 34 },
		{ 13, 1, 35 },
		{ 14, 4, 36 },
		{ 15, 3, 37 },
		{ 15, 1, 38 },
		{ 16, 2, 39 },
		{ 16, 1, 40 },
		{ 17, 3, 41 },
		{ 17, 5, 42 },
		{ 17, 1, 43 },
		{ 18, 3, 44 },
		{ 18, 1, 45 },
		{ 19, 3, 46 },
		{ 19, 1, 47 },
		{ 20, 3, 48 },
		{ 20, 3, 49 },
		{ 20, 1, 50 },
		{ 21, 3, 51 },
		{ 21, 3, 52 },
		{ 21, 3, 53 },
		{ 21, 3, 54 },
		{ 21, 3, 55 },
		{ 21, 3, 56 },
		{ 21, 1, 57 },
		{ 22, 3, 58 },
		{ 22, 3, 59 },
		{ 22, 2, 60 },
		{ 22, 2, 61 },
		{ 22, 2, 62 },
		{ 22, 1, 63 },
		{ 23, 3, 64 },
		{ 23, 3, 65 },
		{ 23, 3, 66 },
		{ 23, 1, 67 },
		{ 24, 3, 68 },
		{ 24, 1, 69 },
		{ 24, 1, 70 },
		{ 24, 1, 71 },
		{ 24, 2, 72 }
	};
	yyreduction = reduction;

	yytokenaction_size = 134;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 148, YYAT_SHIFT, 31 },
		{ 148, YYAT_SHIFT, 32 },
		{ 12, YYAT_SHIFT, 19 },
		{ 133, YYAT_SHIFT, 33 },
		{ 133, YYAT_SHIFT, 34 },
		{ 133, YYAT_SHIFT, 35 },
		{ 11, YYAT_SHIFT, 17 },
		{ 148, YYAT_SHIFT, 36 },
		{ 10, YYAT_SHIFT, 15 },
		{ 148, YYAT_SHIFT, 37 },
		{ 148, YYAT_SHIFT, 38 },
		{ 148, YYAT_SHIFT, 39 },
		{ 148, YYAT_SHIFT, 40 },
		{ 9, YYAT_SHIFT, 13 },
		{ 141, YYAT_SHIFT, 148 },
		{ 144, YYAT_SHIFT, 133 },
		{ 139, YYAT_SHIFT, 146 },
		{ 137, YYAT_SHIFT, 97 },
		{ 136, YYAT_SHIFT, 145 },
		{ 99, YYAT_SHIFT, 97 },
		{ 133, YYAT_SHIFT, 41 },
		{ 115, YYAT_SHIFT, 91 },
		{ 115, YYAT_SHIFT, 92 },
		{ 115, YYAT_SHIFT, 93 },
		{ 115, YYAT_SHIFT, 94 },
		{ 115, YYAT_SHIFT, 95 },
		{ 115, YYAT_SHIFT, 96 },
		{ 144, YYAT_SHIFT, 134 },
		{ 128, YYAT_SHIFT, 140 },
		{ 133, YYAT_SHIFT, 42 },
		{ 114, YYAT_SHIFT, 91 },
		{ 114, YYAT_SHIFT, 92 },
		{ 114, YYAT_SHIFT, 93 },
		{ 114, YYAT_SHIFT, 94 },
		{ 114, YYAT_SHIFT, 95 },
		{ 114, YYAT_SHIFT, 96 },
		{ 148, YYAT_SHIFT, 22 },
		{ 133, YYAT_SHIFT, 44 },
		{ 116, YYAT_SHIFT, 87 },
		{ 12, YYAT_SHIFT, 20 },
		{ 112, YYAT_SHIFT, 80 },
		{ 112, YYAT_SHIFT, 81 },
		{ 112, YYAT_SHIFT, 82 },
		{ 11, YYAT_SHIFT, 18 },
		{ 104, YYAT_SHIFT, 129 },
		{ 10, YYAT_SHIFT, 16 },
		{ 137, YYAT_REDUCE, 24 },
		{ 137, YYAT_REDUCE, 24 },
		{ 99, YYAT_REDUCE, 26 },
		{ 99, YYAT_REDUCE, 26 },
		{ 9, YYAT_SHIFT, 14 },
		{ 58, YYAT_SHIFT, 91 },
		{ 58, YYAT_SHIFT, 92 },
		{ 58, YYAT_SHIFT, 93 },
		{ 58, YYAT_SHIFT, 94 },
		{ 58, YYAT_SHIFT, 95 },
		{ 58, YYAT_SHIFT, 96 },
		{ 122, YYAT_SHIFT, 83 },
		{ 122, YYAT_SHIFT, 84 },
		{ 121, YYAT_SHIFT, 83 },
		{ 121, YYAT_SHIFT, 84 },
		{ 103, YYAT_SHIFT, 45 },
		{ 122, YYAT_SHIFT, 85 },
		{ 122, YYAT_SHIFT, 86 },
		{ 121, YYAT_SHIFT, 85 },
		{ 121, YYAT_SHIFT, 86 },
		{ 120, YYAT_SHIFT, 83 },
		{ 120, YYAT_SHIFT, 84 },
		{ 119, YYAT_SHIFT, 83 },
		{ 119, YYAT_SHIFT, 84 },
		{ 102, YYAT_SHIFT, 127 },
		{ 120, YYAT_SHIFT, 85 },
		{ 120, YYAT_SHIFT, 86 },
		{ 119, YYAT_SHIFT, 85 },
		{ 119, YYAT_SHIFT, 86 },
		{ 118, YYAT_SHIFT, 83 },
		{ 118, YYAT_SHIFT, 84 },
		{ 117, YYAT_SHIFT, 83 },
		{ 117, YYAT_SHIFT, 84 },
		{ 97, YYAT_SHIFT, 123 },
		{ 118, YYAT_SHIFT, 85 },
		{ 118, YYAT_SHIFT, 86 },
		{ 117, YYAT_SHIFT, 85 },
		{ 117, YYAT_SHIFT, 86 },
		{ 53, YYAT_SHIFT, 83 },
		{ 53, YYAT_SHIFT, 84 },
		{ 143, YYAT_SHIFT, 130 },
		{ 113, YYAT_SHIFT, 88 },
		{ 113, YYAT_SHIFT, 89 },
		{ 53, YYAT_SHIFT, 85 },
		{ 53, YYAT_SHIFT, 86 },
		{ 0, YYAT_SHIFT, 1 },
		{ 0, YYAT_SHIFT, 2 },
		{ 0, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 4 },
		{ 101, YYAT_SHIFT, 125 },
		{ 101, YYAT_SHIFT, 126 },
		{ 143, YYAT_SHIFT, 131 },
		{ 111, YYAT_SHIFT, 80 },
		{ 111, YYAT_SHIFT, 81 },
		{ 111, YYAT_SHIFT, 82 },
		{ 52, YYAT_SHIFT, 80 },
		{ 52, YYAT_SHIFT, 81 },
		{ 52, YYAT_SHIFT, 82 },
		{ 74, YYAT_SHIFT, 85 },
		{ 74, YYAT_SHIFT, 86 },
		{ 56, YYAT_SHIFT, 88 },
		{ 56, YYAT_SHIFT, 89 },
		{ 84, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 107 },
		{ 60, YYAT_SHIFT, 98 },
		{ 59, YYAT_SHIFT, 97 },
		{ 57, YYAT_SHIFT, 90 },
		{ 55, YYAT_SHIFT, 87 },
		{ 51, YYAT_SHIFT, 78 },
		{ 40, YYAT_SHIFT, 73 },
		{ 39, YYAT_SHIFT, 72 },
		{ 38, YYAT_SHIFT, 71 },
		{ 37, YYAT_SHIFT, 70 },
		{ 36, YYAT_SHIFT, 69 },
		{ 28, YYAT_SHIFT, 22 },
		{ 22, YYAT_SHIFT, 43 },
		{ 19, YYAT_SHIFT, 28 },
		{ 17, YYAT_SHIFT, 26 },
		{ 15, YYAT_SHIFT, 24 },
		{ 13, YYAT_SHIFT, 21 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 11 },
		{ 6, YYAT_SHIFT, 10 },
		{ 5, YYAT_ACCEPT, 0 },
		{ 4, YYAT_SHIFT, 9 },
		{ 3, YYAT_SHIFT, 8 },
		{ 2, YYAT_SHIFT, 7 },
		{ 1, YYAT_SHIFT, 6 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -166, 1, YYAT_ERROR, 0 },
		{ -127, 1, YYAT_ERROR, 0 },
		{ -128, 1, YYAT_ERROR, 0 },
		{ -129, 1, YYAT_ERROR, 0 },
		{ -165, 1, YYAT_ERROR, 0 },
		{ 129, 1, YYAT_ERROR, 0 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ -168, 1, YYAT_ERROR, 0 },
		{ -169, 1, YYAT_ERROR, 0 },
		{ -246, 1, YYAT_ERROR, 0 },
		{ -251, 1, YYAT_ERROR, 0 },
		{ -253, 1, YYAT_ERROR, 0 },
		{ -257, 1, YYAT_ERROR, 0 },
		{ -171, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ -172, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ -174, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ -173, 1, YYAT_DEFAULT, 148 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 28 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_REDUCE, 72 },
		{ -176, 1, YYAT_ERROR, 0 },
		{ -177, 1, YYAT_ERROR, 0 },
		{ -178, 1, YYAT_ERROR, 0 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -180, 1, YYAT_DEFAULT, 148 },
		{ -178, 1, YYAT_REDUCE, 64 },
		{ -193, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ -177, 1, YYAT_REDUCE, 46 },
		{ -182, 1, YYAT_REDUCE, 48 },
		{ -179, 1, YYAT_REDUCE, 44 },
		{ -220, 1, YYAT_REDUCE, 51 },
		{ -159, 1, YYAT_REDUCE, 70 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 103 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ -178, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ -170, 1, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ -223, 1, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ -251, 1, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ -204, 1, YYAT_ERROR, 0 },
		{ -226, 1, YYAT_ERROR, 0 },
		{ -239, 1, YYAT_DEFAULT, 133 },
		{ -252, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 143 },
		{ 0, 0, YYAT_DEFAULT, 144 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ -181, 1, YYAT_REDUCE, 59 },
		{ -239, 1, YYAT_REDUCE, 60 },
		{ -201, 1, YYAT_REDUCE, 47 },
		{ -241, 1, YYAT_REDUCE, 49 },
		{ -250, 1, YYAT_REDUCE, 50 },
		{ -252, 1, YYAT_REDUCE, 45 },
		{ -200, 1, YYAT_REDUCE, 53 },
		{ -202, 1, YYAT_REDUCE, 55 },
		{ -209, 1, YYAT_REDUCE, 52 },
		{ -211, 1, YYAT_REDUCE, 54 },
		{ -218, 1, YYAT_REDUCE, 56 },
		{ -220, 1, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_DEFAULT, 148 },
		{ -268, 1, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 148 },
		{ 0, 0, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -258, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ -284, 1, YYAT_ERROR, 0 },
		{ -253, 1, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ -249, 1, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_DEFAULT, 148 },
		{ -282, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ -273, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_DEFAULT, 148 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ -257, 1, YYAT_DEFAULT, 103 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 31 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 76;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 148, 49 },
		{ 146, 151 },
		{ 148, 152 },
		{ 148, 50 },
		{ 148, 61 },
		{ 82, 75 },
		{ 133, 59 },
		{ 148, 47 },
		{ 148, 64 },
		{ 148, 62 },
		{ 148, 63 },
		{ 125, 137 },
		{ 148, 65 },
		{ 144, 150 },
		{ 148, 48 },
		{ 133, 144 },
		{ 133, 57 },
		{ 133, 55 },
		{ 61, 101 },
		{ 61, 99 },
		{ 125, 138 },
		{ 82, 110 },
		{ 96, 122 },
		{ 96, 52 },
		{ 96, 54 },
		{ 90, 116 },
		{ 90, 56 },
		{ 90, 58 },
		{ 61, 100 },
		{ 103, 128 },
		{ 103, 60 },
		{ 89, 115 },
		{ 89, 53 },
		{ 87, -1 },
		{ 87, 113 },
		{ 84, -1 },
		{ 84, 112 },
		{ 22, 51 },
		{ 22, 46 },
		{ 143, 149 },
		{ 140, 147 },
		{ 130, 143 },
		{ 129, 142 },
		{ 128, 141 },
		{ 127, 139 },
		{ 123, 136 },
		{ 106, 135 },
		{ 105, 132 },
		{ 97, 124 },
		{ 95, 121 },
		{ 94, 120 },
		{ 93, 119 },
		{ 92, 118 },
		{ 91, 117 },
		{ 88, 114 },
		{ 83, 111 },
		{ 81, 109 },
		{ 80, 108 },
		{ 73, 106 },
		{ 72, 105 },
		{ 71, 104 },
		{ 70, 103 },
		{ 69, 102 },
		{ 51, 79 },
		{ 44, 77 },
		{ 42, 76 },
		{ 41, 74 },
		{ 28, 68 },
		{ 26, 67 },
		{ 24, 66 },
		{ 21, 30 },
		{ 20, 29 },
		{ 18, 27 },
		{ 16, 25 },
		{ 14, 23 },
		{ 0, 5 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 74, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 72, -1 },
		{ 0, -1 },
		{ 71, -1 },
		{ 0, -1 },
		{ 70, -1 },
		{ 0, -1 },
		{ 69, -1 },
		{ 68, -1 },
		{ 34, 148 },
		{ 0, -1 },
		{ 67, -1 },
		{ 0, -1 },
		{ 66, -1 },
		{ 0, -1 },
		{ 65, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 44, 96 },
		{ 41, 82 },
		{ 0, -1 },
		{ 47, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 59, 148 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 45, 133 },
		{ 45, 103 },
		{ 43, 133 },
		{ 42, 133 },
		{ 41, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 33, 82 },
		{ 32, 82 },
		{ -3, -1 },
		{ 32, 84 },
		{ 13, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 14, 90 },
		{ 33, 89 },
		{ 10, 96 },
		{ 6, 89 },
		{ 31, 96 },
		{ 30, 96 },
		{ 29, 96 },
		{ 28, 96 },
		{ 27, 96 },
		{ 0, 82 },
		{ 31, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 13, 133 },
		{ 0, -1 },
		{ 34, -1 },
		{ 31, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 133 },
		{ 0, -1 },
		{ 3, 133 },
		{ 0, -1 },
		{ 40, 148 },
		{ 26, 133 },
		{ 38, 148 },
		{ 24, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 90 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 148 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, -1 },
		{ -2, -1 },
		{ 0, -1 },
		{ -3, 148 },
		{ 0, -1 },
		{ -2, 103 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 442 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	if(in)
	{
		cout<<"not NULL";
	}
	else
	{
		cout<<"NULL";
	}
	if (lexer.yycreate()) 
	{
	    lexer.yyin = &in;

	}
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	return n;
	system("pause");
}


