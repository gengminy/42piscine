#!/bin/sh
./ft_tail -c 13 myspeech
./ft_tail -c 13 myspeech myspeech myspeech
./ft_tail -c 10 gogogo myfile dir dirtest | cat -e
./ft_tail -c 10 no_way
./ft_tail -c 10 /exam
./ft_tail -c 5 < myspeech
cat gogogo | ./ft_tail -c 7
cat test2 | ./ft_tail -c 0
cat test2 | ./ft_tail -c 3
