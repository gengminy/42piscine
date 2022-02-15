#!/bin/sh
./do-op 123456 "+" 123456
./do-op 123456 "-" 123456
./do-op 1234 "*" 1234
./do-op 123456 "/" 123456
./do-op 123456 "%" 123
./do-op 123456 "+" 123456 "+"
./do-op 123456
./do-op 123123aa "+" 123123aa
./do-op aaaaaa "+" 123456
./do-op +---+15aaa "+" 23456
./do-op ----++1055ab "*" +---++--12355a
./do-op 2147483647 "+" 0
./do-op 2147483647 "-" 1234
./do-op -2147483648 "-" 0
./do-op -2147483648 "+" 0
./do-op -2147483648 "+" 1
./do-op
./do-op 1 + 1
./do-op 42amis - --+-20toto12
./do-op 1 p 1
./do-op 1 + toto3
./do-op toto3 + 4
./do-op foo plus bar
./do-op 25 / 0
./do-op 25 % 0
