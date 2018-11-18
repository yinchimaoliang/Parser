#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 55 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 11/18/18
# Time: 21:25:44
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : MAIN LPRACE RPRACE comp_stmt
    2          | MAIN LPRACE VOID RPRACE comp_stmt
    3          | VOID MAIN LPRACE RPRACE comp_stmt
    4          | VOID MAIN LPRACE VOID RPRACE comp_stmt
    5          | INT MAIN LPRACE VOID RPRACE comp_stmt
    6          | INT MAIN LPRACE RPRACE comp_stmt
    7          | CHAR MAIN LPRACE VOID RPRACE comp_stmt
    8          | CHAR MAIN LPRACE RPRACE comp_stmt
    9          | FLOAT MAIN LPRACE VOID RPRACE comp_stmt
   10          | FLOAT MAIN LPRACE RPRACE comp_stmt
   11          | DOUBLE MAIN LPRACE VOID RPRACE comp_stmt
   12          | DOUBLE MAIN LPRACE RPRACE comp_stmt

   13  comp_stmt : LBRACE stmt_list RBRACE
   14            | LBRACE RBRACE

   15  stmt_list : stmt_list stmt
   16            | stmt

   17  stmt : var_dec
   18       | exp_stmt
   19       | if_stmt
   20       | while_stmt
   21       | for_stmt
   22       | input_stmt
   23       | output_stmt
   24       | comp_stmt
   25       | return_stmt

   26  var_dec : type_spec idlist SIMICOLON

   27  type_spec : INT
   28            | CHAR
   29            | FLOAT
   30            | DOUBLE

   31  idlist : idlist COMMA id
   32         | idlist COMMA exp
   33         | id
   34         | exp

   35  id : ID

   36  if_stmt : IF LPRACE exp RPRACE stmt ELSE stmt
   37          | IF LPRACE exp RPRACE stmt

   38  for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt
   39           | FOR LPRACE exp_stmt exp_stmt RPRACE stmt

   40  while_stmt : WHILE LPRACE exp RPRACE stmt

   41  input_stmt : CIN SHR exp input_child

   42  input_child : SHR exp input_child
   43              | SIMICOLON

   44  output_stmt : COUT SHL exp output_child

   45  return_stmt : RETURN simple_exp

   46  output_child : SHL exp output_child
   47               | SIMICOLON

   48  exp_stmt : exp SIMICOLON
   49           | SIMICOLON

   50  exp : id ASSIGN exp
   51      | id ASSIGN SQUITO exp SQUITO
   52      | or_exp

   53  or_exp : or_exp OR and_exp
   54         | and_exp

   55  and_exp : and_exp AND shift_exp
   56          | shift_exp

   57  shift_exp : shift_exp SHL rel_exp
   58            | shift_exp SHR rel_exp
   59            | rel_exp

   60  rel_exp : rel_exp EQ simple_exp
   61          | rel_exp LT simple_exp
   62          | rel_exp GT simple_exp
   63          | rel_exp LE simple_exp
   64          | rel_exp GE simple_exp
   65          | rel_exp NEQ simple_exp
   66          | simple_exp

   67  simple_exp : simple_exp PLUS term
   68             | simple_exp MINUS term
   69             | MINUS simple_exp
   70             | simple_exp INC
   71             | simple_exp DEC
   72             | term

   73  term : term MUL factor
   74       | term DIV factor
   75       | term MOD factor
   76       | factor

   77  factor : LPRACE exp RPRACE
   78         | id
   79         | NUMBER
   80         | CONSTCHAR
   81         | NOT factor


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	INT  shift 1
	CHAR  shift 2
	VOID  shift 3
	FLOAT  shift 4
	DOUBLE  shift 5
	MAIN  shift 6

	program  goto 7


state 1
	program : INT . MAIN LPRACE VOID RPRACE comp_stmt
	program : INT . MAIN LPRACE RPRACE comp_stmt

	MAIN  shift 8


state 2
	program : CHAR . MAIN LPRACE VOID RPRACE comp_stmt
	program : CHAR . MAIN LPRACE RPRACE comp_stmt

	MAIN  shift 9


state 3
	program : VOID . MAIN LPRACE RPRACE comp_stmt
	program : VOID . MAIN LPRACE VOID RPRACE comp_stmt

	MAIN  shift 10


state 4
	program : FLOAT . MAIN LPRACE VOID RPRACE comp_stmt
	program : FLOAT . MAIN LPRACE RPRACE comp_stmt

	MAIN  shift 11


state 5
	program : DOUBLE . MAIN LPRACE VOID RPRACE comp_stmt
	program : DOUBLE . MAIN LPRACE RPRACE comp_stmt

	MAIN  shift 12


state 6
	program : MAIN . LPRACE RPRACE comp_stmt
	program : MAIN . LPRACE VOID RPRACE comp_stmt

	LPRACE  shift 13


state 7
	$accept : program . $end  (0)

	$end  accept


state 8
	program : INT MAIN . LPRACE VOID RPRACE comp_stmt
	program : INT MAIN . LPRACE RPRACE comp_stmt

	LPRACE  shift 14


state 9
	program : CHAR MAIN . LPRACE VOID RPRACE comp_stmt
	program : CHAR MAIN . LPRACE RPRACE comp_stmt

	LPRACE  shift 15


state 10
	program : VOID MAIN . LPRACE RPRACE comp_stmt
	program : VOID MAIN . LPRACE VOID RPRACE comp_stmt

	LPRACE  shift 16


state 11
	program : FLOAT MAIN . LPRACE VOID RPRACE comp_stmt
	program : FLOAT MAIN . LPRACE RPRACE comp_stmt

	LPRACE  shift 17


state 12
	program : DOUBLE MAIN . LPRACE VOID RPRACE comp_stmt
	program : DOUBLE MAIN . LPRACE RPRACE comp_stmt

	LPRACE  shift 18


state 13
	program : MAIN LPRACE . RPRACE comp_stmt
	program : MAIN LPRACE . VOID RPRACE comp_stmt

	VOID  shift 19
	RPRACE  shift 20


state 14
	program : INT MAIN LPRACE . VOID RPRACE comp_stmt
	program : INT MAIN LPRACE . RPRACE comp_stmt

	VOID  shift 21
	RPRACE  shift 22


state 15
	program : CHAR MAIN LPRACE . VOID RPRACE comp_stmt
	program : CHAR MAIN LPRACE . RPRACE comp_stmt

	VOID  shift 23
	RPRACE  shift 24


state 16
	program : VOID MAIN LPRACE . RPRACE comp_stmt
	program : VOID MAIN LPRACE . VOID RPRACE comp_stmt

	VOID  shift 25
	RPRACE  shift 26


state 17
	program : FLOAT MAIN LPRACE . VOID RPRACE comp_stmt
	program : FLOAT MAIN LPRACE . RPRACE comp_stmt

	VOID  shift 27
	RPRACE  shift 28


state 18
	program : DOUBLE MAIN LPRACE . VOID RPRACE comp_stmt
	program : DOUBLE MAIN LPRACE . RPRACE comp_stmt

	VOID  shift 29
	RPRACE  shift 30


state 19
	program : MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 31


state 20
	program : MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 33


state 21
	program : INT MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 34


state 22
	program : INT MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 35


state 23
	program : CHAR MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 36


state 24
	program : CHAR MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 37


state 25
	program : VOID MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 38


state 26
	program : VOID MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 39


state 27
	program : FLOAT MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 40


state 28
	program : FLOAT MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 41


state 29
	program : DOUBLE MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 42


state 30
	program : DOUBLE MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 43


state 31
	program : MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 44


state 32
	comp_stmt : LBRACE . stmt_list RBRACE
	comp_stmt : LBRACE . RBRACE

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	RBRACE  shift 60
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt_list  goto 64
	stmt  goto 65
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 33
	program : MAIN LPRACE RPRACE comp_stmt .  (1)

	.  reduce 1


state 34
	program : INT MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 84


state 35
	program : INT MAIN LPRACE RPRACE comp_stmt .  (6)

	.  reduce 6


state 36
	program : CHAR MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 85


state 37
	program : CHAR MAIN LPRACE RPRACE comp_stmt .  (8)

	.  reduce 8


state 38
	program : VOID MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 86


state 39
	program : VOID MAIN LPRACE RPRACE comp_stmt .  (3)

	.  reduce 3


state 40
	program : FLOAT MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 87


state 41
	program : FLOAT MAIN LPRACE RPRACE comp_stmt .  (10)

	.  reduce 10


state 42
	program : DOUBLE MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 88


state 43
	program : DOUBLE MAIN LPRACE RPRACE comp_stmt .  (12)

	.  reduce 12


state 44
	program : MAIN LPRACE VOID RPRACE comp_stmt .  (2)

	.  reduce 2


state 45
	type_spec : INT .  (27)

	.  reduce 27


state 46
	type_spec : CHAR .  (28)

	.  reduce 28


state 47
	type_spec : FLOAT .  (29)

	.  reduce 29


state 48
	type_spec : DOUBLE .  (30)

	.  reduce 30


state 49
	id : ID .  (35)

	.  reduce 35


state 50
	factor : NUMBER .  (79)

	.  reduce 79


state 51
	factor : CONSTCHAR .  (80)

	.  reduce 80


state 52
	if_stmt : IF . LPRACE exp RPRACE stmt ELSE stmt
	if_stmt : IF . LPRACE exp RPRACE stmt

	LPRACE  shift 89


state 53
	for_stmt : FOR . LPRACE exp_stmt exp_stmt exp RPRACE stmt
	for_stmt : FOR . LPRACE exp_stmt exp_stmt RPRACE stmt

	LPRACE  shift 90


state 54
	while_stmt : WHILE . LPRACE exp RPRACE stmt

	LPRACE  shift 91


state 55
	input_stmt : CIN . SHR exp input_child

	SHR  shift 92


state 56
	output_stmt : COUT . SHL exp output_child

	SHL  shift 93


state 57
	return_stmt : RETURN . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 94
	id  goto 95
	term  goto 80
	factor  goto 82


state 58
	simple_exp : MINUS . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 96
	id  goto 95
	term  goto 80
	factor  goto 82


state 59
	factor : NOT . factor

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	NOT  shift 59
	LPRACE  shift 61

	id  goto 95
	factor  goto 97


state 60
	comp_stmt : LBRACE RBRACE .  (14)

	.  reduce 14


state 61
	factor : LPRACE . exp RPRACE

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 98
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 62
	exp_stmt : SIMICOLON .  (49)

	.  reduce 49


state 63
	stmt : comp_stmt .  (24)

	.  reduce 24


state 64
	comp_stmt : LBRACE stmt_list . RBRACE
	stmt_list : stmt_list . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	RBRACE  shift 99
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt  goto 100
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 65
	stmt_list : stmt .  (16)

	.  reduce 16


state 66
	or_exp : or_exp . OR and_exp
	exp : or_exp .  (52)

	OR  shift 101
	.  reduce 52


state 67
	stmt : while_stmt .  (20)

	.  reduce 20


state 68
	exp_stmt : exp . SIMICOLON

	SIMICOLON  shift 102


state 69
	stmt : if_stmt .  (19)

	.  reduce 19


state 70
	stmt : output_stmt .  (23)

	.  reduce 23


state 71
	stmt : return_stmt .  (25)

	.  reduce 25


state 72
	stmt : for_stmt .  (21)

	.  reduce 21


state 73
	stmt : input_stmt .  (22)

	.  reduce 22


state 74
	var_dec : type_spec . idlist SIMICOLON

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 103
	simple_exp  goto 75
	id  goto 104
	idlist  goto 105
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 75
	simple_exp : simple_exp . PLUS term
	rel_exp : simple_exp .  (66)
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 66


state 76
	stmt : exp_stmt .  (18)

	.  reduce 18


state 77
	stmt : var_dec .  (17)

	.  reduce 17


state 78
	exp : id . ASSIGN exp
	exp : id . ASSIGN SQUITO exp SQUITO
	factor : id .  (78)

	ASSIGN  shift 110
	.  reduce 78


state 79
	or_exp : and_exp .  (54)
	and_exp : and_exp . AND shift_exp

	AND  shift 111
	.  reduce 54


state 80
	term : term . MUL factor
	simple_exp : term .  (72)
	term : term . MOD factor
	term : term . DIV factor

	MUL  shift 112
	DIV  shift 113
	MOD  shift 114
	.  reduce 72


state 81
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	shift_exp : rel_exp .  (59)

	LT  shift 115
	LE  shift 116
	EQ  shift 117
	GT  shift 118
	GE  shift 119
	NEQ  shift 120
	.  reduce 59


state 82
	term : factor .  (76)

	.  reduce 76


83: shift-reduce conflict (shift 121, reduce 56) on SHL
83: shift-reduce conflict (shift 122, reduce 56) on SHR
state 83
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp
	and_exp : shift_exp .  (56)

	SHL  shift 121
	SHR  shift 122
	.  reduce 56


state 84
	program : INT MAIN LPRACE VOID RPRACE comp_stmt .  (5)

	.  reduce 5


state 85
	program : CHAR MAIN LPRACE VOID RPRACE comp_stmt .  (7)

	.  reduce 7


state 86
	program : VOID MAIN LPRACE VOID RPRACE comp_stmt .  (4)

	.  reduce 4


state 87
	program : FLOAT MAIN LPRACE VOID RPRACE comp_stmt .  (9)

	.  reduce 9


state 88
	program : DOUBLE MAIN LPRACE VOID RPRACE comp_stmt .  (11)

	.  reduce 11


state 89
	if_stmt : IF LPRACE . exp RPRACE stmt ELSE stmt
	if_stmt : IF LPRACE . exp RPRACE stmt

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 123
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 90
	for_stmt : FOR LPRACE . exp_stmt exp_stmt exp RPRACE stmt
	for_stmt : FOR LPRACE . exp_stmt exp_stmt RPRACE stmt

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61
	SIMICOLON  shift 62

	or_exp  goto 66
	exp  goto 68
	simple_exp  goto 75
	exp_stmt  goto 124
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 91
	while_stmt : WHILE LPRACE . exp RPRACE stmt

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 125
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 92
	input_stmt : CIN SHR . exp input_child

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 126
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 93
	output_stmt : COUT SHL . exp output_child

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 127
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


94: shift-reduce conflict (shift 107, reduce 45) on MINUS
state 94
	return_stmt : RETURN simple_exp .  (45)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 45


state 95
	factor : id .  (78)

	.  reduce 78


96: shift-reduce conflict (shift 108, reduce 69) on INC
96: shift-reduce conflict (shift 109, reduce 69) on DEC
state 96
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : MINUS simple_exp .  (69)
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	INC  shift 108
	DEC  shift 109
	.  reduce 69


state 97
	factor : NOT factor .  (81)

	.  reduce 81


state 98
	factor : LPRACE exp . RPRACE

	RPRACE  shift 128


state 99
	comp_stmt : LBRACE stmt_list RBRACE .  (13)

	.  reduce 13


state 100
	stmt_list : stmt_list stmt .  (15)

	.  reduce 15


state 101
	or_exp : or_exp OR . and_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 75
	id  goto 95
	and_exp  goto 129
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 102
	exp_stmt : exp SIMICOLON .  (48)

	.  reduce 48


state 103
	idlist : exp .  (34)

	.  reduce 34


104: reduce-reduce conflict (reduce 33, reduce 78) on COMMA
104: reduce-reduce conflict (reduce 33, reduce 78) on SIMICOLON
state 104
	idlist : id .  (33)
	exp : id . ASSIGN exp
	exp : id . ASSIGN SQUITO exp SQUITO
	factor : id .  (78)

	ASSIGN  shift 110
	COMMA  reduce 33
	SIMICOLON  reduce 33
	.  reduce 78


state 105
	idlist : idlist . COMMA id
	idlist : idlist . COMMA exp
	var_dec : type_spec idlist . SIMICOLON

	COMMA  shift 130
	SIMICOLON  shift 131


state 106
	simple_exp : simple_exp PLUS . term

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	NOT  shift 59
	LPRACE  shift 61

	id  goto 95
	term  goto 132
	factor  goto 82


state 107
	simple_exp : simple_exp MINUS . term

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	NOT  shift 59
	LPRACE  shift 61

	id  goto 95
	term  goto 133
	factor  goto 82


state 108
	simple_exp : simple_exp INC .  (70)

	.  reduce 70


state 109
	simple_exp : simple_exp DEC .  (71)

	.  reduce 71


state 110
	exp : id ASSIGN . exp
	exp : id ASSIGN . SQUITO exp SQUITO

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61
	SQUITO  shift 134

	or_exp  goto 66
	exp  goto 135
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 111
	and_exp : and_exp AND . shift_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 75
	id  goto 95
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 136


state 112
	term : term MUL . factor

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	NOT  shift 59
	LPRACE  shift 61

	id  goto 95
	factor  goto 137


state 113
	term : term DIV . factor

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	NOT  shift 59
	LPRACE  shift 61

	id  goto 95
	factor  goto 138


state 114
	term : term MOD . factor

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	NOT  shift 59
	LPRACE  shift 61

	id  goto 95
	factor  goto 139


state 115
	rel_exp : rel_exp LT . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 140
	id  goto 95
	term  goto 80
	factor  goto 82


state 116
	rel_exp : rel_exp LE . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 141
	id  goto 95
	term  goto 80
	factor  goto 82


state 117
	rel_exp : rel_exp EQ . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 142
	id  goto 95
	term  goto 80
	factor  goto 82


state 118
	rel_exp : rel_exp GT . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 143
	id  goto 95
	term  goto 80
	factor  goto 82


state 119
	rel_exp : rel_exp GE . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 144
	id  goto 95
	term  goto 80
	factor  goto 82


state 120
	rel_exp : rel_exp NEQ . simple_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 145
	id  goto 95
	term  goto 80
	factor  goto 82


state 121
	shift_exp : shift_exp SHL . rel_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 75
	id  goto 95
	term  goto 80
	rel_exp  goto 146
	factor  goto 82


state 122
	shift_exp : shift_exp SHR . rel_exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	simple_exp  goto 75
	id  goto 95
	term  goto 80
	rel_exp  goto 147
	factor  goto 82


state 123
	if_stmt : IF LPRACE exp . RPRACE stmt ELSE stmt
	if_stmt : IF LPRACE exp . RPRACE stmt

	RPRACE  shift 148


state 124
	for_stmt : FOR LPRACE exp_stmt . exp_stmt exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt . exp_stmt RPRACE stmt

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61
	SIMICOLON  shift 62

	or_exp  goto 66
	exp  goto 68
	simple_exp  goto 75
	exp_stmt  goto 149
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 125
	while_stmt : WHILE LPRACE exp . RPRACE stmt

	RPRACE  shift 150


state 126
	input_stmt : CIN SHR exp . input_child

	SHR  shift 151
	SIMICOLON  shift 152

	input_child  goto 153


state 127
	output_stmt : COUT SHL exp . output_child

	SHL  shift 154
	SIMICOLON  shift 155

	output_child  goto 156


state 128
	factor : LPRACE exp RPRACE .  (77)

	.  reduce 77


state 129
	or_exp : or_exp OR and_exp .  (53)
	and_exp : and_exp . AND shift_exp

	AND  shift 111
	.  reduce 53


state 130
	idlist : idlist COMMA . id
	idlist : idlist COMMA . exp

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 157
	simple_exp  goto 75
	id  goto 158
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 131
	var_dec : type_spec idlist SIMICOLON .  (26)

	.  reduce 26


state 132
	simple_exp : simple_exp PLUS term .  (67)
	term : term . MUL factor
	term : term . MOD factor
	term : term . DIV factor

	MUL  shift 112
	DIV  shift 113
	MOD  shift 114
	.  reduce 67


state 133
	simple_exp : simple_exp MINUS term .  (68)
	term : term . MUL factor
	term : term . MOD factor
	term : term . DIV factor

	MUL  shift 112
	DIV  shift 113
	MOD  shift 114
	.  reduce 68


state 134
	exp : id ASSIGN SQUITO . exp SQUITO

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 159
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 135
	exp : id ASSIGN exp .  (50)

	.  reduce 50


state 136
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp
	and_exp : and_exp AND shift_exp .  (55)

	SHL  shift 121
	SHR  shift 122
	.  reduce 55


state 137
	term : term MUL factor .  (73)

	.  reduce 73


state 138
	term : term DIV factor .  (74)

	.  reduce 74


state 139
	term : term MOD factor .  (75)

	.  reduce 75


state 140
	rel_exp : rel_exp LT simple_exp .  (61)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 61


state 141
	rel_exp : rel_exp LE simple_exp .  (63)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 63


state 142
	rel_exp : rel_exp EQ simple_exp .  (60)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 60


state 143
	rel_exp : rel_exp GT simple_exp .  (62)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 62


state 144
	rel_exp : rel_exp GE simple_exp .  (64)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 64


state 145
	rel_exp : rel_exp NEQ simple_exp .  (65)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 106
	MINUS  shift 107
	INC  shift 108
	DEC  shift 109
	.  reduce 65


state 146
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	shift_exp : shift_exp SHL rel_exp .  (57)
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . NEQ simple_exp

	LT  shift 115
	LE  shift 116
	EQ  shift 117
	GT  shift 118
	GE  shift 119
	NEQ  shift 120
	.  reduce 57


state 147
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	shift_exp : shift_exp SHR rel_exp .  (58)
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . NEQ simple_exp

	LT  shift 115
	LE  shift 116
	EQ  shift 117
	GT  shift 118
	GE  shift 119
	NEQ  shift 120
	.  reduce 58


state 148
	if_stmt : IF LPRACE exp RPRACE . stmt ELSE stmt
	if_stmt : IF LPRACE exp RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt  goto 160
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 149
	for_stmt : FOR LPRACE exp_stmt exp_stmt . exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt exp_stmt . RPRACE stmt

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61
	RPRACE  shift 161

	or_exp  goto 66
	exp  goto 162
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 150
	while_stmt : WHILE LPRACE exp RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt  goto 163
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 151
	input_child : SHR . exp input_child

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 164
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 152
	input_child : SIMICOLON .  (43)

	.  reduce 43


state 153
	input_stmt : CIN SHR exp input_child .  (41)

	.  reduce 41


state 154
	output_child : SHL . exp output_child

	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	MINUS  shift 58
	NOT  shift 59
	LPRACE  shift 61

	or_exp  goto 66
	exp  goto 165
	simple_exp  goto 75
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 155
	output_child : SIMICOLON .  (47)

	.  reduce 47


state 156
	output_stmt : COUT SHL exp output_child .  (44)

	.  reduce 44


state 157
	idlist : idlist COMMA exp .  (32)

	.  reduce 32


158: reduce-reduce conflict (reduce 31, reduce 78) on COMMA
158: reduce-reduce conflict (reduce 31, reduce 78) on SIMICOLON
state 158
	idlist : idlist COMMA id .  (31)
	exp : id . ASSIGN exp
	exp : id . ASSIGN SQUITO exp SQUITO
	factor : id .  (78)

	ASSIGN  shift 110
	COMMA  reduce 31
	SIMICOLON  reduce 31
	.  reduce 78


state 159
	exp : id ASSIGN SQUITO exp . SQUITO

	SQUITO  shift 166


160: shift-reduce conflict (shift 167, reduce 37) on ELSE
state 160
	if_stmt : IF LPRACE exp RPRACE stmt . ELSE stmt
	if_stmt : IF LPRACE exp RPRACE stmt .  (37)

	ELSE  shift 167
	.  reduce 37


state 161
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt  goto 168
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 162
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp . RPRACE stmt

	RPRACE  shift 169


state 163
	while_stmt : WHILE LPRACE exp RPRACE stmt .  (40)

	.  reduce 40


state 164
	input_child : SHR exp . input_child

	SHR  shift 151
	SIMICOLON  shift 152

	input_child  goto 170


state 165
	output_child : SHL exp . output_child

	SHL  shift 154
	SIMICOLON  shift 155

	output_child  goto 171


state 166
	exp : id ASSIGN SQUITO exp SQUITO .  (51)

	.  reduce 51


state 167
	if_stmt : IF LPRACE exp RPRACE stmt ELSE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt  goto 172
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 168
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE stmt .  (39)

	.  reduce 39


state 169
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	ID  shift 49
	NUMBER  shift 50
	CONSTCHAR  shift 51
	IF  shift 52
	FOR  shift 53
	WHILE  shift 54
	CIN  shift 55
	COUT  shift 56
	RETURN  shift 57
	MINUS  shift 58
	NOT  shift 59
	LBRACE  shift 32
	LPRACE  shift 61
	SIMICOLON  shift 62

	comp_stmt  goto 63
	stmt  goto 173
	or_exp  goto 66
	while_stmt  goto 67
	exp  goto 68
	if_stmt  goto 69
	output_stmt  goto 70
	return_stmt  goto 71
	for_stmt  goto 72
	input_stmt  goto 73
	type_spec  goto 74
	simple_exp  goto 75
	exp_stmt  goto 76
	var_dec  goto 77
	id  goto 78
	and_exp  goto 79
	term  goto 80
	rel_exp  goto 81
	factor  goto 82
	shift_exp  goto 83


state 170
	input_child : SHR exp input_child .  (42)

	.  reduce 42


state 171
	output_child : SHL exp output_child .  (46)

	.  reduce 46


state 172
	if_stmt : IF LPRACE exp RPRACE stmt ELSE stmt .  (36)

	.  reduce 36


state 173
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt .  (38)

	.  reduce 38


##############################################################################
# Summary
##############################################################################

State 83 contains 2 shift-reduce conflict(s)
State 94 contains 1 shift-reduce conflict(s)
State 96 contains 2 shift-reduce conflict(s)
State 104 contains 2 reduce-reduce conflict(s)
State 158 contains 2 reduce-reduce conflict(s)
State 160 contains 1 shift-reduce conflict(s)


45 token(s), 26 nonterminal(s)
82 grammar rule(s), 174 state(s)


##############################################################################
# End of File
##############################################################################
