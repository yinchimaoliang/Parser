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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/17/18
* Time: 20:55:43
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
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 114 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 6); 
             
#line 327 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 118 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 5); 
             
#line 342 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 122 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 6); 
             
#line 357 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 126 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 5); 
             
#line 372 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 132 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(STMT, COMP_STMT, 0, Notype, yyattribute(2 - 3),NULL,NULL,NULL);
             
#line 387 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 136 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
             
#line 402 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 141 ".\\myparser.y"

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
#line 154 ".\\myparser.y"

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
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 175 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 516 "myparser.cpp"
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
#line 179 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 531 "myparser.cpp"
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
#line 183 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 546 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 187 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 561 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 191 ".\\myparser.y"

               (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
             
#line 576 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 196 ".\\myparser.y"

              //同时声明的ID 赋给同样的类型
              TreeNode *p;
              (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(DECL,VAR_DECL,0,Notype,yyattribute(1 - 3),yyattribute(2 - 3),NULL,NULL);
               for(p=yyattribute(2 - 3);p!=NULL&&p->type==ID;p=p->sibling)
               { 
                 p->type=yyattribute(1 - 3)->type;
                 my.set_type(p->attr.symbol_add,p->type);
                 
               }
                
             
#line 600 "myparser.cpp"
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
#line 210 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(EXPR, TYPE_EXPR, 0, Integer,NULL,NULL,NULL,NULL);
              
#line 615 "myparser.cpp"
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
#line 214 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(EXPR, TYPE_EXPR, 0, Char,NULL,NULL,NULL,NULL);
              
#line 630 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 218 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(EXPR, TYPE_EXPR, 0, Float,NULL,NULL,NULL,NULL);
              
#line 645 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 222 ".\\myparser.y"

              (*(YYSTYPE YYFAR*)yyvalptr) = my.createnode(EXPR, TYPE_EXPR, 0, Double,NULL,NULL,NULL,NULL);
              
#line 660 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 228 ".\\myparser.y"
 
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
                 
               
#line 686 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 243 ".\\myparser.y"

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
               
#line 710 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 256 ".\\myparser.y"

                 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
               
#line 725 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 260 ".\\myparser.y"

                 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
               
#line 740 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 266 ".\\myparser.y"

                 (*(YYSTYPE YYFAR*)yyvalptr) =my.createnode(EXPR, ID_EXPR, yyattribute(1 - 1)->attr.symbol_add, yyattribute(1 - 1)->type,NULL,NULL,NULL,NULL);
                
#line 755 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 271 ".\\myparser.y"

                  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,IF_STMT,0,Notype,yyattribute(3 - 7),yyattribute(5 - 7),yyattribute(7 - 7),NULL);
                
#line 770 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 275 ".\\myparser.y"

                  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,IF_STMT,0,Notype,yyattribute(3 - 5),yyattribute(5 - 5),NULL,NULL);
                
#line 785 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 280 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,FOR_STMT,0,Notype,yyattribute(3 - 7),yyattribute(4 - 7),yyattribute(5 - 7),yyattribute(7 - 7));
                 
#line 800 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 284 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,FOR_STMT,0,Notype,yyattribute(3 - 6),yyattribute(4 - 6),yyattribute(6 - 6),NULL);
                 
#line 815 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 289 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,WHILE_STMT,0,Notype,yyattribute(3 - 5),yyattribute(5 - 5),NULL,NULL);
                 
#line 830 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 294 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,INPUT_STMT,0,Notype,yyattribute(3 - 4),yyattribute(4 - 4),NULL,NULL);
                 
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
#line 299 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,INPUT_STMT,0,Notype,yyattribute(3 - 3),yyattribute(4 - 3),NULL,NULL);
                 
#line 860 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 303 ".\\myparser.y"

                  (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
                 
#line 875 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 308 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,OUTPUT_STMT,0,Notype,yyattribute(3 - 4),yyattribute(4 - 4),NULL,NULL);
                  
#line 890 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 313 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,RETURN_STMT,0,Notype,yyattribute(2 - 2),NULL,NULL,NULL);
                  
#line 905 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 318 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,OUTPUT_STMT,0,Notype,yyattribute(3 - 3),yyattribute(4 - 3),NULL,NULL);
                  
#line 920 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 322 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
                  
#line 935 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 327 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,EXP_STMT,0,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
#line 950 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 331 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=NULL;
                  
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
#line 336 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 980 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 340 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,yyattribute(1 - 5),yyattribute(4 - 5),NULL,NULL);
                  
#line 995 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 344 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1010 "myparser.cpp"
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
#line 350 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,OR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
#line 1025 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 354 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1040 "myparser.cpp"
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
#line 359 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,AND,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
#line 1055 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 363 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1070 "myparser.cpp"
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
#line 368 ".\\myparser.y"

                     (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHL,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 1085 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 372 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 1100 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 376 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                   
#line 1115 "myparser.cpp"
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
#line 381 ".\\myparser.y"

                    
                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,EQ,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1131 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 386 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,LT,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1146 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 390 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,GT,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1161 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 394 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,LE,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1176 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 398 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,GE,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
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
#line 402 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,NEQ,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1206 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 406 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1); 
                  
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
#line 411 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,PLUS,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1236 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 415 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MINUS,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1251 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 419 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MINUS,Notype,yyattribute(2 - 2),NULL,NULL,NULL);
                  
#line 1266 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 423 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,INC,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
#line 1281 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 427 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,DEC,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
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
#line 431 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1311 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 436 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MUL,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1326 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 440 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,DIV,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1341 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 444 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MOD,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1356 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 448 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1371 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 453 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
                 
#line 1386 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 457 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                 
#line 1401 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 461 ".\\myparser.y"

				  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.val,Number,NULL,NULL,NULL,NULL);
                 
#line 1416 "myparser.cpp"
			}
		}
		break;
	case 79:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 465 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.valc,Char,NULL,NULL,NULL,NULL);
                 
#line 1431 "myparser.cpp"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 469 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR, NOT_EXPR, NOT, Notype, yyattribute(2 - 2),NULL,NULL,NULL);
                 
#line 1446 "myparser.cpp"
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
		{ "FLOAT", 260 },
		{ "DOUBLE", 261 },
		{ "MAIN", 262 },
		{ "ID", 263 },
		{ "NUMBER", 264 },
		{ "CONSTCHAR", 265 },
		{ "IF", 266 },
		{ "ELSE", 267 },
		{ "FOR", 268 },
		{ "WHILE", 269 },
		{ "CIN", 270 },
		{ "COUT", 271 },
		{ "RETURN", 272 },
		{ "ASSIGN", 273 },
		{ "LT", 274 },
		{ "LE", 275 },
		{ "EQ", 276 },
		{ "GT", 277 },
		{ "GE", 278 },
		{ "NEQ", 279 },
		{ "PLUS", 280 },
		{ "MINUS", 281 },
		{ "MUL", 282 },
		{ "DIV", 283 },
		{ "MOD", 284 },
		{ "INC", 285 },
		{ "DEC", 286 },
		{ "NOT", 290 },
		{ "SHL", 291 },
		{ "SHR", 292 },
		{ "AND", 293 },
		{ "OR", 294 },
		{ "LBRACE", 296 },
		{ "RBRACE", 297 },
		{ "LPRACE", 298 },
		{ "RPRACE", 299 },
		{ "COMMA", 302 },
		{ "SIMICOLON", 303 },
		{ "SQUITO", 305 },
		{ "UMINUS", 309 },
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
		"program: FLOAT MAIN LPRACE VOID RPRACE comp_stmt",
		"program: FLOAT MAIN LPRACE RPRACE comp_stmt",
		"program: DOUBLE MAIN LPRACE VOID RPRACE comp_stmt",
		"program: DOUBLE MAIN LPRACE RPRACE comp_stmt",
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
		"stmt: return_stmt",
		"var_dec: type_spec idlist SIMICOLON",
		"type_spec: INT",
		"type_spec: CHAR",
		"type_spec: FLOAT",
		"type_spec: DOUBLE",
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
		"return_stmt: RETURN NUMBER",
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
		{ 1, 6, 8 },
		{ 1, 5, 9 },
		{ 1, 6, 10 },
		{ 1, 5, 11 },
		{ 2, 3, 12 },
		{ 2, 2, 13 },
		{ 3, 2, 14 },
		{ 3, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 4, 1, 20 },
		{ 4, 1, 21 },
		{ 4, 1, 22 },
		{ 4, 1, 23 },
		{ 4, 1, 24 },
		{ 5, 3, 25 },
		{ 6, 1, 26 },
		{ 6, 1, 27 },
		{ 6, 1, 28 },
		{ 6, 1, 29 },
		{ 7, 3, 30 },
		{ 7, 3, 31 },
		{ 7, 1, 32 },
		{ 7, 1, 33 },
		{ 8, 1, 34 },
		{ 9, 7, 35 },
		{ 9, 5, 36 },
		{ 10, 7, 37 },
		{ 10, 6, 38 },
		{ 11, 5, 39 },
		{ 12, 4, 40 },
		{ 13, 3, 41 },
		{ 13, 1, 42 },
		{ 14, 4, 43 },
		{ 15, 2, 44 },
		{ 16, 3, 45 },
		{ 16, 1, 46 },
		{ 17, 2, 47 },
		{ 17, 1, 48 },
		{ 18, 3, 49 },
		{ 18, 5, 50 },
		{ 18, 1, 51 },
		{ 19, 3, 52 },
		{ 19, 1, 53 },
		{ 20, 3, 54 },
		{ 20, 1, 55 },
		{ 21, 3, 56 },
		{ 21, 3, 57 },
		{ 21, 1, 58 },
		{ 22, 3, 59 },
		{ 22, 3, 60 },
		{ 22, 3, 61 },
		{ 22, 3, 62 },
		{ 22, 3, 63 },
		{ 22, 3, 64 },
		{ 22, 1, 65 },
		{ 23, 3, 66 },
		{ 23, 3, 67 },
		{ 23, 2, 68 },
		{ 23, 2, 69 },
		{ 23, 2, 70 },
		{ 23, 1, 71 },
		{ 24, 3, 72 },
		{ 24, 3, 73 },
		{ 24, 3, 74 },
		{ 24, 1, 75 },
		{ 25, 3, 76 },
		{ 25, 1, 77 },
		{ 25, 1, 78 },
		{ 25, 1, 79 },
		{ 25, 2, 80 }
	};
	yyreduction = reduction;

	yytokenaction_size = 150;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 169, YYAT_SHIFT, 45 },
		{ 169, YYAT_SHIFT, 46 },
		{ 18, YYAT_SHIFT, 29 },
		{ 169, YYAT_SHIFT, 47 },
		{ 169, YYAT_SHIFT, 48 },
		{ 154, YYAT_SHIFT, 49 },
		{ 154, YYAT_SHIFT, 50 },
		{ 154, YYAT_SHIFT, 51 },
		{ 17, YYAT_SHIFT, 27 },
		{ 169, YYAT_SHIFT, 52 },
		{ 16, YYAT_SHIFT, 25 },
		{ 169, YYAT_SHIFT, 53 },
		{ 169, YYAT_SHIFT, 54 },
		{ 169, YYAT_SHIFT, 55 },
		{ 169, YYAT_SHIFT, 56 },
		{ 169, YYAT_SHIFT, 57 },
		{ 15, YYAT_SHIFT, 23 },
		{ 14, YYAT_SHIFT, 21 },
		{ 13, YYAT_SHIFT, 19 },
		{ 165, YYAT_SHIFT, 154 },
		{ 134, YYAT_SHIFT, 112 },
		{ 134, YYAT_SHIFT, 113 },
		{ 158, YYAT_SHIFT, 101 },
		{ 154, YYAT_SHIFT, 58 },
		{ 102, YYAT_SHIFT, 101 },
		{ 138, YYAT_SHIFT, 114 },
		{ 138, YYAT_SHIFT, 115 },
		{ 138, YYAT_SHIFT, 116 },
		{ 138, YYAT_SHIFT, 117 },
		{ 138, YYAT_SHIFT, 118 },
		{ 138, YYAT_SHIFT, 119 },
		{ 165, YYAT_SHIFT, 155 },
		{ 154, YYAT_SHIFT, 59 },
		{ 137, YYAT_SHIFT, 114 },
		{ 137, YYAT_SHIFT, 115 },
		{ 137, YYAT_SHIFT, 116 },
		{ 137, YYAT_SHIFT, 117 },
		{ 137, YYAT_SHIFT, 118 },
		{ 137, YYAT_SHIFT, 119 },
		{ 169, YYAT_SHIFT, 32 },
		{ 154, YYAT_SHIFT, 61 },
		{ 162, YYAT_SHIFT, 169 },
		{ 18, YYAT_SHIFT, 30 },
		{ 160, YYAT_SHIFT, 167 },
		{ 164, YYAT_SHIFT, 151 },
		{ 136, YYAT_SHIFT, 120 },
		{ 136, YYAT_SHIFT, 121 },
		{ 136, YYAT_SHIFT, 122 },
		{ 17, YYAT_SHIFT, 28 },
		{ 157, YYAT_SHIFT, 166 },
		{ 16, YYAT_SHIFT, 26 },
		{ 158, YYAT_REDUCE, 31 },
		{ 158, YYAT_REDUCE, 31 },
		{ 102, YYAT_REDUCE, 33 },
		{ 102, YYAT_REDUCE, 33 },
		{ 164, YYAT_SHIFT, 152 },
		{ 15, YYAT_SHIFT, 24 },
		{ 14, YYAT_SHIFT, 22 },
		{ 13, YYAT_SHIFT, 20 },
		{ 82, YYAT_SHIFT, 114 },
		{ 82, YYAT_SHIFT, 115 },
		{ 82, YYAT_SHIFT, 116 },
		{ 82, YYAT_SHIFT, 117 },
		{ 82, YYAT_SHIFT, 118 },
		{ 82, YYAT_SHIFT, 119 },
		{ 0, YYAT_SHIFT, 1 },
		{ 0, YYAT_SHIFT, 2 },
		{ 0, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 4 },
		{ 0, YYAT_SHIFT, 5 },
		{ 0, YYAT_SHIFT, 6 },
		{ 144, YYAT_SHIFT, 108 },
		{ 144, YYAT_SHIFT, 109 },
		{ 143, YYAT_SHIFT, 108 },
		{ 143, YYAT_SHIFT, 109 },
		{ 149, YYAT_SHIFT, 161 },
		{ 144, YYAT_SHIFT, 110 },
		{ 144, YYAT_SHIFT, 111 },
		{ 143, YYAT_SHIFT, 110 },
		{ 143, YYAT_SHIFT, 111 },
		{ 142, YYAT_SHIFT, 108 },
		{ 142, YYAT_SHIFT, 109 },
		{ 141, YYAT_SHIFT, 108 },
		{ 141, YYAT_SHIFT, 109 },
		{ 133, YYAT_SHIFT, 107 },
		{ 142, YYAT_SHIFT, 110 },
		{ 142, YYAT_SHIFT, 111 },
		{ 141, YYAT_SHIFT, 110 },
		{ 141, YYAT_SHIFT, 111 },
		{ 140, YYAT_SHIFT, 108 },
		{ 140, YYAT_SHIFT, 109 },
		{ 139, YYAT_SHIFT, 108 },
		{ 139, YYAT_SHIFT, 109 },
		{ 125, YYAT_SHIFT, 150 },
		{ 140, YYAT_SHIFT, 110 },
		{ 140, YYAT_SHIFT, 111 },
		{ 139, YYAT_SHIFT, 110 },
		{ 139, YYAT_SHIFT, 111 },
		{ 79, YYAT_SHIFT, 108 },
		{ 79, YYAT_SHIFT, 109 },
		{ 135, YYAT_SHIFT, 120 },
		{ 135, YYAT_SHIFT, 121 },
		{ 135, YYAT_SHIFT, 122 },
		{ 79, YYAT_SHIFT, 110 },
		{ 79, YYAT_SHIFT, 111 },
		{ 83, YYAT_SHIFT, 120 },
		{ 83, YYAT_SHIFT, 121 },
		{ 83, YYAT_SHIFT, 122 },
		{ 104, YYAT_SHIFT, 131 },
		{ 104, YYAT_SHIFT, 132 },
		{ 96, YYAT_SHIFT, 110 },
		{ 96, YYAT_SHIFT, 111 },
		{ 80, YYAT_SHIFT, 112 },
		{ 80, YYAT_SHIFT, 113 },
		{ 124, YYAT_SHIFT, 62 },
		{ 123, YYAT_SHIFT, 148 },
		{ 122, YYAT_ERROR, 0 },
		{ 101, YYAT_SHIFT, 129 },
		{ 98, YYAT_SHIFT, 128 },
		{ 78, YYAT_SHIFT, 107 },
		{ 77, YYAT_SHIFT, 106 },
		{ 73, YYAT_SHIFT, 105 },
		{ 69, YYAT_SHIFT, 101 },
		{ 64, YYAT_SHIFT, 99 },
		{ 57, YYAT_SHIFT, 94 },
		{ 56, YYAT_SHIFT, 93 },
		{ 55, YYAT_SHIFT, 92 },
		{ 54, YYAT_SHIFT, 91 },
		{ 53, YYAT_SHIFT, 90 },
		{ 52, YYAT_SHIFT, 89 },
		{ 42, YYAT_SHIFT, 32 },
		{ 32, YYAT_SHIFT, 60 },
		{ 29, YYAT_SHIFT, 42 },
		{ 27, YYAT_SHIFT, 40 },
		{ 25, YYAT_SHIFT, 38 },
		{ 23, YYAT_SHIFT, 36 },
		{ 21, YYAT_SHIFT, 34 },
		{ 19, YYAT_SHIFT, 31 },
		{ 12, YYAT_SHIFT, 18 },
		{ 11, YYAT_SHIFT, 17 },
		{ 10, YYAT_SHIFT, 16 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 14 },
		{ 7, YYAT_ACCEPT, 0 },
		{ 6, YYAT_SHIFT, 13 },
		{ 5, YYAT_SHIFT, 12 },
		{ 4, YYAT_SHIFT, 11 },
		{ 3, YYAT_SHIFT, 10 },
		{ 2, YYAT_SHIFT, 9 },
		{ 1, YYAT_SHIFT, 8 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -192, 1, YYAT_ERROR, 0 },
		{ -113, 1, YYAT_ERROR, 0 },
		{ -114, 1, YYAT_ERROR, 0 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ -116, 1, YYAT_ERROR, 0 },
		{ -117, 1, YYAT_ERROR, 0 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ 143, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -157, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -159, 1, YYAT_ERROR, 0 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -241, 1, YYAT_ERROR, 0 },
		{ -242, 1, YYAT_ERROR, 0 },
		{ -243, 1, YYAT_ERROR, 0 },
		{ -249, 1, YYAT_ERROR, 0 },
		{ -251, 1, YYAT_ERROR, 0 },
		{ -257, 1, YYAT_ERROR, 0 },
		{ -162, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -163, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -164, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -165, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -166, 1, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ -169, 1, YYAT_ERROR, 0 },
		{ -170, 1, YYAT_ERROR, 0 },
		{ -171, 1, YYAT_ERROR, 0 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ -140, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ -174, 1, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -151, 1, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ -182, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ -174, 1, YYAT_REDUCE, 52 },
		{ -174, 1, YYAT_REDUCE, 54 },
		{ -182, 1, YYAT_REDUCE, 66 },
		{ -179, 1, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ -215, 1, YYAT_REDUCE, 59 },
		{ -177, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 124 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ -175, 1, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ -181, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -188, 1, YYAT_DEFAULT, 154 },
		{ -249, 1, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -194, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ -165, 1, YYAT_DEFAULT, 154 },
		{ -184, 1, YYAT_ERROR, 0 },
		{ -189, 1, YYAT_DEFAULT, 154 },
		{ -206, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 164 },
		{ 0, 0, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ -209, 1, YYAT_REDUCE, 53 },
		{ -271, 1, YYAT_REDUCE, 55 },
		{ -182, 1, YYAT_REDUCE, 67 },
		{ -237, 1, YYAT_REDUCE, 68 },
		{ -241, 1, YYAT_REDUCE, 57 },
		{ -249, 1, YYAT_REDUCE, 58 },
		{ -189, 1, YYAT_REDUCE, 61 },
		{ -191, 1, YYAT_REDUCE, 63 },
		{ -198, 1, YYAT_REDUCE, 60 },
		{ -200, 1, YYAT_REDUCE, 62 },
		{ -207, 1, YYAT_REDUCE, 64 },
		{ -209, 1, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ -224, 1, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_DEFAULT, 154 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ -258, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -256, 1, YYAT_ERROR, 0 },
		{ -251, 1, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ -224, 1, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ -258, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ -248, 1, YYAT_ERROR, 0 },
		{ -272, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -257, 1, YYAT_DEFAULT, 124 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 38 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 79;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 169, 63 },
		{ 131, 158 },
		{ 169, 173 },
		{ 169, 71 },
		{ 169, 72 },
		{ 122, 95 },
		{ 154, 69 },
		{ 169, 74 },
		{ 169, 70 },
		{ 169, 66 },
		{ 169, 68 },
		{ 131, 159 },
		{ 169, 76 },
		{ 169, 67 },
		{ 167, 172 },
		{ 169, 75 },
		{ 154, 165 },
		{ 154, 77 },
		{ 154, 78 },
		{ 72, 104 },
		{ 72, 102 },
		{ 165, 171 },
		{ 122, 147 },
		{ 124, 149 },
		{ 124, 73 },
		{ 119, 144 },
		{ 119, 83 },
		{ 113, 138 },
		{ 113, 79 },
		{ 164, 170 },
		{ 72, 103 },
		{ 109, 136 },
		{ 109, 81 },
		{ 107, 134 },
		{ 107, 82 },
		{ 106, 133 },
		{ 106, 80 },
		{ 32, 64 },
		{ 32, 65 },
		{ 161, 168 },
		{ 151, 164 },
		{ 150, 163 },
		{ 149, 162 },
		{ 148, 160 },
		{ 129, 157 },
		{ 127, 156 },
		{ 126, 153 },
		{ 121, 146 },
		{ 120, 145 },
		{ 118, 143 },
		{ 117, 142 },
		{ 116, 141 },
		{ 115, 140 },
		{ 114, 139 },
		{ 112, 137 },
		{ 108, 135 },
		{ 101, 130 },
		{ 93, 127 },
		{ 92, 126 },
		{ 91, 125 },
		{ 90, 124 },
		{ 89, 123 },
		{ 64, 100 },
		{ 61, 98 },
		{ 59, 97 },
		{ 58, 96 },
		{ 42, 88 },
		{ 40, 87 },
		{ 38, 86 },
		{ 36, 85 },
		{ 34, 84 },
		{ 31, 44 },
		{ 30, 43 },
		{ 28, 41 },
		{ 26, 39 },
		{ 24, 37 },
		{ 22, 35 },
		{ 20, 33 },
		{ 0, 7 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 77, -1 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 75, -1 },
		{ 0, -1 },
		{ 74, -1 },
		{ 0, -1 },
		{ 73, -1 },
		{ 0, -1 },
		{ 72, -1 },
		{ 0, -1 },
		{ 71, -1 },
		{ 0, -1 },
		{ 70, -1 },
		{ 69, -1 },
		{ 34, 169 },
		{ 0, -1 },
		{ 68, -1 },
		{ 0, -1 },
		{ 67, -1 },
		{ 0, -1 },
		{ 66, -1 },
		{ 0, -1 },
		{ 65, -1 },
		{ 0, -1 },
		{ 64, -1 },
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
		{ 42, 119 },
		{ 39, 122 },
		{ 0, -1 },
		{ 45, 154 },
		{ 0, -1 },
		{ 0, -1 },
		{ 58, 169 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 154 },
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
		{ 43, 154 },
		{ 43, 124 },
		{ 41, 154 },
		{ 40, 154 },
		{ 39, 154 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 38, 154 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 15, 107 },
		{ 12, 113 },
		{ 31, 109 },
		{ 7, 122 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, 113 },
		{ 5, 119 },
		{ 30, 119 },
		{ 29, 119 },
		{ 28, 119 },
		{ 27, 119 },
		{ 26, 119 },
		{ 2, 109 },
		{ 23, 122 },
		{ 22, 122 },
		{ -3, -1 },
		{ 0, -1 },
		{ 6, 154 },
		{ 0, -1 },
		{ 33, -1 },
		{ 29, -1 },
		{ 0, -1 },
		{ 26, 154 },
		{ 0, -1 },
		{ -7, 154 },
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
		{ 39, 169 },
		{ 24, 154 },
		{ 37, 169 },
		{ 22, 154 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 106 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 169 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, -1 },
		{ 5, -1 },
		{ 0, -1 },
		{ 10, 169 },
		{ 0, -1 },
		{ -2, 124 },
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
#line 474 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
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


