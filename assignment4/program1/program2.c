float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}};

a) What is the meaning of a table?
Ans: The base address of 2-dimensional array

b) What is the meaning of (table+1)?
Ans:The address of second row

c) What is the meaning of *(table+1)?
Ans: The address of first column second row

d) What is the meaning of (*(table+1)+1)?
Ans: The address of second column second row

e) What is the meaning of (*(table)+1)?
Ans:The address of second column first row

f) What is the value of *(*(table+1) +1)?
Ans:The value of second column second row

g) What is the value of *(*(table)+1)?
Ans:value of second column first row

h) What is the value of *(*(table+1)?
Ans:value of second row first column

i) What is the value of *(*(table) + 1)+1?
Ans: *(*(table) + 1)+1 means that 1 is added to the value at second column first row