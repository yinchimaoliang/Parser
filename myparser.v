#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 53 of your 30 day trial period.
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
# Date: 11/17/18
# Time: 09:54:54
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

    9  comp_stmt : LBRACE stmt_list RBRACE
   10            | LBRACE RBRACE

   11  stmt_list : stmt_list stmt
   12            | stmt

   13  stmt : var_dec
   14       | exp_stmt
   15       | if_stmt
   16       | while_stmt
   17       | for_stmt
   18       | input_stmt
   19       | output_stmt
   20       | comp_stmt

   21  var_dec : type_spec idlist SIMICOLON

   22  type_spec : INT
   23            | CHAR

   24  idlist : idlist COMMA id
   25         | idlist COMMA exp
   26         | id
   27         | exp

   28  id : ID

   29  if_stmt : IF LPRACE exp RPRACE stmt ELSE stmt
   30          | IF LPRACE exp RPRACE stmt

   31  for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt
   32           | FOR LPRACE exp_stmt exp_stmt RPRACE stmt

   33  while_stmt : WHILE LPRACE exp RPRACE stmt

   34  input_stmt : CIN SHR exp input_child

   35  input_child : SHR exp input_child
   36              | SIMICOLON

   37  output_stmt : COUT SHL exp output_child

   38  output_child : SHL exp output_child
   39               | SIMICOLON

   40  exp_stmt : exp SIMICOLON
   41           | SIMICOLON

   42  exp : id ASSIGN exp
   43      | id ASSIGN SQUITO exp SQUITO
   44      | or_exp

   45  or_exp : or_exp OR and_exp
   46         | and_exp

   47  and_exp : and_exp AND shift_exp
   48          | shift_exp

   49  shift_exp : shift_exp SHL rel_exp
   50            | shift_exp SHR rel_exp
   51            | rel_exp

   52  rel_exp : rel_exp EQ simple_exp
   53          | rel_exp LT simple_exp
   54          | rel_exp GT simple_exp
   55          | rel_exp LE simple_exp
   56          | rel_exp GE simple_exp
   57          | rel_exp NEQ simple_exp
   58          | simple_exp

   59  simple_exp : simple_exp PLUS term
   60             | simple_exp MINUS term
   61             | MINUS simple_exp
   62             | simple_exp INC
   63             | simple_exp DEC
   64             | term

   65  term : term MUL factor
   66       | term DIV factor
   67       | term MOD factor
   68       | factor

   69  factor : LPRACE exp RPRACE
   70         | id
   71         | NUMBER
   72         | CONSTCHAR
   73         | NOT factor


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	INT  shift 1
	CHAR  shift 2
	VOID  shift 3
	MAIN  shift 4

	program  goto 5


state 1
	program : INT . MAIN LPRACE VOID RPRACE comp_stmt
	program : INT . MAIN LPRACE RPRACE comp_stmt

	MAIN  shift 6


state 2
	program : CHAR . MAIN LPRACE VOID RPRACE comp_stmt
	program : CHAR . MAIN LPRACE RPRACE comp_stmt

	MAIN  shift 7


state 3
	program : VOID . MAIN LPRACE RPRACE comp_stmt
	program : VOID . MAIN LPRACE VOID RPRACE comp_stmt

	MAIN  shift 8


state 4
	program : MAIN . LPRACE RPRACE comp_stmt
	program : MAIN . LPRACE VOID RPRACE comp_stmt

	LPRACE  shift 9


state 5
	$accept : program . $end  (0)

	$end  accept


state 6
	program : INT MAIN . LPRACE VOID RPRACE comp_stmt
	program : INT MAIN . LPRACE RPRACE comp_stmt

	LPRACE  shift 10


state 7
	program : CHAR MAIN . LPRACE VOID RPRACE comp_stmt
	program : CHAR MAIN . LPRACE RPRACE comp_stmt

	LPRACE  shift 11


state 8
	program : VOID MAIN . LPRACE RPRACE comp_stmt
	program : VOID MAIN . LPRACE VOID RPRACE comp_stmt

	LPRACE  shift 12


state 9
	program : MAIN LPRACE . RPRACE comp_stmt
	program : MAIN LPRACE . VOID RPRACE comp_stmt

	VOID  shift 13
	RPRACE  shift 14


state 10
	program : INT MAIN LPRACE . VOID RPRACE comp_stmt
	program : INT MAIN LPRACE . RPRACE comp_stmt

	VOID  shift 15
	RPRACE  shift 16


state 11
	program : CHAR MAIN LPRACE . VOID RPRACE comp_stmt
	program : CHAR MAIN LPRACE . RPRACE comp_stmt

	VOID  shift 17
	RPRACE  shift 18


state 12
	program : VOID MAIN LPRACE . RPRACE comp_stmt
	program : VOID MAIN LPRACE . VOID RPRACE comp_stmt

	VOID  shift 19
	RPRACE  shift 20


state 13
	program : MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 21


state 14
	program : MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 23


state 15
	program : INT MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 24


state 16
	program : INT MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 25


state 17
	program : CHAR MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 26


state 18
	program : CHAR MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 27


state 19
	program : VOID MAIN LPRACE VOID . RPRACE comp_stmt

	RPRACE  shift 28


state 20
	program : VOID MAIN LPRACE RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 29


state 21
	program : MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 30


state 22
	comp_stmt : LBRACE . stmt_list RBRACE
	comp_stmt : LBRACE . RBRACE

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	RBRACE  shift 43
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 46
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	stmt_list  goto 51
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 23
	program : MAIN LPRACE RPRACE comp_stmt .  (1)

	.  reduce 1


state 24
	program : INT MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 66


state 25
	program : INT MAIN LPRACE RPRACE comp_stmt .  (6)

	.  reduce 6


state 26
	program : CHAR MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 67


state 27
	program : CHAR MAIN LPRACE RPRACE comp_stmt .  (8)

	.  reduce 8


state 28
	program : VOID MAIN LPRACE VOID RPRACE . comp_stmt

	LBRACE  shift 22

	comp_stmt  goto 68


state 29
	program : VOID MAIN LPRACE RPRACE comp_stmt .  (3)

	.  reduce 3


state 30
	program : MAIN LPRACE VOID RPRACE comp_stmt .  (2)

	.  reduce 2


state 31
	type_spec : INT .  (22)

	.  reduce 22


state 32
	type_spec : CHAR .  (23)

	.  reduce 23


state 33
	id : ID .  (28)

	.  reduce 28


state 34
	factor : NUMBER .  (71)

	.  reduce 71


state 35
	factor : CONSTCHAR .  (72)

	.  reduce 72


state 36
	if_stmt : IF . LPRACE exp RPRACE stmt
	if_stmt : IF . LPRACE exp RPRACE stmt ELSE stmt

	LPRACE  shift 69


state 37
	for_stmt : FOR . LPRACE exp_stmt exp_stmt exp RPRACE stmt
	for_stmt : FOR . LPRACE exp_stmt exp_stmt RPRACE stmt

	LPRACE  shift 70


state 38
	while_stmt : WHILE . LPRACE exp RPRACE stmt

	LPRACE  shift 71


state 39
	input_stmt : CIN . SHR exp input_child

	SHR  shift 72


state 40
	output_stmt : COUT . SHL exp output_child

	SHL  shift 73


state 41
	simple_exp : MINUS . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 74
	factor  goto 54
	id  goto 75


state 42
	factor : NOT . factor

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	NOT  shift 42
	LPRACE  shift 44

	factor  goto 76
	id  goto 75


state 43
	comp_stmt : LBRACE RBRACE .  (10)

	.  reduce 10


state 44
	factor : LPRACE . exp RPRACE

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 77


state 45
	exp_stmt : SIMICOLON .  (41)

	.  reduce 41


state 46
	stmt_list : stmt .  (12)

	.  reduce 12


state 47
	stmt : if_stmt .  (15)

	.  reduce 15


state 48
	stmt : exp_stmt .  (14)

	.  reduce 14


state 49
	stmt : comp_stmt .  (20)

	.  reduce 20


state 50
	stmt : var_dec .  (13)

	.  reduce 13


state 51
	comp_stmt : LBRACE stmt_list . RBRACE
	stmt_list : stmt_list . stmt

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	RBRACE  shift 78
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 79
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 52
	simple_exp : term .  (64)
	term : term . MUL factor
	term : term . DIV factor
	term : term . MOD factor

	MUL  shift 80
	DIV  shift 81
	MOD  shift 82
	.  reduce 64


state 53
	rel_exp : simple_exp .  (58)
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 58


state 54
	term : factor .  (68)

	.  reduce 68


state 55
	and_exp : and_exp . AND shift_exp
	or_exp : and_exp .  (46)

	AND  shift 87
	.  reduce 46


56: shift-reduce conflict (shift 88, reduce 48) on SHL
56: shift-reduce conflict (shift 89, reduce 48) on SHR
state 56
	and_exp : shift_exp .  (48)
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp

	SHL  shift 88
	SHR  shift 89
	.  reduce 48


state 57
	or_exp : or_exp . OR and_exp
	exp : or_exp .  (44)

	OR  shift 90
	.  reduce 44


state 58
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	shift_exp : rel_exp .  (51)

	LT  shift 91
	LE  shift 92
	EQ  shift 93
	GT  shift 94
	GE  shift 95
	NEQ  shift 96
	.  reduce 51


state 59
	exp : id . ASSIGN SQUITO exp SQUITO
	exp : id . ASSIGN exp
	factor : id .  (70)

	ASSIGN  shift 97
	.  reduce 70


state 60
	exp_stmt : exp . SIMICOLON

	SIMICOLON  shift 98


state 61
	var_dec : type_spec . idlist SIMICOLON

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 99
	exp  goto 100
	idlist  goto 101


state 62
	stmt : while_stmt .  (16)

	.  reduce 16


state 63
	stmt : input_stmt .  (18)

	.  reduce 18


state 64
	stmt : for_stmt .  (17)

	.  reduce 17


state 65
	stmt : output_stmt .  (19)

	.  reduce 19


state 66
	program : INT MAIN LPRACE VOID RPRACE comp_stmt .  (5)

	.  reduce 5


state 67
	program : CHAR MAIN LPRACE VOID RPRACE comp_stmt .  (7)

	.  reduce 7


state 68
	program : VOID MAIN LPRACE VOID RPRACE comp_stmt .  (4)

	.  reduce 4


state 69
	if_stmt : IF LPRACE . exp RPRACE stmt
	if_stmt : IF LPRACE . exp RPRACE stmt ELSE stmt

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 102


state 70
	for_stmt : FOR LPRACE . exp_stmt exp_stmt exp RPRACE stmt
	for_stmt : FOR LPRACE . exp_stmt exp_stmt RPRACE stmt

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44
	SIMICOLON  shift 45

	exp_stmt  goto 103
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60


state 71
	while_stmt : WHILE LPRACE . exp RPRACE stmt

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 104


state 72
	input_stmt : CIN SHR . exp input_child

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 105


state 73
	output_stmt : COUT SHL . exp output_child

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 106


74: shift-reduce conflict (shift 85, reduce 61) on INC
74: shift-reduce conflict (shift 86, reduce 61) on DEC
state 74
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	simple_exp : MINUS simple_exp .  (61)
	simple_exp : simple_exp . PLUS term

	INC  shift 85
	DEC  shift 86
	.  reduce 61


state 75
	factor : id .  (70)

	.  reduce 70


state 76
	factor : NOT factor .  (73)

	.  reduce 73


state 77
	factor : LPRACE exp . RPRACE

	RPRACE  shift 107


state 78
	comp_stmt : LBRACE stmt_list RBRACE .  (9)

	.  reduce 9


state 79
	stmt_list : stmt_list stmt .  (11)

	.  reduce 11


state 80
	term : term MUL . factor

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	NOT  shift 42
	LPRACE  shift 44

	factor  goto 108
	id  goto 75


state 81
	term : term DIV . factor

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	NOT  shift 42
	LPRACE  shift 44

	factor  goto 109
	id  goto 75


state 82
	term : term MOD . factor

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	NOT  shift 42
	LPRACE  shift 44

	factor  goto 110
	id  goto 75


state 83
	simple_exp : simple_exp PLUS . term

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	NOT  shift 42
	LPRACE  shift 44

	term  goto 111
	factor  goto 54
	id  goto 75


state 84
	simple_exp : simple_exp MINUS . term

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	NOT  shift 42
	LPRACE  shift 44

	term  goto 112
	factor  goto 54
	id  goto 75


state 85
	simple_exp : simple_exp INC .  (62)

	.  reduce 62


state 86
	simple_exp : simple_exp DEC .  (63)

	.  reduce 63


state 87
	and_exp : and_exp AND . shift_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	shift_exp  goto 113
	rel_exp  goto 58
	id  goto 75


state 88
	shift_exp : shift_exp SHL . rel_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	rel_exp  goto 114
	id  goto 75


state 89
	shift_exp : shift_exp SHR . rel_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	rel_exp  goto 115
	id  goto 75


state 90
	or_exp : or_exp OR . and_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 116
	shift_exp  goto 56
	rel_exp  goto 58
	id  goto 75


state 91
	rel_exp : rel_exp LT . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 117
	factor  goto 54
	id  goto 75


state 92
	rel_exp : rel_exp LE . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 118
	factor  goto 54
	id  goto 75


state 93
	rel_exp : rel_exp EQ . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 119
	factor  goto 54
	id  goto 75


state 94
	rel_exp : rel_exp GT . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 120
	factor  goto 54
	id  goto 75


state 95
	rel_exp : rel_exp GE . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 121
	factor  goto 54
	id  goto 75


state 96
	rel_exp : rel_exp NEQ . simple_exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 122
	factor  goto 54
	id  goto 75


state 97
	exp : id ASSIGN . SQUITO exp SQUITO
	exp : id ASSIGN . exp

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44
	SQUITO  shift 123

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 124


state 98
	exp_stmt : exp SIMICOLON .  (40)

	.  reduce 40


99: reduce-reduce conflict (reduce 26, reduce 70) on COMMA
99: reduce-reduce conflict (reduce 26, reduce 70) on SIMICOLON
state 99
	idlist : id .  (26)
	exp : id . ASSIGN SQUITO exp SQUITO
	exp : id . ASSIGN exp
	factor : id .  (70)

	ASSIGN  shift 97
	COMMA  reduce 26
	SIMICOLON  reduce 26
	.  reduce 70


state 100
	idlist : exp .  (27)

	.  reduce 27


state 101
	idlist : idlist . COMMA exp
	var_dec : type_spec idlist . SIMICOLON
	idlist : idlist . COMMA id

	COMMA  shift 125
	SIMICOLON  shift 126


state 102
	if_stmt : IF LPRACE exp . RPRACE stmt
	if_stmt : IF LPRACE exp . RPRACE stmt ELSE stmt

	RPRACE  shift 127


state 103
	for_stmt : FOR LPRACE exp_stmt . exp_stmt exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt . exp_stmt RPRACE stmt

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44
	SIMICOLON  shift 45

	exp_stmt  goto 128
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60


state 104
	while_stmt : WHILE LPRACE exp . RPRACE stmt

	RPRACE  shift 129


state 105
	input_stmt : CIN SHR exp . input_child

	SHR  shift 130
	SIMICOLON  shift 131

	input_child  goto 132


state 106
	output_stmt : COUT SHL exp . output_child

	SHL  shift 133
	SIMICOLON  shift 134

	output_child  goto 135


state 107
	factor : LPRACE exp RPRACE .  (69)

	.  reduce 69


state 108
	term : term MUL factor .  (65)

	.  reduce 65


state 109
	term : term DIV factor .  (66)

	.  reduce 66


state 110
	term : term MOD factor .  (67)

	.  reduce 67


state 111
	term : term . MUL factor
	simple_exp : simple_exp PLUS term .  (59)
	term : term . DIV factor
	term : term . MOD factor

	MUL  shift 80
	DIV  shift 81
	MOD  shift 82
	.  reduce 59


state 112
	simple_exp : simple_exp MINUS term .  (60)
	term : term . MUL factor
	term : term . DIV factor
	term : term . MOD factor

	MUL  shift 80
	DIV  shift 81
	MOD  shift 82
	.  reduce 60


state 113
	and_exp : and_exp AND shift_exp .  (47)
	shift_exp : shift_exp . SHL rel_exp
	shift_exp : shift_exp . SHR rel_exp

	SHL  shift 88
	SHR  shift 89
	.  reduce 47


state 114
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . EQ simple_exp
	shift_exp : shift_exp SHL rel_exp .  (49)
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp

	LT  shift 91
	LE  shift 92
	EQ  shift 93
	GT  shift 94
	GE  shift 95
	NEQ  shift 96
	.  reduce 49


state 115
	rel_exp : rel_exp . GE simple_exp
	rel_exp : rel_exp . NEQ simple_exp
	rel_exp : rel_exp . EQ simple_exp
	rel_exp : rel_exp . LT simple_exp
	rel_exp : rel_exp . GT simple_exp
	rel_exp : rel_exp . LE simple_exp
	shift_exp : shift_exp SHR rel_exp .  (50)

	LT  shift 91
	LE  shift 92
	EQ  shift 93
	GT  shift 94
	GE  shift 95
	NEQ  shift 96
	.  reduce 50


state 116
	or_exp : or_exp OR and_exp .  (45)
	and_exp : and_exp . AND shift_exp

	AND  shift 87
	.  reduce 45


state 117
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	rel_exp : rel_exp LT simple_exp .  (53)
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 53


state 118
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	rel_exp : rel_exp LE simple_exp .  (55)
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 55


state 119
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	rel_exp : rel_exp EQ simple_exp .  (52)
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 52


state 120
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	rel_exp : rel_exp GT simple_exp .  (54)
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 54


state 121
	simple_exp : simple_exp . MINUS term
	rel_exp : rel_exp GE simple_exp .  (56)
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 56


state 122
	simple_exp : simple_exp . MINUS term
	simple_exp : simple_exp . INC
	simple_exp : simple_exp . DEC
	rel_exp : rel_exp NEQ simple_exp .  (57)
	simple_exp : simple_exp . PLUS term

	PLUS  shift 83
	MINUS  shift 84
	INC  shift 85
	DEC  shift 86
	.  reduce 57


state 123
	exp : id ASSIGN SQUITO . exp SQUITO

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 136


state 124
	exp : id ASSIGN exp .  (42)

	.  reduce 42


state 125
	idlist : idlist COMMA . exp
	idlist : idlist COMMA . id

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 137
	exp  goto 138


state 126
	var_dec : type_spec idlist SIMICOLON .  (21)

	.  reduce 21


state 127
	if_stmt : IF LPRACE exp RPRACE . stmt
	if_stmt : IF LPRACE exp RPRACE . stmt ELSE stmt

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 139
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 128
	for_stmt : FOR LPRACE exp_stmt exp_stmt . exp RPRACE stmt
	for_stmt : FOR LPRACE exp_stmt exp_stmt . RPRACE stmt

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44
	RPRACE  shift 140

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 141


state 129
	while_stmt : WHILE LPRACE exp RPRACE . stmt

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 142
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 130
	input_child : SHR . exp input_child

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 143


state 131
	input_child : SIMICOLON .  (36)

	.  reduce 36


state 132
	input_stmt : CIN SHR exp input_child .  (34)

	.  reduce 34


state 133
	output_child : SHL . exp output_child

	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	MINUS  shift 41
	NOT  shift 42
	LPRACE  shift 44

	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 144


state 134
	output_child : SIMICOLON .  (39)

	.  reduce 39


state 135
	output_stmt : COUT SHL exp output_child .  (37)

	.  reduce 37


state 136
	exp : id ASSIGN SQUITO exp . SQUITO

	SQUITO  shift 145


137: reduce-reduce conflict (reduce 24, reduce 70) on COMMA
137: reduce-reduce conflict (reduce 24, reduce 70) on SIMICOLON
state 137
	idlist : idlist COMMA id .  (24)
	exp : id . ASSIGN SQUITO exp SQUITO
	exp : id . ASSIGN exp
	factor : id .  (70)

	ASSIGN  shift 97
	COMMA  reduce 24
	SIMICOLON  reduce 24
	.  reduce 70


state 138
	idlist : idlist COMMA exp .  (25)

	.  reduce 25


139: shift-reduce conflict (shift 146, reduce 30) on ELSE
state 139
	if_stmt : IF LPRACE exp RPRACE stmt .  (30)
	if_stmt : IF LPRACE exp RPRACE stmt . ELSE stmt

	ELSE  shift 146
	.  reduce 30


state 140
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE . stmt

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 147
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 141
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp . RPRACE stmt

	RPRACE  shift 148


state 142
	while_stmt : WHILE LPRACE exp RPRACE stmt .  (33)

	.  reduce 33


state 143
	input_child : SHR exp . input_child

	SHR  shift 130
	SIMICOLON  shift 131

	input_child  goto 149


state 144
	output_child : SHL exp . output_child

	SHL  shift 133
	SIMICOLON  shift 134

	output_child  goto 150


state 145
	exp : id ASSIGN SQUITO exp SQUITO .  (43)

	.  reduce 43


state 146
	if_stmt : IF LPRACE exp RPRACE stmt ELSE . stmt

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 151
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 147
	for_stmt : FOR LPRACE exp_stmt exp_stmt RPRACE stmt .  (32)

	.  reduce 32


state 148
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE . stmt

	INT  shift 31
	CHAR  shift 32
	ID  shift 33
	NUMBER  shift 34
	CONSTCHAR  shift 35
	IF  shift 36
	FOR  shift 37
	WHILE  shift 38
	CIN  shift 39
	COUT  shift 40
	MINUS  shift 41
	NOT  shift 42
	LBRACE  shift 22
	LPRACE  shift 44
	SIMICOLON  shift 45

	stmt  goto 152
	if_stmt  goto 47
	exp_stmt  goto 48
	comp_stmt  goto 49
	var_dec  goto 50
	term  goto 52
	simple_exp  goto 53
	factor  goto 54
	and_exp  goto 55
	shift_exp  goto 56
	or_exp  goto 57
	rel_exp  goto 58
	id  goto 59
	exp  goto 60
	type_spec  goto 61
	while_stmt  goto 62
	input_stmt  goto 63
	for_stmt  goto 64
	output_stmt  goto 65


state 149
	input_child : SHR exp input_child .  (35)

	.  reduce 35


state 150
	output_child : SHL exp output_child .  (38)

	.  reduce 38


state 151
	if_stmt : IF LPRACE exp RPRACE stmt ELSE stmt .  (29)

	.  reduce 29


state 152
	for_stmt : FOR LPRACE exp_stmt exp_stmt exp RPRACE stmt .  (31)

	.  reduce 31


##############################################################################
# Summary
##############################################################################

State 56 contains 2 shift-reduce conflict(s)
State 74 contains 2 shift-reduce conflict(s)
State 99 contains 2 reduce-reduce conflict(s)
State 137 contains 2 reduce-reduce conflict(s)
State 139 contains 1 shift-reduce conflict(s)


42 token(s), 25 nonterminal(s)
74 grammar rule(s), 153 state(s)


##############################################################################
# End of File
##############################################################################
