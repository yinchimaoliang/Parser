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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/20/18
* Time: 07:46:33
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
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 308 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,OUTPUT_STMT,0,Notype,yyattribute(2 - 2),NULL,NULL,NULL);
                  
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

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(STMT,OUTPUT_STMT,0,Notype,yyattribute(2 - 3),yyattribute(3 - 3),NULL,NULL);
                  
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
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 336 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 980 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 341 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,OR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
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
#line 345 ".\\myparser.y"

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

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,AND,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
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
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 359 ".\\myparser.y"

                     (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHL,Notype,yyattribute(2 - 5),yyattribute(4 - 5),NULL,NULL); 
                   
#line 1055 "myparser.cpp"
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
#line 363 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 1070 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 367 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                   
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

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1100 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 376 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,yyattribute(1 - 5),yyattribute(4 - 5),NULL,NULL);
                  
#line 1115 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 380 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1130 "myparser.cpp"
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

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,OR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
#line 1145 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 390 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1160 "myparser.cpp"
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
#line 395 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,AND,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                  
#line 1175 "myparser.cpp"
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
                  
#line 1190 "myparser.cpp"
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

                     (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHL,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 1205 "myparser.cpp"
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

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,SHR,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL); 
                   
#line 1220 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 412 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                   
#line 1235 "myparser.cpp"
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
#line 417 ".\\myparser.y"

                    
                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,EQ,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
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
#line 422 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,LT,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1266 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 426 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,GT,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1281 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 430 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,LE,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1296 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 434 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,GE,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
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
#line 438 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,NEQ,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1326 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 442 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1); 
                  
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
#line 447 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,PLUS,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1356 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 451 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MINUS,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1371 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 455 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MINUS,Notype,yyattribute(2 - 2),NULL,NULL,NULL);
                  
#line 1386 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 459 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,INC,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
#line 1401 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 463 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,DEC,Notype,yyattribute(1 - 2),NULL,NULL,NULL);
                  
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
#line 467 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1431 "myparser.cpp"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 472 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MUL,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1446 "myparser.cpp"
			}
		}
		break;
	case 81:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 476 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,DIV,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1461 "myparser.cpp"
			}
		}
		break;
	case 82:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 480 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,OP_EXPR,MOD,Notype,yyattribute(1 - 3),yyattribute(3 - 3),NULL,NULL);
                  
#line 1476 "myparser.cpp"
			}
		}
		break;
	case 83:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 484 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                  
#line 1491 "myparser.cpp"
			}
		}
		break;
	case 84:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 489 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
                 
#line 1506 "myparser.cpp"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 493 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
                 
#line 1521 "myparser.cpp"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 497 ".\\myparser.y"

				  (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.val,Number,NULL,NULL,NULL,NULL);
                 
#line 1536 "myparser.cpp"
			}
		}
		break;
	case 87:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 501 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.valc,Char,NULL,NULL,NULL,NULL);
                 
#line 1551 "myparser.cpp"
			}
		}
		break;
	case 88:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 505 ".\\myparser.y"

                   (*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR, NOT_EXPR, NOT, Notype, yyattribute(2 - 2),NULL,NULL,NULL);
                 
#line 1566 "myparser.cpp"
			}
		}
		break;
	case 89:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 509 ".\\myparser.y"

					(*(YYSTYPE YYFAR*)yyvalptr)=my.createnode(EXPR,CONST_EXPR,yyattribute(1 - 1)->attr.vals,String,NULL,NULL,NULL,NULL);
				 
#line 1581 "myparser.cpp"
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
		{ "STRING", 263 },
		{ "ID", 264 },
		{ "NUMBER", 265 },
		{ "CONSTCHAR", 266 },
		{ "IF", 267 },
		{ "ELSE", 268 },
		{ "FOR", 269 },
		{ "WHILE", 270 },
		{ "CIN", 271 },
		{ "COUT", 272 },
		{ "RETURN", 273 },
		{ "ASSIGN", 274 },
		{ "LT", 275 },
		{ "LE", 276 },
		{ "EQ", 277 },
		{ "GT", 278 },
		{ "GE", 279 },
		{ "NEQ", 280 },
		{ "PLUS", 281 },
		{ "MINUS", 282 },
		{ "MUL", 283 },
		{ "DIV", 284 },
		{ "MOD", 285 },
		{ "INC", 286 },
		{ "DEC", 287 },
		{ "NOT", 291 },
		{ "SHL", 292 },
		{ "SHR", 293 },
		{ "AND", 294 },
		{ "OR", 295 },
		{ "LBRACE", 297 },
		{ "RBRACE", 298 },
		{ "LPRACE", 299 },
		{ "RPRACE", 300 },
		{ "COMMA", 303 },
		{ "SIMICOLON", 304 },
		{ "SQUITO", 306 },
		{ "UMINUS", 310 },
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
		"output_stmt: COUT output_child",
		"return_stmt: RETURN simple_exp",
		"output_child: SHL output_exp output_child",
		"output_child: SIMICOLON",
		"exp_stmt: exp SIMICOLON",
		"exp_stmt: SIMICOLON",
		"output_exp: output_or_exp",
		"output_or_exp: output_or_exp OR output_and_exp",
		"output_or_exp: output_and_exp",
		"output_and_exp: output_and_exp AND output_shift_exp",
		"output_and_exp: output_shift_exp",
		"output_shift_exp: LBRACE shift_exp SHL rel_exp RBRACE",
		"output_shift_exp: shift_exp SHR rel_exp",
		"output_shift_exp: rel_exp",
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
		"factor: NOT factor",
		"factor: STRING"
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
		{ 14, 2, 43 },
		{ 15, 2, 44 },
		{ 16, 3, 45 },
		{ 16, 1, 46 },
		{ 17, 2, 47 },
		{ 17, 1, 48 },
		{ 18, 1, 49 },
		{ 19, 3, 50 },
		{ 19, 1, 51 },
		{ 20, 3, 52 },
		{ 20, 1, 53 },
		{ 21, 5, 54 },
		{ 21, 3, 55 },
		{ 21, 1, 56 },
		{ 22, 3, 57 },
		{ 22, 5, 58 },
		{ 22, 1, 59 },
		{ 23, 3, 60 },
		{ 23, 1, 61 },
		{ 24, 3, 62 },
		{ 24, 1, 63 },
		{ 25, 3, 64 },
		{ 25, 3, 65 },
		{ 25, 1, 66 },
		{ 26, 3, 67 },
		{ 26, 3, 68 },
		{ 26, 3, 69 },
		{ 26, 3, 70 },
		{ 26, 3, 71 },
		{ 26, 3, 72 },
		{ 26, 1, 73 },
		{ 27, 3, 74 },
		{ 27, 3, 75 },
		{ 27, 2, 76 },
		{ 27, 2, 77 },
		{ 27, 2, 78 },
		{ 27, 1, 79 },
		{ 28, 3, 80 },
		{ 28, 3, 81 },
		{ 28, 3, 82 },
		{ 28, 1, 83 },
		{ 29, 3, 84 },
		{ 29, 1, 85 },
		{ 29, 1, 86 },
		{ 29, 1, 87 },
		{ 29, 2, 88 },
		{ 29, 1, 89 }
	};
	yyreduction = reduction;

	yytokenaction_size = 182;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 183, YYAT_SHIFT, 45 },
		{ 183, YYAT_SHIFT, 46 },
		{ 18, YYAT_SHIFT, 29 },
		{ 183, YYAT_SHIFT, 47 },
		{ 183, YYAT_SHIFT, 48 },
		{ 176, YYAT_SHIFT, 49 },
		{ 176, YYAT_SHIFT, 50 },
		{ 176, YYAT_SHIFT, 51 },
		{ 176, YYAT_SHIFT, 52 },
		{ 17, YYAT_SHIFT, 27 },
		{ 183, YYAT_SHIFT, 53 },
		{ 16, YYAT_SHIFT, 25 },
		{ 183, YYAT_SHIFT, 54 },
		{ 183, YYAT_SHIFT, 55 },
		{ 183, YYAT_SHIFT, 56 },
		{ 183, YYAT_SHIFT, 57 },
		{ 183, YYAT_SHIFT, 58 },
		{ 15, YYAT_SHIFT, 23 },
		{ 14, YYAT_SHIFT, 21 },
		{ 13, YYAT_SHIFT, 19 },
		{ 132, YYAT_SHIFT, 94 },
		{ 143, YYAT_SHIFT, 114 },
		{ 143, YYAT_SHIFT, 115 },
		{ 143, YYAT_SHIFT, 116 },
		{ 176, YYAT_SHIFT, 59 },
		{ 185, YYAT_SHIFT, 117 },
		{ 185, YYAT_SHIFT, 118 },
		{ 185, YYAT_SHIFT, 119 },
		{ 185, YYAT_SHIFT, 120 },
		{ 185, YYAT_SHIFT, 121 },
		{ 185, YYAT_SHIFT, 122 },
		{ 175, YYAT_SHIFT, 160 },
		{ 132, YYAT_SHIFT, 95 },
		{ 176, YYAT_SHIFT, 60 },
		{ 155, YYAT_SHIFT, 117 },
		{ 155, YYAT_SHIFT, 118 },
		{ 155, YYAT_SHIFT, 119 },
		{ 155, YYAT_SHIFT, 120 },
		{ 155, YYAT_SHIFT, 121 },
		{ 155, YYAT_SHIFT, 122 },
		{ 183, YYAT_SHIFT, 32 },
		{ 176, YYAT_SHIFT, 62 },
		{ 175, YYAT_SHIFT, 161 },
		{ 18, YYAT_SHIFT, 30 },
		{ 169, YYAT_SHIFT, 108 },
		{ 177, YYAT_SHIFT, 166 },
		{ 106, YYAT_SHIFT, 108 },
		{ 173, YYAT_SHIFT, 183 },
		{ 185, YYAT_SHIFT, 188 },
		{ 171, YYAT_SHIFT, 181 },
		{ 17, YYAT_SHIFT, 28 },
		{ 170, YYAT_SHIFT, 180 },
		{ 16, YYAT_SHIFT, 26 },
		{ 142, YYAT_SHIFT, 114 },
		{ 142, YYAT_SHIFT, 115 },
		{ 142, YYAT_SHIFT, 116 },
		{ 163, YYAT_SHIFT, 176 },
		{ 163, YYAT_SHIFT, 124 },
		{ 15, YYAT_SHIFT, 24 },
		{ 14, YYAT_SHIFT, 22 },
		{ 13, YYAT_SHIFT, 20 },
		{ 179, YYAT_SHIFT, 117 },
		{ 179, YYAT_SHIFT, 118 },
		{ 179, YYAT_SHIFT, 119 },
		{ 179, YYAT_SHIFT, 120 },
		{ 179, YYAT_SHIFT, 121 },
		{ 179, YYAT_SHIFT, 122 },
		{ 135, YYAT_SHIFT, 117 },
		{ 135, YYAT_SHIFT, 118 },
		{ 135, YYAT_SHIFT, 119 },
		{ 135, YYAT_SHIFT, 120 },
		{ 135, YYAT_SHIFT, 121 },
		{ 135, YYAT_SHIFT, 122 },
		{ 169, YYAT_REDUCE, 31 },
		{ 169, YYAT_REDUCE, 31 },
		{ 106, YYAT_REDUCE, 33 },
		{ 106, YYAT_REDUCE, 33 },
		{ 153, YYAT_SHIFT, 109 },
		{ 153, YYAT_SHIFT, 110 },
		{ 179, YYAT_REDUCE, 66 },
		{ 156, YYAT_SHIFT, 123 },
		{ 156, YYAT_SHIFT, 124 },
		{ 153, YYAT_SHIFT, 111 },
		{ 153, YYAT_SHIFT, 112 },
		{ 166, YYAT_SHIFT, 130 },
		{ 135, YYAT_REDUCE, 67 },
		{ 154, YYAT_SHIFT, 117 },
		{ 154, YYAT_SHIFT, 118 },
		{ 154, YYAT_SHIFT, 119 },
		{ 154, YYAT_SHIFT, 120 },
		{ 154, YYAT_SHIFT, 121 },
		{ 154, YYAT_SHIFT, 122 },
		{ 82, YYAT_SHIFT, 117 },
		{ 82, YYAT_SHIFT, 118 },
		{ 82, YYAT_SHIFT, 119 },
		{ 82, YYAT_SHIFT, 120 },
		{ 82, YYAT_SHIFT, 121 },
		{ 82, YYAT_SHIFT, 122 },
		{ 0, YYAT_SHIFT, 1 },
		{ 0, YYAT_SHIFT, 2 },
		{ 0, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 4 },
		{ 0, YYAT_SHIFT, 5 },
		{ 0, YYAT_SHIFT, 6 },
		{ 152, YYAT_SHIFT, 109 },
		{ 152, YYAT_SHIFT, 110 },
		{ 151, YYAT_SHIFT, 109 },
		{ 151, YYAT_SHIFT, 110 },
		{ 158, YYAT_SHIFT, 172 },
		{ 152, YYAT_SHIFT, 111 },
		{ 152, YYAT_SHIFT, 112 },
		{ 151, YYAT_SHIFT, 111 },
		{ 151, YYAT_SHIFT, 112 },
		{ 150, YYAT_SHIFT, 109 },
		{ 150, YYAT_SHIFT, 110 },
		{ 149, YYAT_SHIFT, 109 },
		{ 149, YYAT_SHIFT, 110 },
		{ 144, YYAT_SHIFT, 125 },
		{ 150, YYAT_SHIFT, 111 },
		{ 150, YYAT_SHIFT, 112 },
		{ 149, YYAT_SHIFT, 111 },
		{ 149, YYAT_SHIFT, 112 },
		{ 148, YYAT_SHIFT, 109 },
		{ 148, YYAT_SHIFT, 110 },
		{ 98, YYAT_SHIFT, 109 },
		{ 98, YYAT_SHIFT, 110 },
		{ 133, YYAT_SHIFT, 166 },
		{ 148, YYAT_SHIFT, 111 },
		{ 148, YYAT_SHIFT, 112 },
		{ 98, YYAT_SHIFT, 111 },
		{ 98, YYAT_SHIFT, 112 },
		{ 76, YYAT_SHIFT, 109 },
		{ 76, YYAT_SHIFT, 110 },
		{ 80, YYAT_SHIFT, 114 },
		{ 80, YYAT_SHIFT, 115 },
		{ 80, YYAT_SHIFT, 116 },
		{ 76, YYAT_SHIFT, 111 },
		{ 76, YYAT_SHIFT, 112 },
		{ 136, YYAT_SHIFT, 123 },
		{ 136, YYAT_SHIFT, 167 },
		{ 104, YYAT_SHIFT, 138 },
		{ 104, YYAT_SHIFT, 139 },
		{ 99, YYAT_SHIFT, 111 },
		{ 99, YYAT_SHIFT, 112 },
		{ 83, YYAT_SHIFT, 123 },
		{ 83, YYAT_SHIFT, 124 },
		{ 131, YYAT_SHIFT, 164 },
		{ 128, YYAT_SHIFT, 159 },
		{ 127, YYAT_SHIFT, 63 },
		{ 126, YYAT_SHIFT, 157 },
		{ 116, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 140 },
		{ 101, YYAT_SHIFT, 137 },
		{ 84, YYAT_SHIFT, 125 },
		{ 79, YYAT_SHIFT, 113 },
		{ 75, YYAT_SHIFT, 108 },
		{ 72, YYAT_SHIFT, 107 },
		{ 65, YYAT_SHIFT, 102 },
		{ 56, YYAT_SHIFT, 93 },
		{ 55, YYAT_SHIFT, 92 },
		{ 54, YYAT_SHIFT, 91 },
		{ 53, YYAT_SHIFT, 90 },
		{ 42, YYAT_SHIFT, 32 },
		{ 32, YYAT_SHIFT, 61 },
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
		{ -159, 1, YYAT_ERROR, 0 },
		{ -81, 1, YYAT_ERROR, 0 },
		{ -82, 1, YYAT_ERROR, 0 },
		{ -83, 1, YYAT_ERROR, 0 },
		{ -84, 1, YYAT_ERROR, 0 },
		{ -85, 1, YYAT_ERROR, 0 },
		{ -123, 1, YYAT_ERROR, 0 },
		{ 175, 1, YYAT_ERROR, 0 },
		{ -125, 1, YYAT_ERROR, 0 },
		{ -126, 1, YYAT_ERROR, 0 },
		{ -127, 1, YYAT_ERROR, 0 },
		{ -128, 1, YYAT_ERROR, 0 },
		{ -129, 1, YYAT_ERROR, 0 },
		{ -240, 1, YYAT_ERROR, 0 },
		{ -241, 1, YYAT_ERROR, 0 },
		{ -242, 1, YYAT_ERROR, 0 },
		{ -248, 1, YYAT_ERROR, 0 },
		{ -250, 1, YYAT_ERROR, 0 },
		{ -257, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -132, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -133, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -134, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -135, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -136, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ -135, 1, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 42 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ -135, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 0, 0, YYAT_REDUCE, 88 },
		{ -138, 1, YYAT_ERROR, 0 },
		{ -139, 1, YYAT_ERROR, 0 },
		{ -140, 1, YYAT_ERROR, 0 },
		{ -135, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 132 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ -141, 1, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ -119, 1, YYAT_REDUCE, 86 },
		{ -150, 1, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -141, 1, YYAT_REDUCE, 60 },
		{ -150, 1, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 84 },
		{ -183, 1, YYAT_REDUCE, 67 },
		{ -148, 1, YYAT_REDUCE, 64 },
		{ -141, 1, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 166 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ -157, 1, YYAT_REDUCE, 45 },
		{ -144, 1, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 89 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -163, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -228, 1, YYAT_REDUCE, 86 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -155, 1, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ -132, 1, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ -151, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_DEFAULT, 176 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 175 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ -149, 1, YYAT_REDUCE, 50 },
		{ -272, 1, YYAT_ERROR, 0 },
		{ -168, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -208, 1, YYAT_REDUCE, 57 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ -230, 1, YYAT_REDUCE, 75 },
		{ -262, 1, YYAT_REDUCE, 76 },
		{ -177, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 83 },
		{ -159, 1, YYAT_REDUCE, 69 },
		{ -166, 1, YYAT_REDUCE, 71 },
		{ -168, 1, YYAT_REDUCE, 68 },
		{ -175, 1, YYAT_REDUCE, 70 },
		{ -177, 1, YYAT_REDUCE, 72 },
		{ -204, 1, YYAT_REDUCE, 73 },
		{ -189, 1, YYAT_REDUCE, 65 },
		{ -241, 1, YYAT_REDUCE, 66 },
		{ -212, 1, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ -192, 1, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ -236, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 166 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ -213, 1, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_DEFAULT, 176 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ -230, 1, YYAT_REDUCE, 86 },
		{ -255, 1, YYAT_ERROR, 0 },
		{ -219, 1, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ -253, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ -258, 1, YYAT_ERROR, 0 },
		{ -249, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ -214, 1, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -257, 1, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ -250, 1, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 55 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 91;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 183, 64 },
		{ 116, 97 },
		{ 183, 187 },
		{ 183, 68 },
		{ 183, 67 },
		{ 160, 75 },
		{ 181, 186 },
		{ 183, 73 },
		{ 183, 78 },
		{ 183, 69 },
		{ 183, 77 },
		{ 138, 169 },
		{ 183, 70 },
		{ 183, 74 },
		{ 175, 184 },
		{ 183, 71 },
		{ 67, 104 },
		{ 67, 106 },
		{ 127, 158 },
		{ 160, 175 },
		{ 160, 79 },
		{ 160, 84 },
		{ 116, 147 },
		{ 127, 72 },
		{ 172, 182 },
		{ 138, 168 },
		{ 176, 185 },
		{ 176, 76 },
		{ 176, 80 },
		{ 176, 81 },
		{ 166, 178 },
		{ 67, 105 },
		{ 164, 177 },
		{ 164, 134 },
		{ 166, 136 },
		{ 166, 135 },
		{ 94, 132 },
		{ 94, 131 },
		{ 94, 133 },
		{ 130, 163 },
		{ 130, 82 },
		{ 122, -1 },
		{ 122, 153 },
		{ 113, 144 },
		{ 113, 83 },
		{ 110, -1 },
		{ 110, 143 },
		{ 32, 65 },
		{ 32, 66 },
		{ 167, 179 },
		{ 159, 174 },
		{ 158, 173 },
		{ 157, 171 },
		{ 140, 170 },
		{ 132, 165 },
		{ 129, 162 },
		{ 125, 156 },
		{ 124, 155 },
		{ 123, 154 },
		{ 121, 152 },
		{ 120, 151 },
		{ 119, 150 },
		{ 118, 149 },
		{ 117, 148 },
		{ 115, 146 },
		{ 114, 145 },
		{ 109, 142 },
		{ 108, 141 },
		{ 93, 129 },
		{ 92, 128 },
		{ 91, 127 },
		{ 90, 126 },
		{ 65, 103 },
		{ 62, 101 },
		{ 60, 100 },
		{ 59, 99 },
		{ 58, 98 },
		{ 57, 96 },
		{ 42, 89 },
		{ 40, 88 },
		{ 38, 87 },
		{ 36, 86 },
		{ 34, 85 },
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
		{ 89, -1 },
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
		{ 87, -1 },
		{ 0, -1 },
		{ 86, -1 },
		{ 0, -1 },
		{ 85, -1 },
		{ 0, -1 },
		{ 84, -1 },
		{ 0, -1 },
		{ 83, -1 },
		{ 0, -1 },
		{ 82, -1 },
		{ 81, -1 },
		{ 44, 183 },
		{ 0, -1 },
		{ 80, -1 },
		{ 0, -1 },
		{ 79, -1 },
		{ 0, -1 },
		{ 78, -1 },
		{ 0, -1 },
		{ 77, -1 },
		{ 0, -1 },
		{ 76, -1 },
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
		{ 61, -1 },
		{ 49, 122 },
		{ 48, 122 },
		{ 45, 116 },
		{ 0, -1 },
		{ 51, 160 },
		{ 0, -1 },
		{ 0, -1 },
		{ 68, 183 },
		{ 0, -1 },
		{ 9, 160 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 49, 160 },
		{ 53, 127 },
		{ 47, 160 },
		{ 46, 160 },
		{ 18, 164 },
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
		{ 45, 160 },
		{ 38, 110 },
		{ 18, 122 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, 130 },
		{ 36, 116 },
		{ 35, 116 },
		{ -7, -1 },
		{ 36, 122 },
		{ 35, 122 },
		{ 34, 122 },
		{ 33, 122 },
		{ 32, 122 },
		{ 15, 176 },
		{ 32, 176 },
		{ 31, 176 },
		{ 31, 130 },
		{ 0, -1 },
		{ 1, 160 },
		{ 0, -1 },
		{ 42, -1 },
		{ 14, 176 },
		{ 0, -1 },
		{ 38, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 3, 160 },
		{ 0, -1 },
		{ 31, 160 },
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
		{ 48, 183 },
		{ 29, 160 },
		{ 46, 183 },
		{ -3, 113 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 166 },
		{ 0, -1 },
		{ 9, 176 },
		{ 23, 176 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 183 },
		{ 0, -1 },
		{ 0, -1 },
		{ 1, -1 },
		{ 0, 116 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 2, 183 },
		{ 0, -1 },
		{ -2, 127 },
		{ 0, -1 },
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
#line 514 ".\\myparser.y"


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


