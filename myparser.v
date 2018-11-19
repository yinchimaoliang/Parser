#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 56 of your 30 day trial period.
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
# Date: 11/19/18
# Time: 21:17:47
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
   82         | STRING


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
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	RBRACE  shift 61
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt_list  goto 64
	stmt  goto 65
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 33
	program : MAIN LPRACE RPRACE comp_stmt .  (1)

	.  reduce 1


state 34
	program : INT MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 85


state 35
	program : INT MAIN LPRACE RPRACE comp_stmt .  (6)

	.  reduce 6


state 36
	program : CHAR MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 86


state 37
	program : CHAR MAIN LPRACE RPRACE comp_stmt .  (8)

	.  reduce 8


state 38
	program : VOID MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 87


state 39
	program : VOID MAIN LPRACE RPRACE comp_stmt .  (3)

	.  reduce 3


state 40
	program : FLOAT MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 88


state 41
	program : FLOAT MAIN LPRACE RPRACE comp_stmt .  (10)

	.  reduce 10


state 42
	program : DOUBLE MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 32

	comp_stmt  goto 89


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
	factor : STRING .  (82)

	.  reduce 82


state 50
	id : ID .  (35)

	.  reduce 35


state 51
	factor : NUMBER .  (79)

	.  reduce 79


state 52
	factor : CONSTCHAR .  (80)

	.  reduce 80


state 53
	if_stmt : IF . LPRACE exp RPRACE stmt ELSE stmt
	if_stmt : IF . LPRACE exp RPRACE stmt

	LPRACE  shift 90


state 54
	for_stmt : FOR . LPRACE exp_stmt exp_stmt exp RPRACE stmt
	for_stmt : FOR . LPRACE exp_stmt exp_stmt RPRACE stmt

	LPRACE  shift 91


state 55
	while_stmt : WHILE . LPRACE exp RPRACE stmt

	LPRACE  shift 92


state 56
	input_stmt : CIN . SHR exp input_child

	SHR  shift 93


state 57
	output_stmt : COUT . SHL exp output_child

	SHL  shift 94


state 58
	return_stmt : RETURN . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 95
	id  goto 96
	factor  goto 82
	term  goto 83


state 59
	simple_exp : MINUS . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 97
	id  goto 96
	factor  goto 82
	term  goto 83


state 60
	factor : NOT . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 96
	factor  goto 98


state 61
	comp_stmt : LBRACE RBRACE .  (14)

	.  reduce 14


state 62
	factor : LPRACE . exp RPRACE

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 99
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 63
	exp_stmt : SIMICOLON .  (49)

	.  reduce 49


state 64
	comp_stmt : LBRACE stmt_list . RBRACE
	stmt_list : stmt_list . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	RBRACE  shift 100
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt  goto 101
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 65
	stmt_list : stmt .  (16)

	.  reduce 16


state 66
	stmt : comp_stmt .  (24)

	.  reduce 24


state 67
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	rel_exp : simple_exp .  (66)
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 66


state 68
	exp : or_exp .  (52)
	or_exp : or_exp . OR and_exp

	OR  shift 106
	.  reduce 52


state 69
	stmt : return_stmt .  (25)

	.  reduce 25


state 70
	exp : id . ASSIGN exp
	exp : id . ASSIGN SQUITO exp SQUITO
	factor : id .  (78)

	ASSIGN  shift 107
	.  reduce 78


state 71
	stmt : for_stmt .  (21)

	.  reduce 21


state 72
	var_dec : type_spec . idlist SIMICOLON

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 108
	exp  goto 109
	idlist  goto 110
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 73
	stmt : input_stmt .  (22)

	.  reduce 22


state 74
	stmt : output_stmt .  (23)

	.  reduce 23


state 75
	exp_stmt : exp . SIMICOLON

	SIMICOLON  shift 111


state 76
	stmt : while_stmt .  (20)

	.  reduce 20


state 77
	stmt : exp_stmt .  (18)

	.  reduce 18


state 78
	stmt : if_stmt .  (19)

	.  reduce 19


state 79
	stmt : var_dec .  (17)

	.  reduce 17


state 80
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp
	shift_exp : rel_exp .  (59)
	rel_exp : rel_exp . EQ simple_exp

	LT  shift 112
	LE  shift 113
	EQ  shift 114
	GT  shift 115
	GE  shift 116
	NEQ  shift 117
	.  reduce 59


state 81
	or_exp : and_exp .  (54)
	and_exp : and_exp . AND shift_exp

	AND  shift 118
	.  reduce 54


state 82
	term : factor .  (76)

	.  reduce 76


state 83
	simple_exp : term .  (72)
	term : term . MUL factor
	term : term . DIV factor
	term : term . MOD factor

	MUL  shift 119
	DIV  shift 120
	MOD  shift 121
	.  reduce 72


84: shift-reduce conflict (shift 122, reduce 56) on SHL
84: shift-reduce conflict (shift 123, reduce 56) on SHR
state 84
	shift_exp : shift_exp . SHR rel_exp
	and_exp : shift_exp .  (56)
	shift_exp : shift_exp . SHL rel_exp

	SHL  shift 122
	SHR  shift 123
	.  reduce 56


state 85
	program : INT MAIN LPRACE VOID RPRACE comp_stmt .  (5)

	.  reduce 5


state 86
	program : CHAR MAIN LPRACE VOID RPRACE comp_stmt .  (7)

	.  reduce 7


state 87
	program : VOID MAIN LPRACE VOID RPRACE comp_stmt .  (4)

	.  reduce 4


state 88
	program : FLOAT MAIN LPRACE VOID RPRACE comp_stmt .  (9)

	.  reduce 9


state 89
	program : DOUBLE MAIN LPRACE VOID RPRACE comp_stmt .  (11)

	.  reduce 11


state 90
	if_stmt : IF LPRACE . exp RPRACE stmt ELSE stmt
	if_stmt : IF LPRACE . exp RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 124
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 91
	for_stmt : FOR LPRACE . exp_stmt exp_stmt exp RPRACE stmt
	for_stmt : FOR LPRACE . exp_stmt exp_stmt RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62
	SIMICOLON  shift 63

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 75
	exp_stmt  goto 125
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 92
	while_stmt : WHILE LPRACE . exp RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 126
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 93
	input_stmt : CIN SHR . exp input_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 127
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 94
	output_stmt : COUT SHL . exp output_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 128
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


95: shift-reduce conflict (shift 103, reduce 45) on MINUS
state 95
	return_stmt : RETURN simple_exp .  (45)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 45


state 96
	factor : id .  (78)

	.  reduce 78


97: shift-reduce conflict (shift 104, reduce 69) on INC
97: shift-reduce conflict (shift 105, reduce 69) on DEC
state 97
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : MINUS simple_exp .  (69)
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	INC  shift 104
	DEC  shift 105
	.  reduce 69


state 98
	factor : NOT factor .  (81)

	.  reduce 81


state 99
	factor : LPRACE exp . RPRACE

	RPRACE  shift 129


state 100
	comp_stmt : LBRACE stmt_list RBRACE .  (13)

	.  reduce 13


state 101
	stmt_list : stmt_list stmt .  (15)

	.  reduce 15


state 102
	simple_exp : simple_exp PLUS . term

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 96
	factor  goto 82
	term  goto 130


state 103
	simple_exp : simple_exp MINUS . term

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 96
	factor  goto 82
	term  goto 131


state 104
	simple_exp : simple_exp INC .  (70)

	.  reduce 70


state 105
	simple_exp : simple_exp DEC .  (71)

	.  reduce 71


state 106
	or_exp : or_exp OR . and_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	id  goto 96
	rel_exp  goto 80
	and_exp  goto 132
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 107
	exp : id ASSIGN . exp
	exp : id ASSIGN . SQUITO exp SQUITO

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62
	SQUITO  shift 133

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 134
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


108: reduce-reduce conflict (reduce 33, reduce 78) on COMMA
108: reduce-reduce conflict (reduce 33, reduce 78) on SIMICOLON
state 108
	idlist : id .  (33)
	exp : id . ASSIGN exp
	exp : id . ASSIGN SQUITO exp SQUITO
	factor : id .  (78)

	ASSIGN  shift 107
	COMMA  reduce 33
	SIMICOLON  reduce 33
	.  reduce 78


state 109
	idlist : exp .  (34)

	.  reduce 34


state 110
	var_dec : type_spec idlist . SIMICOLON
	idlist : idlist . COMMA exp
	idlist : idlist . COMMA id

	COMMA  shift 135
	SIMICOLON  shift 136


state 111
	exp_stmt : exp SIMICOLON .  (48)

	.  reduce 48


state 112
	rel_exp : rel_exp LT . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 137
	id  goto 96
	factor  goto 82
	term  goto 83


state 113
	rel_exp : rel_exp LE . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 138
	id  goto 96
	factor  goto 82
	term  goto 83


state 114
	rel_exp : rel_exp EQ . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 139
	id  goto 96
	factor  goto 82
	term  goto 83


state 115
	rel_exp : rel_exp GT . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 140
	id  goto 96
	factor  goto 82
	term  goto 83


state 116
	rel_exp : rel_exp GE . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 141
	id  goto 96
	factor  goto 82
	term  goto 83


state 117
	rel_exp : rel_exp NEQ . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 142
	id  goto 96
	factor  goto 82
	term  goto 83


state 118
	and_exp : and_exp AND . shift_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	id  goto 96
	rel_exp  goto 80
	factor  goto 82
	term  goto 83
	shift_exp  goto 143


state 119
	term : term MUL . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 96
	factor  goto 144


state 120
	term : term DIV . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 96
	factor  goto 145


state 121
	term : term MOD . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 96
	factor  goto 146


state 122
	shift_exp : shift_exp SHL . rel_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	id  goto 96
	rel_exp  goto 147
	factor  goto 82
	term  goto 83


state 123
	shift_exp : shift_exp SHR . rel_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	id  goto 96
	rel_exp  goto 148
	factor  goto 82
	term  goto 83


state 124
	if_stmt : IF LPRACE exp . RPRACE stmt ELSE stmt
	if_stmt : IF LPRACE exp . RPRACE stmt

	RPRACE  shift 149


state 125
	for_stmt : FOR LPRACE exp_stmt . exp_stmt exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt . exp_stmt RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62
	SIMICOLON  shift 63

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 75
	exp_stmt  goto 150
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 126
	while_stmt : WHILE LPRACE exp . RPRACE stmt

	RPRACE  shift 151


state 127
	input_stmt : CIN SHR exp . input_child

	SHR  shift 152
	SIMICOLON  shift 153

	input_child  goto 154


state 128
	output_stmt : COUT SHL exp . output_child

	SHL  shift 155
	SIMICOLON  shift 156

	output_child  goto 157


state 129
	factor : LPRACE exp RPRACE .  (77)

	.  reduce 77


state 130
	simple_exp : simple_exp PLUS term .  (67)
	term : term . MUL factor
	term : term . DIV factor
	term : term . MOD factor

	MUL  shift 119
	DIV  shift 120
	MOD  shift 121
	.  reduce 67


state 131
	simple_exp : simple_exp MINUS term .  (68)
	term : term . MUL factor
	term : term . DIV factor
	term : term . MOD factor

	MUL  shift 119
	DIV  shift 120
	MOD  shift 121
	.  reduce 68


state 132
	and_exp : and_exp . AND shift_exp
	or_exp : or_exp OR and_exp .  (53)

	AND  shift 118
	.  reduce 53


state 133
	exp : id ASSIGN SQUITO . exp SQUITO

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 158
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 134
	exp : id ASSIGN exp .  (50)

	.  reduce 50


state 135
	idlist : idlist COMMA . exp
	idlist : idlist COMMA . id

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 159
	exp  goto 160
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 136
	var_dec : type_spec idlist SIMICOLON .  (26)

	.  reduce 26


state 137
	rel_exp : rel_exp LT simple_exp .  (61)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 61


state 138
	rel_exp : rel_exp LE simple_exp .  (63)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 63


state 139
	rel_exp : rel_exp EQ simple_exp .  (60)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 60


state 140
	rel_exp : rel_exp GT simple_exp .  (62)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 62


state 141
	rel_exp : rel_exp GE simple_exp .  (64)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 64


state 142
	rel_exp : rel_exp NEQ simple_exp .  (65)
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC

	PLUS  shift 102
	MINUS  shift 103
	INC  shift 104
	DEC  shift 105
	.  reduce 65


state 143
	shift_exp : shift_exp . SHR rel_exp
	and_exp : and_exp AND shift_exp .  (55)
	shift_exp : shift_exp . SHL rel_exp

	SHL  shift 122
	SHR  shift 123
	.  reduce 55


state 144
	term : term MUL factor .  (73)

	.  reduce 73


state 145
	term : term DIV factor .  (74)

	.  reduce 74


state 146
	term : term MOD factor .  (75)

	.  reduce 75


state 147
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . EQ simple_exp
	shift_exp : shift_exp SHL rel_exp .  (57)

	LT  shift 112
	LE  shift 113
	EQ  shift 114
	GT  shift 115
	GE  shift 116
	NEQ  shift 117
	.  reduce 57


state 148
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp
	shift_exp : shift_exp SHR rel_exp .  (58)
	rel_exp : rel_exp . EQ simple_exp

	LT  shift 112
	LE  shift 113
	EQ  shift 114
	GT  shift 115
	GE  shift 116
	NEQ  shift 117
	.  reduce 58


state 149
	if_stmt : IF LPRACE exp RPRACE . stmt ELSE stmt
	if_stmt : IF LPRACE exp RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt  goto 161
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 150
	for_stmt : FOR LPRACE exp_stmt exp_stmt . exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt exp_stmt . RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62
	RPRACE  shift 162

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 163
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 151
	while_stmt : WHILE LPRACE exp RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt  goto 164
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 152
	input_child : SHR . exp input_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 165
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 153
	input_child : SIMICOLON .  (43)

	.  reduce 43


state 154
	input_stmt : CIN SHR exp input_child .  (41)

	.  reduce 41


state 155
	output_child : SHL . exp output_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	simple_exp  goto 67
	or_exp  goto 68
	id  goto 70
	exp  goto 166
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 156
	output_child : SIMICOLON .  (47)

	.  reduce 47


state 157
	output_stmt : COUT SHL exp output_child .  (44)

	.  reduce 44


state 158
	exp : id ASSIGN SQUITO exp . SQUITO

	SQUITO  shift 167


159: reduce-reduce conflict (reduce 31, reduce 78) on COMMA
159: reduce-reduce conflict (reduce 31, reduce 78) on SIMICOLON
state 159
	idlist : idlist COMMA id .  (31)
	exp : id . ASSIGN exp
	exp : id . ASSIGN SQUITO exp SQUITO
	factor : id .  (78)

	ASSIGN  shift 107
	COMMA  reduce 31
	SIMICOLON  reduce 31
	.  reduce 78


state 160
	idlist : idlist COMMA exp .  (32)

	.  reduce 32


161: shift-reduce conflict (shift 168, reduce 37) on ELSE
state 161
	if_stmt : IF LPRACE exp RPRACE stmt . ELSE stmt
	if_stmt : IF LPRACE exp RPRACE stmt .  (37)

	ELSE  shift 168
	.  reduce 37


state 162
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt  goto 169
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 163
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp . RPRACE stmt

	RPRACE  shift 170


state 164
	while_stmt : WHILE LPRACE exp RPRACE stmt .  (40)

	.  reduce 40


state 165
	input_child : SHR exp . input_child

	SHR  shift 152
	SIMICOLON  shift 153

	input_child  goto 171


state 166
	output_child : SHL exp . output_child

	SHL  shift 155
	SIMICOLON  shift 156

	output_child  goto 172


state 167
	exp : id ASSIGN SQUITO exp SQUITO .  (51)

	.  reduce 51


state 168
	if_stmt : IF LPRACE exp RPRACE stmt ELSE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt  goto 173
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 169
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE stmt .  (39)

	.  reduce 39


state 170
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE . stmt

	INT  shift 45
	CHAR  shift 46
	FLOAT  shift 47
	DOUBLE  shift 48
	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	IF  shift 53
	FOR  shift 54
	WHILE  shift 55
	CIN  shift 56
	COUT  shift 57
	RETURN  shift 58
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 32
	LPRACE  shift 62
	SIMICOLON  shift 63

	stmt  goto 174
	comp_stmt  goto 66
	simple_exp  goto 67
	or_exp  goto 68
	return_stmt  goto 69
	id  goto 70
	for_stmt  goto 71
	type_spec  goto 72
	input_stmt  goto 73
	output_stmt  goto 74
	exp  goto 75
	while_stmt  goto 76
	exp_stmt  goto 77
	if_stmt  goto 78
	var_dec  goto 79
	rel_exp  goto 80
	and_exp  goto 81
	factor  goto 82
	term  goto 83
	shift_exp  goto 84


state 171
	input_child : SHR exp input_child .  (42)

	.  reduce 42


state 172
	output_child : SHL exp output_child .  (46)

	.  reduce 46


state 173
	if_stmt : IF LPRACE exp RPRACE stmt ELSE stmt .  (36)

	.  reduce 36


state 174
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt .  (38)

	.  reduce 38


##############################################################################
# Summary
##############################################################################

State 84 contains 2 shift-reduce conflict(s)
State 95 contains 1 shift-reduce conflict(s)
State 97 contains 2 shift-reduce conflict(s)
State 108 contains 2 reduce-reduce conflict(s)
State 159 contains 2 reduce-reduce conflict(s)
State 161 contains 1 shift-reduce conflict(s)


46 token(s), 26 nonterminal(s)
83 grammar rule(s), 175 state(s)


##############################################################################
# End of File
##############################################################################
