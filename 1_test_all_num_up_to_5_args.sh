#!/bin/sh

printf "1 "; ARG="2 1"; ./a.out 2 1 | ./checker_Mac $ARG; ./a.out 2 1 | wc -l
printf "2 "; ARG="1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "3 "; ARG="3 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "4 "; ARG="1 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "5 "; ARG="3 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "6 "; ARG="1 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "7 "; ARG="2 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "8 "; ARG="2 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "9 "; ARG="3 2 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "10 "; ARG="3 1 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "11 "; ARG="1 4 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "12 "; ARG="2 1 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "13 "; ARG="4 2 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "14 "; ARG="2 4 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "15 "; ARG="1 2 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "16 "; ARG="2 4 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "17 "; ARG="3 1 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "18 "; ARG="1 3 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "19 "; ARG="4 2 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "20 "; ARG="4 1 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "21 "; ARG="4 1 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "22 "; ARG="2 3 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "23 "; ARG="3 4 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "24 "; ARG="3 2 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "25 "; ARG="4 3 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "26 "; ARG="1 4 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "27 "; ARG="4 3 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "28 "; ARG="1 2 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "29 "; ARG="1 3 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "30 "; ARG="3 4 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "31 "; ARG="2 1 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "32 "; ARG="2 3 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "33 "; ARG="3 5 4 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "34 "; ARG="5 1 3 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "35 "; ARG="1 3 2 5 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "36 "; ARG="1 2 3 4 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "37 "; ARG="2 5 1 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "38 "; ARG="4 2 5 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "39 "; ARG="5 4 3 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "40 "; ARG="1 3 4 2 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "41 "; ARG="3 4 2 1 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "42 "; ARG="4 5 2 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "43 "; ARG="5 4 2 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "44 "; ARG="3 2 1 4 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "45 "; ARG="5 4 2 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "46 "; ARG="5 2 4 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "47 "; ARG="2 3 4 1 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "48 "; ARG="4 3 5 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "49 "; ARG="1 2 4 5 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "50 "; ARG="3 1 4 2 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "51 "; ARG="3 1 4 5 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "52 "; ARG="5 1 3 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "53 "; ARG="2 3 5 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "54 "; ARG="1 3 4 5 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "55 "; ARG="1 4 3 5 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "56 "; ARG="5 3 2 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "57 "; ARG="5 4 1 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "58 "; ARG="1 2 5 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "59 "; ARG="4 3 1 2 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "60 "; ARG="1 4 5 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "61 "; ARG="2 5 3 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "62 "; ARG="3 1 2 4 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "63 "; ARG="5 3 1 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "64 "; ARG="3 1 5 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "65 "; ARG="4 3 5 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "66 "; ARG="2 5 4 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "67 "; ARG="1 5 2 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "68 "; ARG="5 3 1 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "69 "; ARG="3 1 5 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "70 "; ARG="2 3 1 5 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "71 "; ARG="1 4 2 3 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "72 "; ARG="5 2 4 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "73 "; ARG="4 3 2 1 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "74 "; ARG="4 1 5 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "75 "; ARG="1 5 4 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "76 "; ARG="3 5 2 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "77 "; ARG="2 5 4 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "78 "; ARG="2 5 1 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "79 "; ARG="4 5 3 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "80 "; ARG="4 1 3 2 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "81 "; ARG="4 1 5 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "82 "; ARG="5 3 4 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "83 "; ARG="4 1 2 3 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "84 "; ARG="1 4 5 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "85 "; ARG="2 3 4 5 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "86 "; ARG="2 4 3 1 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "87 "; ARG="3 5 1 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "88 "; ARG="3 5 1 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "89 "; ARG="3 1 2 5 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "90 "; ARG="1 2 3 5 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "91 "; ARG="4 2 3 5 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "92 "; ARG="3 4 5 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "93 "; ARG="2 4 1 5 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "94 "; ARG="2 4 5 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "95 "; ARG="4 3 1 5 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "96 "; ARG="1 4 3 2 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "97 "; ARG="4 2 3 1 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "98 "; ARG="1 3 2 4 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "99 "; ARG="3 5 2 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "100 "; ARG="4 2 1 3 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "101 "; ARG="5 1 4 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "102 "; ARG="3 4 5 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "103 "; ARG="1 2 4 3 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "104 "; ARG="4 2 5 3 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "105 "; ARG="5 4 1 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "106 "; ARG="3 2 5 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "107 "; ARG="3 2 4 5 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "108 "; ARG="2 3 1 4 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "109 "; ARG="2 1 3 5 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "110 "; ARG="3 2 1 5 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "111 "; ARG="4 1 2 5 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "112 "; ARG="4 2 1 5 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "113 "; ARG="1 5 3 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "114 "; ARG="5 4 3 2 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "115 "; ARG="3 2 4 1 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "116 "; ARG="5 2 3 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "117 "; ARG="2 1 4 3 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "118 "; ARG="5 2 1 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "119 "; ARG="1 4 2 5 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "120 "; ARG="1 5 2 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "121 "; ARG="1 5 3 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "122 "; ARG="1 3 5 2 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "123 "; ARG="2 4 1 3 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "124 "; ARG="5 1 4 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "125 "; ARG="5 2 1 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "126 "; ARG="2 3 5 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "127 "; ARG="1 5 4 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "128 "; ARG="2 4 5 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "129 "; ARG="4 5 1 2 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "130 "; ARG="2 1 4 5 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "131 "; ARG="5 1 2 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "132 "; ARG="2 1 3 4 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "133 "; ARG="3 5 4 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "134 "; ARG="2 5 3 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "135 "; ARG="1 2 5 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "136 "; ARG="4 5 1 3 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "137 "; ARG="3 4 1 5 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "138 "; ARG="4 5 2 1 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "139 "; ARG="5 3 4 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "140 "; ARG="5 2 3 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "141 "; ARG="4 3 2 5 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "142 "; ARG="2 1 5 4 3"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "143 "; ARG="4 5 3 1 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "144 "; ARG="3 2 5 1 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "145 "; ARG="2 4 3 5 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "146 "; ARG="5 3 2 4 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "147 "; ARG="4 1 3 5 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "148 "; ARG="5 1 2 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "149 "; ARG="3 4 2 5 1"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "150 "; ARG="1 3 5 4 2"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "151 "; ARG="3 4 1 2 5"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l
printf "152 "; ARG="2 1 5 3 4"; ./a.out $ARG | ./checker_Mac $ARG; ./a.out $ARG | wc -l