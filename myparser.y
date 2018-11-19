%{


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
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE TreeNode*
#endif
}

// place any declarations here
%token INT CHAR VOID FLOAT DOUBLE MAIN STRING
%token ID NUMBER CONSTCHAR
%token IF ELSE FOR WHILE CIN COUT RETURN
%token ASSIGN LT LE EQ GT GE NEQ
%token PLUS MINUS MUL DIV MOD INC DEC
%token INAD IOR XOR NOT SHL SHR
%token AND OR OPPOSITE
%token LBRACE RBRACE LPRACE RPRACE LSBRACE RSBRACE COMMA SIMICOLON COLON SQUITO NOTE LNOTE RNOTE

%left COMMA
%right ASSIGN
%left OR
%left AND
%left IOR
%left XOR
%left INAD 
%left EQ NEQ
%left LT LE GT GE
%left SHL SHR 
%left PLUS MINUS
%left MUL DIV MOD
%right UMINUS OPPOSITE NOT 
%left LSBRACE RSBRACE LPRACE RPRACE 


%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)

program     :MAIN LPRACE RPRACE comp_stmt
             {
               $$=$4;
             }
             |MAIN LPRACE VOID RPRACE comp_stmt
             {
               $$=$5;
             }
             |VOID MAIN LPRACE RPRACE comp_stmt
             {
              $$=$5;
             }
             |VOID MAIN LPRACE VOID RPRACE comp_stmt
             {
               $$=$6; 
             }
             |INT MAIN LPRACE VOID RPRACE comp_stmt
             {
               $$=$6; 
             }
             |INT MAIN LPRACE RPRACE comp_stmt
             {
               $$=$5; 
             }
             |CHAR MAIN LPRACE VOID RPRACE comp_stmt
             {
               $$=$6; 
             }
             |CHAR MAIN LPRACE RPRACE comp_stmt
             {
               $$=$5; 
             }
             |FLOAT MAIN LPRACE VOID RPRACE comp_stmt
             {
               $$=$6; 
             }
             |FLOAT MAIN LPRACE RPRACE comp_stmt
             {
               $$=$5; 
             }
             |DOUBLE MAIN LPRACE VOID RPRACE comp_stmt
             {
               $$=$6; 
             }
             |DOUBLE MAIN LPRACE RPRACE comp_stmt
             {
               $$=$5; 
             }
             ;
//�������
comp_stmt   :LBRACE stmt_list RBRACE
             {
               $$ = my.createnode(STMT, COMP_STMT, 0, Notype, $2,NULL,NULL,NULL);
             }
             |LBRACE RBRACE
             {
               $$=NULL;
             }
             ;
stmt_list   :stmt_list stmt
             {
              YYSTYPE t=$1;
               if(t!=NULL)
               {
                while(t->sibling!=NULL)
                   t=t->sibling;
                t->sibling=$2;
                $$=$1;
                 } 
                else
                 $$=$2;              
             }
             |stmt
             {
               $$=$1;
             }
             ;
stmt        :var_dec
             {
               $$=$1;
             }
             |exp_stmt
             {
              $$=$1;
             }
             |if_stmt
             {
               $$=$1;
             }
             |while_stmt
             {
               $$=$1;
             }
             |for_stmt
             {
               $$=$1;
             }
             |input_stmt
             {
               $$=$1;
             }
             |output_stmt
             {
              $$=$1;
             }
             |comp_stmt
             {
               $$=$1;
             }
             |return_stmt
             {
               $$=$1;
             }
             ;
var_dec      :type_spec idlist SIMICOLON
             {
              //ͬʱ������ID ����ͬ��������
              TreeNode *p;
              $$=my.createnode(DECL,VAR_DECL,0,Notype,$1,$2,NULL,NULL);
               for(p=$2;p!=NULL&&p->type==ID;p=p->sibling)
               { 
                 p->type=$1->type;
                 my.set_type(p->attr.symbol_add,p->type);
                 
               }
                
             }
             ;
type_spec    :INT
              {
                $$ = my.createnode(EXPR, TYPE_EXPR, 0, Integer,NULL,NULL,NULL,NULL);
              }
              |CHAR
              {
              $$ = my.createnode(EXPR, TYPE_EXPR, 0, Char,NULL,NULL,NULL,NULL);
              }
			  |FLOAT
              {
              $$ = my.createnode(EXPR, TYPE_EXPR, 0, Float,NULL,NULL,NULL,NULL);
              }
			  |DOUBLE
              {
              $$ = my.createnode(EXPR, TYPE_EXPR, 0, Double,NULL,NULL,NULL,NULL);
              }
              ; 
              
idlist        :idlist COMMA id
               { 
               //���ֵܽ�㴮����
                 YYSTYPE t=$1;
                 if(t!=NULL)
                 {
                   while(t->sibling!=NULL)
                     t=t->sibling;
                   t->sibling=$3;
                  $$=$1;
                 }
                 else 
                  $$=$3;
                 
               }
               |idlist COMMA exp
               {
                 YYSTYPE t=$1;
                 if(t!=NULL)
                 {
                  while(t->sibling!=NULL)
                     t=t->sibling;
                   t->sibling=$3;
                   $$=$1;
                  }
                  else 
                  $$=$3;
               }
               |id
               {
                 $$=$1;
               }
               |exp
               {
                 $$=$1;
               }
               ;
               
id             :ID 
                {
                 $$ =my.createnode(EXPR, ID_EXPR, $1->attr.symbol_add, $1->type,NULL,NULL,NULL,NULL);
                }
                ;
if_stmt        :IF LPRACE exp RPRACE stmt ELSE stmt
                {
                  $$=my.createnode(STMT,IF_STMT,0,Notype,$3,$5,$7,NULL);
                } 
                |IF LPRACE exp RPRACE stmt
                {
                  $$=my.createnode(STMT,IF_STMT,0,Notype,$3,$5,NULL,NULL);
                }
                ;
for_stmt        :FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt
                 {
                   $$=my.createnode(STMT,FOR_STMT,0,Notype,$3,$4,$5,$7);
                 }
                 |FOR LPRACE exp_stmt exp_stmt RPRACE stmt
                 {
                   $$=my.createnode(STMT,FOR_STMT,0,Notype,$3,$4,$6,NULL);
                 }
                 ;
while_stmt      :WHILE LPRACE exp RPRACE stmt
                 {
                   $$=my.createnode(STMT,WHILE_STMT,0,Notype,$3,$5,NULL,NULL);
                 }
                 ;
input_stmt      :CIN SHR exp input_child
                 {
                   $$=my.createnode(STMT,INPUT_STMT,0,Notype,$3,$4,NULL,NULL);
                 }
                 ;
input_child      :SHR exp input_child
                 {
                   $$=my.createnode(STMT,INPUT_STMT,0,Notype,$3,$4,NULL,NULL);
                 }
                 |SIMICOLON
                 {
                  $$=NULL;
                 }
                 ;
output_stmt      :COUT output_child
                  {
                   $$=my.createnode(STMT,OUTPUT_STMT,0,Notype,$2,NULL,NULL,NULL);
                  }
                  ;
return_stmt      :RETURN simple_exp
                  {
                   $$=my.createnode(STMT,RETURN_STMT,0,Notype,$2,NULL,NULL,NULL);
                  }
                  ;
output_child      :SHL output_exp output_child
                  {
                   $$=my.createnode(STMT,OUTPUT_STMT,0,Notype,$2,$3,NULL,NULL);
                  }
                  |SIMICOLON
                  {
                    $$=NULL;
                  }
                  ; 
exp_stmt         :exp SIMICOLON
                  {
                   $$=my.createnode(STMT,EXP_STMT,0,Notype,$1,NULL,NULL,NULL);
                  }
                  |SIMICOLON
                  {
                    $$=NULL;
                  }
                  ;
output_exp		 :output_or_exp
                  {
                   $$=$1;
                  }
				  ;
output_or_exp	 :output_or_exp OR output_and_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,OR,Notype,$1,$3,NULL,NULL); 
                  }
                  |output_and_exp
                  {
                    $$=$1;
                  }
                  ;
output_and_exp	 :output_and_exp AND output_shift_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,AND,Notype,$1,$3,NULL,NULL); 
                  }
                  |output_shift_exp
                  {
                   $$=$1;
                  }
                  ;
output_shift_exp :LBRACE shift_exp SHL rel_exp RBRACE
                   {
                     $$=my.createnode(EXPR,OP_EXPR,SHL,Notype,$2,$4,NULL,NULL); 
                   }
                   |shift_exp SHR rel_exp
                   {
                    $$=my.createnode(EXPR,OP_EXPR,SHR,Notype,$1,$3,NULL,NULL); 
                   }
                   |rel_exp
                   {
                   $$=$1;
                   }
                   ;
exp              :id ASSIGN exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,$1,$3,NULL,NULL);
                  }
                  |id ASSIGN SQUITO exp SQUITO
                  {
                    $$=my.createnode(EXPR,OP_EXPR,ASSIGN,Notype,$1,$4,NULL,NULL);
                  }
                  |or_exp
                  {
                   $$=$1;
                  }
                  
                  ;
or_exp           :or_exp OR and_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,OR,Notype,$1,$3,NULL,NULL); 
                  }
                  |and_exp
                  {
                    $$=$1;
                  }
                  ;
and_exp          :and_exp AND shift_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,AND,Notype,$1,$3,NULL,NULL); 
                  }
                  |shift_exp
                  {
                   $$=$1;
                  }
                  ;
shift_exp         :shift_exp SHL rel_exp
                   {
                     $$=my.createnode(EXPR,OP_EXPR,SHL,Notype,$1,$3,NULL,NULL); 
                   }
                   |shift_exp SHR rel_exp
                   {
                    $$=my.createnode(EXPR,OP_EXPR,SHR,Notype,$1,$3,NULL,NULL); 
                   }
                   |rel_exp
                   {
                   $$=$1;
                   }
                   ;
rel_exp          :rel_exp EQ simple_exp
                  {
                    
                    $$=my.createnode(EXPR,OP_EXPR,EQ,Notype,$1,$3,NULL,NULL);
                  }
                  |rel_exp LT simple_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,LT,Notype,$1,$3,NULL,NULL);
                  }
                  |rel_exp GT simple_exp
                  {
                   $$=my.createnode(EXPR,OP_EXPR,GT,Notype,$1,$3,NULL,NULL);
                  }
                  |rel_exp LE simple_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,LE,Notype,$1,$3,NULL,NULL);
                  }
                  |rel_exp GE simple_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,GE,Notype,$1,$3,NULL,NULL);
                  }
                  |rel_exp NEQ simple_exp
                  {
                    $$=my.createnode(EXPR,OP_EXPR,NEQ,Notype,$1,$3,NULL,NULL);
                  }
                  |simple_exp
                  {
                   $$=$1; 
                  }
                  ;
simple_exp       :simple_exp PLUS term
                  {
                    $$=my.createnode(EXPR,OP_EXPR,PLUS,Notype,$1,$3,NULL,NULL);
                  }
                  |simple_exp MINUS term
                  {
                   $$=my.createnode(EXPR,OP_EXPR,MINUS,Notype,$1,$3,NULL,NULL);
                  }
                  |MINUS simple_exp %prec UMINUS
                  {
                    $$=my.createnode(EXPR,OP_EXPR,MINUS,Notype,$2,NULL,NULL,NULL);
                  }
                  |simple_exp INC
                  {
                    $$=my.createnode(EXPR,OP_EXPR,INC,Notype,$1,NULL,NULL,NULL);
                  }
                  |simple_exp DEC 
                  {
                    $$=my.createnode(EXPR,OP_EXPR,DEC,Notype,$1,NULL,NULL,NULL);
                  }
                  |term
                  {
                    $$=$1;
                  }
                  ;
term             :term MUL factor
                  {
                    $$=my.createnode(EXPR,OP_EXPR,MUL,Notype,$1,$3,NULL,NULL);
                  }
                  |term DIV factor
                  {
                   $$=my.createnode(EXPR,OP_EXPR,DIV,Notype,$1,$3,NULL,NULL);
                  }
                  |term MOD factor
                  {
                    $$=my.createnode(EXPR,OP_EXPR,MOD,Notype,$1,$3,NULL,NULL);
                  }
                  |factor
                  {
                    $$=$1;
                  }
                  ;
factor           :LPRACE exp RPRACE
                 {
                   $$=$2;
                 }
                 |id
                 {
                   $$=$1;
                 }
                 |NUMBER
                 {
				  $$=my.createnode(EXPR,CONST_EXPR,$1->attr.val,Number,NULL,NULL,NULL,NULL);
                 }
                 |CONSTCHAR
                 {
                   $$=my.createnode(EXPR,CONST_EXPR,$1->attr.valc,Char,NULL,NULL,NULL,NULL);
                 }
                 |NOT factor
                 {
                   $$=my.createnode(EXPR, NOT_EXPR, NOT, Notype, $2,NULL,NULL,NULL);
                 }
				 |STRING
				 {
					$$=my.createnode(EXPR,CONST_EXPR,$1->attr.vals,String,NULL,NULL,NULL,NULL);
				 }
                 ;

%%

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

