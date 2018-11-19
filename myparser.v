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
# Date: 11/20/18
# Time: 07:46:33
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

   44  output_stmt : COUT output_child

   45  return_stmt : RETURN simple_exp

   46  output_child : SHL output_exp output_child
   47               | SIMICOLON

   48  exp_stmt : exp SIMICOLON
   49           | SIMICOLON

   50  output_exp : output_or_exp

   51  output_or_exp : output_or_exp OR output_and_exp
   52                | output_and_exp

   53  output_and_exp : output_and_exp AND output_shift_exp
   54                 | output_shift_exp

   55  output_shift_exp : LBRACE shift_exp SHL rel_exp RBRACE
   56                   | shift_exp SHR rel_exp
   57                   | rel_exp

   58  exp : id ASSIGN exp
   59      | id ASSIGN SQUITO exp SQUITO
   60      | or_exp

   61  or_exp : or_exp OR and_exp
   62         | and_exp

   63  and_exp : and_exp AND shift_exp
   64          | shift_exp

   65  shift_exp : shift_exp SHL rel_exp
   66            | shift_exp SHR rel_exp
   67            | rel_exp

   68  rel_exp : rel_exp EQ simple_exp
   69          | rel_exp LT simple_exp
   70          | rel_exp GT simple_exp
   71          | rel_exp LE simple_exp
   72          | rel_exp GE simple_exp
   73          | rel_exp NEQ simple_exp
   74          | simple_exp

   75  simple_exp : simple_exp PLUS term
   76             | simple_exp MINUS term
   77             | MINUS simple_exp
   78             | simple_exp INC
   79             | simple_exp DEC
   80             | term

   81  term : term MUL factor
   82       | term DIV factor
   83       | term MOD factor
   84       | factor

   85  factor : LPRACE exp RPRACE
   86         | id
   87         | NUMBER
   88         | CONSTCHAR
   89         | NOT factor
   90         | STRING


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

	comp_stmt  goto 64
	stmt_list  goto 65
	stmt  goto 66
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


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
	factor : STRING .  (90)

	.  reduce 90


state 50
	id : ID .  (35)

	.  reduce 35


state 51
	factor : NUMBER .  (87)

	.  reduce 87


state 52
	factor : CONSTCHAR .  (88)

	.  reduce 88


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
	output_stmt : COUT . output_child

	SHL  shift 94
	SIMICOLON  shift 95

	output_child  goto 96


state 58
	return_stmt : RETURN . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 98
	term  goto 80
	factor  goto 81


state 59
	simple_exp : MINUS . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 99
	term  goto 80
	factor  goto 81


state 60
	factor : NOT . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	factor  goto 100


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

	exp  goto 101
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 63
	exp_stmt : SIMICOLON .  (49)

	.  reduce 49


state 64
	stmt : comp_stmt .  (24)

	.  reduce 24


state 65
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
	RBRACE  shift 102
	LPRACE  shift 62
	SIMICOLON  shift 63

	comp_stmt  goto 64
	stmt  goto 103
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 66
	stmt_list : stmt .  (16)

	.  reduce 16


state 67
	var_dec : type_spec . idlist SIMICOLON

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	idlist  goto 104
	exp  goto 105
	id  goto 106
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 68
	stmt : var_dec .  (17)

	.  reduce 17


state 69
	stmt : while_stmt .  (20)

	.  reduce 20


state 70
	stmt : output_stmt .  (23)

	.  reduce 23


state 71
	stmt : exp_stmt .  (18)

	.  reduce 18


state 72
	exp_stmt : exp . SIMICOLON

	SIMICOLON  shift 107


state 73
	stmt : if_stmt .  (19)

	.  reduce 19


state 74
	stmt : return_stmt .  (25)

	.  reduce 25


state 75
	exp : id . ASSIGN SQUITO exp SQUITO
	exp : id . ASSIGN exp
	factor : id .  (86)

	ASSIGN  shift 108
	.  reduce 86


state 76
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	rel_exp : simple_exp .  (74)
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 74


state 77
	stmt : input_stmt .  (22)

	.  reduce 22


state 78
	stmt : for_stmt .  (21)

	.  reduce 21


state 79
	or_exp : or_exp . OR and_exp
	exp : or_exp .  (60)

	OR  shift 113
	.  reduce 60


state 80
	simple_exp : term .  (80)
	term : term . MUL factor
	term : term . MOD factor
	term : term . DIV factor

	MUL  shift 114
	DIV  shift 115
	MOD  shift 116
	.  reduce 80


state 81
	term : factor .  (84)

	.  reduce 84


state 82
	rel_exp : rel_exp . EQ simple_exp
	shift_exp : rel_exp .  (67)
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp

	LT  shift 117
	LE  shift 118
	EQ  shift 119
	GT  shift 120
	GE  shift 121
	NEQ  shift 122
	.  reduce 67


83: shift-reduce conflict (shift 124, reduce 64) on SHR
state 83
	and_exp : shift_exp .  (64)
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp

	SHL  shift 123
	SHR  shift 124
	.  reduce 64


state 84
	or_exp : and_exp .  (62)
	and_exp : and_exp . AND shift_exp

	AND  shift 125
	.  reduce 62


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

	exp  goto 126
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


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

	exp_stmt  goto 127
	exp  goto 72
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 92
	while_stmt : WHILE LPRACE . exp RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	exp  goto 128
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 93
	input_stmt : CIN SHR . exp input_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	exp  goto 129
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 94
	output_child : SHL . output_exp output_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 130
	LPRACE  shift 62

	output_or_exp  goto 131
	output_exp  goto 132
	id  goto 97
	simple_exp  goto 76
	output_and_exp  goto 133
	term  goto 80
	output_shift_exp  goto 134
	factor  goto 81
	rel_exp  goto 135
	shift_exp  goto 136


state 95
	output_child : SIMICOLON .  (47)

	.  reduce 47


state 96
	output_stmt : COUT output_child .  (44)

	.  reduce 44


state 97
	factor : id .  (86)

	.  reduce 86


98: shift-reduce conflict (shift 110, reduce 45) on MINUS
state 98
	return_stmt : RETURN simple_exp .  (45)
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 45


99: shift-reduce conflict (shift 111, reduce 77) on INC
99: shift-reduce conflict (shift 112, reduce 77) on DEC
state 99
	simple_exp : simple_exp . DEC
	simple_exp : MINUS simple_exp .  (77)
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term

	INC  shift 111
	DEC  shift 112
	.  reduce 77


state 100
	factor : NOT factor .  (89)

	.  reduce 89


state 101
	factor : LPRACE exp . RPRACE

	RPRACE  shift 137


state 102
	comp_stmt : LBRACE stmt_list RBRACE .  (13)

	.  reduce 13


state 103
	stmt_list : stmt_list stmt .  (15)

	.  reduce 15


state 104
	var_dec : type_spec idlist . SIMICOLON
	idlist : idlist . COMMA id
	idlist : idlist . COMMA exp

	COMMA  shift 138
	SIMICOLON  shift 139


state 105
	idlist : exp .  (34)

	.  reduce 34


106: reduce-reduce conflict (reduce 33, reduce 86) on COMMA
106: reduce-reduce conflict (reduce 33, reduce 86) on SIMICOLON
state 106
	idlist : id .  (33)
	exp : id . ASSIGN SQUITO exp SQUITO
	exp : id . ASSIGN exp
	factor : id .  (86)

	ASSIGN  shift 108
	COMMA  reduce 33
	SIMICOLON  reduce 33
	.  reduce 86


state 107
	exp_stmt : exp SIMICOLON .  (48)

	.  reduce 48


state 108
	exp : id ASSIGN . SQUITO exp SQUITO
	exp : id ASSIGN . exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62
	SQUITO  shift 140

	exp  goto 141
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 109
	simple_exp : simple_exp PLUS . term

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	term  goto 142
	factor  goto 81


state 110
	simple_exp : simple_exp MINUS . term

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	term  goto 143
	factor  goto 81


state 111
	simple_exp : simple_exp INC .  (78)

	.  reduce 78


state 112
	simple_exp : simple_exp DEC .  (79)

	.  reduce 79


state 113
	or_exp : or_exp OR . and_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 144


state 114
	term : term MUL . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	factor  goto 145


state 115
	term : term DIV . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	factor  goto 146


state 116
	term : term MOD . factor

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	factor  goto 147


state 117
	rel_exp : rel_exp LT . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 148
	term  goto 80
	factor  goto 81


state 118
	rel_exp : rel_exp LE . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 149
	term  goto 80
	factor  goto 81


state 119
	rel_exp : rel_exp EQ . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 150
	term  goto 80
	factor  goto 81


state 120
	rel_exp : rel_exp GT . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 151
	term  goto 80
	factor  goto 81


state 121
	rel_exp : rel_exp GE . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 152
	term  goto 80
	factor  goto 81


state 122
	rel_exp : rel_exp NEQ . simple_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 153
	term  goto 80
	factor  goto 81


state 123
	shift_exp : shift_exp SHL . rel_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 154


state 124
	shift_exp : shift_exp SHR . rel_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 155


state 125
	and_exp : and_exp AND . shift_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 156


state 126
	if_stmt : IF LPRACE exp . RPRACE stmt ELSE stmt
	if_stmt : IF LPRACE exp . RPRACE stmt

	RPRACE  shift 157


state 127
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

	exp_stmt  goto 158
	exp  goto 72
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 128
	while_stmt : WHILE LPRACE exp . RPRACE stmt

	RPRACE  shift 159


state 129
	input_stmt : CIN SHR exp . input_child

	SHR  shift 160
	SIMICOLON  shift 161

	input_child  goto 162


state 130
	output_shift_exp : LBRACE . shift_exp SHL rel_exp RBRACE

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 163


state 131
	output_exp : output_or_exp .  (50)
	output_or_exp : output_or_exp . OR output_and_exp

	OR  shift 164
	.  reduce 50


state 132
	output_child : SHL output_exp . output_child

	SHL  shift 94
	SIMICOLON  shift 95

	output_child  goto 165


state 133
	output_and_exp : output_and_exp . AND output_shift_exp
	output_or_exp : output_and_exp .  (52)

	AND  shift 166
	.  reduce 52


state 134
	output_and_exp : output_shift_exp .  (54)

	.  reduce 54


135: reduce-reduce conflict (reduce 57, reduce 67) on SHL
state 135
	output_shift_exp : rel_exp .  (57)
	rel_exp : rel_exp . EQ simple_exp
	shift_exp : rel_exp .  (67)
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp

	LT  shift 117
	LE  shift 118
	EQ  shift 119
	GT  shift 120
	GE  shift 121
	NEQ  shift 122
	SHR  reduce 67
	.  reduce 57


state 136
	output_shift_exp : shift_exp . SHR rel_exp
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp

	SHL  shift 123
	SHR  shift 167


state 137
	factor : LPRACE exp RPRACE .  (85)

	.  reduce 85


state 138
	idlist : idlist COMMA . id
	idlist : idlist COMMA . exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	exp  goto 168
	id  goto 169
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 139
	var_dec : type_spec idlist SIMICOLON .  (26)

	.  reduce 26


state 140
	exp : id ASSIGN SQUITO . exp SQUITO

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	exp  goto 170
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 141
	exp : id ASSIGN exp .  (58)

	.  reduce 58


state 142
	term : term . MUL factor
	simple_exp : simple_exp PLUS term .  (75)
	term : term . MOD factor
	term : term . DIV factor

	MUL  shift 114
	DIV  shift 115
	MOD  shift 116
	.  reduce 75


state 143
	term : term . MUL factor
	simple_exp : simple_exp MINUS term .  (76)
	term : term . MOD factor
	term : term . DIV factor

	MUL  shift 114
	DIV  shift 115
	MOD  shift 116
	.  reduce 76


state 144
	or_exp : or_exp OR and_exp .  (61)
	and_exp : and_exp . AND shift_exp

	AND  shift 125
	.  reduce 61


state 145
	term : term MUL factor .  (81)

	.  reduce 81


state 146
	term : term DIV factor .  (82)

	.  reduce 82


state 147
	term : term MOD factor .  (83)

	.  reduce 83


state 148
	rel_exp : rel_exp LT simple_exp .  (69)
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 69


state 149
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	rel_exp : rel_exp LE simple_exp .  (71)
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 71


state 150
	rel_exp : rel_exp EQ simple_exp .  (68)
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 68


state 151
	simple_exp : simple_exp . DEC
	rel_exp : rel_exp GT simple_exp .  (70)
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 70


state 152
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	rel_exp : rel_exp GE simple_exp .  (72)

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 72


state 153
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . PLUS term
	rel_exp : rel_exp NEQ simple_exp .  (73)
	simple_exp : simple_exp . MINUS term

	PLUS  shift 109
	MINUS  shift 110
	INC  shift 111
	DEC  shift 112
	.  reduce 73


state 154
	shift_exp : shift_exp SHL rel_exp .  (65)
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp

	LT  shift 117
	LE  shift 118
	EQ  shift 119
	GT  shift 120
	GE  shift 121
	NEQ  shift 122
	.  reduce 65


state 155
	rel_exp : rel_exp . EQ simple_exp
	shift_exp : shift_exp SHR rel_exp .  (66)
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp

	LT  shift 117
	LE  shift 118
	EQ  shift 119
	GT  shift 120
	GE  shift 121
	NEQ  shift 122
	.  reduce 66


state 156
	shift_exp : shift_exp . SHL rel_exp
	and_exp : and_exp AND shift_exp .  (63)
	shift_exp : shift_exp . SHR rel_exp

	SHL  shift 123
	SHR  shift 124
	.  reduce 63


state 157
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

	comp_stmt  goto 64
	stmt  goto 171
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 158
	for_stmt : FOR LPRACE exp_stmt exp_stmt . exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt exp_stmt . RPRACE stmt

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62
	RPRACE  shift 172

	exp  goto 173
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 159
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

	comp_stmt  goto 64
	stmt  goto 174
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 160
	input_child : SHR . exp input_child

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	exp  goto 175
	id  goto 75
	simple_exp  goto 76
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 161
	input_child : SIMICOLON .  (43)

	.  reduce 43


state 162
	input_stmt : CIN SHR exp input_child .  (41)

	.  reduce 41


state 163
	output_shift_exp : LBRACE shift_exp . SHL rel_exp RBRACE
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp

	SHL  shift 176
	SHR  shift 124


state 164
	output_or_exp : output_or_exp OR . output_and_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 130
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	output_and_exp  goto 177
	term  goto 80
	output_shift_exp  goto 134
	factor  goto 81
	rel_exp  goto 135
	shift_exp  goto 136


state 165
	output_child : SHL output_exp output_child .  (46)

	.  reduce 46


state 166
	output_and_exp : output_and_exp AND . output_shift_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LBRACE  shift 130
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	output_shift_exp  goto 178
	factor  goto 81
	rel_exp  goto 135
	shift_exp  goto 136


state 167
	output_shift_exp : shift_exp SHR . rel_exp
	shift_exp : shift_exp SHR . rel_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 179


state 168
	idlist : idlist COMMA exp .  (32)

	.  reduce 32


169: reduce-reduce conflict (reduce 31, reduce 86) on COMMA
169: reduce-reduce conflict (reduce 31, reduce 86) on SIMICOLON
state 169
	idlist : idlist COMMA id .  (31)
	exp : id . ASSIGN SQUITO exp SQUITO
	exp : id . ASSIGN exp
	factor : id .  (86)

	ASSIGN  shift 108
	COMMA  reduce 31
	SIMICOLON  reduce 31
	.  reduce 86


state 170
	exp : id ASSIGN SQUITO exp . SQUITO

	SQUITO  shift 180


171: shift-reduce conflict (shift 181, reduce 37) on ELSE
state 171
	if_stmt : IF LPRACE exp RPRACE stmt . ELSE stmt
	if_stmt : IF LPRACE exp RPRACE stmt .  (37)

	ELSE  shift 181
	.  reduce 37


state 172
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

	comp_stmt  goto 64
	stmt  goto 182
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 173
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp . RPRACE stmt

	RPRACE  shift 183


state 174
	while_stmt : WHILE LPRACE exp RPRACE stmt .  (40)

	.  reduce 40


state 175
	input_child : SHR exp . input_child

	SHR  shift 160
	SIMICOLON  shift 161

	input_child  goto 184


state 176
	output_shift_exp : LBRACE shift_exp SHL . rel_exp RBRACE
	shift_exp : shift_exp SHL . rel_exp

	STRING  shift 49
	ID  shift 50
	NUMBER  shift 51
	CONSTCHAR  shift 52
	MINUS  shift 59
	NOT  shift 60
	LPRACE  shift 62

	id  goto 97
	simple_exp  goto 76
	term  goto 80
	factor  goto 81
	rel_exp  goto 185


state 177
	output_or_exp : output_or_exp OR output_and_exp .  (51)
	output_and_exp : output_and_exp . AND output_shift_exp

	AND  shift 166
	.  reduce 51


state 178
	output_and_exp : output_and_exp AND output_shift_exp .  (53)

	.  reduce 53


179: reduce-reduce conflict (reduce 56, reduce 66) on SHL
state 179
	output_shift_exp : shift_exp SHR rel_exp .  (56)
	rel_exp : rel_exp . EQ simple_exp
	shift_exp : shift_exp SHR rel_exp .  (66)
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp

	LT  shift 117
	LE  shift 118
	EQ  shift 119
	GT  shift 120
	GE  shift 121
	NEQ  shift 122
	SHR  reduce 66
	.  reduce 56


state 180
	exp : id ASSIGN SQUITO exp SQUITO .  (59)

	.  reduce 59


state 181
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

	comp_stmt  goto 64
	stmt  goto 186
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 182
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE stmt .  (39)

	.  reduce 39


state 183
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

	comp_stmt  goto 64
	stmt  goto 187
	type_spec  goto 67
	var_dec  goto 68
	while_stmt  goto 69
	output_stmt  goto 70
	exp_stmt  goto 71
	exp  goto 72
	if_stmt  goto 73
	return_stmt  goto 74
	id  goto 75
	simple_exp  goto 76
	input_stmt  goto 77
	for_stmt  goto 78
	or_exp  goto 79
	term  goto 80
	factor  goto 81
	rel_exp  goto 82
	shift_exp  goto 83
	and_exp  goto 84


state 184
	input_child : SHR exp input_child .  (42)

	.  reduce 42


state 185
	output_shift_exp : LBRACE shift_exp SHL rel_exp . RBRACE
	shift_exp : shift_exp SHL rel_exp .  (65)
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . GE simple_exp

	LT  shift 117
	LE  shift 118
	EQ  shift 119
	GT  shift 120
	GE  shift 121
	NEQ  shift 122
	RBRACE  shift 188
	.  reduce 65


state 186
	if_stmt : IF LPRACE exp RPRACE stmt ELSE stmt .  (36)

	.  reduce 36


state 187
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt .  (38)

	.  reduce 38


state 188
	output_shift_exp : LBRACE shift_exp SHL rel_exp RBRACE .  (55)

	.  reduce 55


##############################################################################
# Summary
##############################################################################

State 83 contains 1 shift-reduce conflict(s)
State 98 contains 1 shift-reduce conflict(s)
State 99 contains 2 shift-reduce conflict(s)
State 106 contains 2 reduce-reduce conflict(s)
State 135 contains 1 reduce-reduce conflict(s)
State 169 contains 2 reduce-reduce conflict(s)
State 171 contains 1 shift-reduce conflict(s)
State 179 contains 1 reduce-reduce conflict(s)


46 token(s), 30 nonterminal(s)
91 grammar rule(s), 189 state(s)


##############################################################################
# End of File
##############################################################################
