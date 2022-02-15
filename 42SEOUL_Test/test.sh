#!/bin/bash
echo "C Piscine Project Test Script"
echo "    by.   smun"
echo

export PROJECT=$1
export PRINT_RESULT=$2

compile() {
    gcc -Wall -Wextra -Werror -o test_ex$1 -I$(pwd)/ex$1 $DIR/$PROJECT/ex$1*.c $(find ex$1 -name *.c -print | xargs printf "%s ")
}

test_program_exercise() {
    echo " === Test Exercise $1 === "
    DIR=$(dirname "$BASH_SOURCE")

    echo " >> Doing Makefile! << "
    cd ex$1
    make fclean
    make all
    echo

    run_shell_prepare $1

    echo " >> Running Program!! << "
    run_shell_answer $1 &> utest
    echo
    if [[ $PRINT_RESULT == "p" ]]
    then
        echo " >> Your result <<"
        cat utest
        echo
        echo " >> Expected result <<"
        cat $DIR/$PROJECT/ex$1.result
        echo
    fi

    echo " >> diff result <<"
    diff -U 3 $DIR/$PROJECT/ex$1.result utest | cat -e
    echo
    DIFF_RESULT=$(diff -U 3 $DIR/$PROJECT/ex$1.result utest | cat -e)
    if [[ $DIFF_RESULT == "" ]]
    then
        echo " Diff OK :D"
    else
        echo " Diff KO :("
    fi

    echo
    rm -rf utest
    make fclean
    run_shell_clean $1
    cd ..
}

test_c_exercise() {
    echo " === Test Exercise $1 === "
    DIR=$(dirname "$BASH_SOURCE")
    compile $1
    ./test_ex$1 $2 >> utest
    if [[ $PRINT_RESULT == "p" ]]
    then
        echo " >> Your result <<"
        ./test_ex$1 $2
        echo
        echo " >> Expected result <<"
        cat $DIR/$PROJECT/ex$1.result
        echo
    fi

    echo " >> diff result <<"
    diff -U 3 $DIR/$PROJECT/ex$1.result utest | cat -e
    echo
    DIFF_RESULT=$(diff -U 3 $DIR/$PROJECT/ex$1.result utest | cat -e)
    if [[ $DIFF_RESULT == "" ]]
    then
        echo " Diff OK :D"
    else
        echo " Diff KO :("
    fi

    echo
    rm -rf test_ex$1 utest
}

test_norminette() {
    for I in $(seq $1 $2)
    do
        find ./$(printf "ex%02d" $I) -name "*.c" -print | xargs norminette -R CheckForbiddenSourceHeader
    done
}

test_norminette_real() {
    for I in $(seq $1 $2)
    do
        find ./$(printf "ex%02d" $I) \( -name "*.c" -o -name "*.h" \) -print | xargs norminette
    done
}

run_shell_prepare() {
    if [ -f $DIR/$PROJECT/$(printf "ex%02dprepare.sh" "$1") ]
    then
        sh $DIR/$PROJECT/$(printf "ex%02dprepare.sh" "$1")
    fi
}

run_shell_clean() {
    if [ -f $DIR/$PROJECT/$(printf "ex%02dclean.sh" "$1") ]
    then
        sh $DIR/$PROJECT/$(printf "ex%02dclean.sh" "$1")
    fi
}

run_shell_answer() {
    if [ -f $DIR/$PROJECT/$(printf "ex%02d.sh" "$1") ]
    then
        sh $DIR/$PROJECT/$(printf "ex%02d.sh" "$1")
    fi
}

test_shell_exercise() {
    echo " === Test Exercise $1 === "
    DIR=$(dirname "$BASH_SOURCE")

    cd $(printf "ex%02d" $1)
    if [[ $3 == "prepare" ]]
    then
        run_shell_prepare $1
    fi
    $2 | cat -e >> ../utest
    run_shell_answer $1 | cat -e >> ../result
    cd ..

    if [[ $PRINT_RESULT == "p" ]]
    then
        echo " >> Your result <<"
        cat utest
        echo
        echo " >> Expected result <<"
        cat result
        echo
    fi

    echo " >> diff result <<"
    diff -U 3 result utest | cat -e
    echo
    DIFF_RESULT=$(diff -U 3 result utest | cat -e)
    if [[ $DIFF_RESULT == "" ]]
    then
        echo " Diff OK :D"
    else
        echo " Diff KO :("
    fi

    echo
    rm -rf utest result
}

if [[ $PROJECT == "Shell00" ]]
then
    test_shell_exercise 0 "cat z"
    echo
    echo

    # Ex01 Test
    cd ex01
    echo " >> EX01 Your result << "
    tar -xf testShell00.tar
    ls -l testShell00
    echo
    echo "- 파일 퍼미션 확인: -r--r-xr-x"
    echo "- 파일 사이즈 확인: 40"
    echo "- 파일 날짜  확인: Jun 1 23:42 or 6 1 23:42"
    rm -rf testShell00
    cd ..
    echo
    echo

    # Ex02 Test
    cd ex02
    echo " >> EX02 Your result << "
    tar -xf exo2.tar
    ls -l | grep -v "exo2.tar"
    echo
    echo " == 올바른 값 비교 =="
    echo total XXXX
    echo "drwx--xr-x  2 "$USER"  2020_seoul    ??  6  1 20:47 test0"
    echo "-rwx--xr--  1 "$USER"  2020_seoul     4  6  1 21:46 test1"
    echo "dr-x---r--  2 "$USER"  2020_seoul    ??  6  1 22:45 test2"
    echo "-r-----r--  2 "$USER"  2020_seoul     1  6  1 23:44 test3"
    echo "-rw-r----x  1 "$USER"  2020_seoul     2  6  1 23:43 test4"
    echo "-r-----r--  2 "$USER"  2020_seoul     1  6  1 23:44 test5"
    echo "lrwxr-xr-x  1 "$USER"  2020_seoul     5  6  1 22:20 test6 -> test0"
    echo
    rm -rf test0 test1 test2 test3 test4 test5 test6
    cd ..
    echo
    echo

    # Ex03 Test
    cd ex03
    echo " >> EX03 Your result << "
    cat klist.txt
    cd ..
    echo
    echo

    test_shell_exercise 4 "sh midLS" prepare
    test_shell_exercise 5 "sh git_commit.sh"
    test_shell_exercise 6 "sh git_ignore.sh" prepare
    test_shell_exercise 7 "cat -e b"
    test_shell_exercise 8 "sh clean" prepare
    test_shell_exercise 9 "file -m ft_magic 42 24" prepare
elif [[ $PROJECT == "Shell01" ]]
then
    export FT_LINE1=3
    export FT_LINE2=11
    export FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
    export FT_NBR2=dcccccrrrmdooooommmddddoorrrrrr

    test_shell_exercise 1 "sh ./print_groups.sh"
    test_shell_exercise 2 "sh ./find_sh.sh" prepare
    test_shell_exercise 3 "sh ./count_files.sh" prepare
    test_shell_exercise 4 "sh ./MAC.sh"
    test_shell_exercise 5 "cat -e \"\\?\$*'MaRViN'*\$?\\\""
    test_shell_exercise 6 "sh ./skip.sh" prepare
    test_shell_exercise 7 "sh ./r_dwssap.sh"
    test_shell_exercise 8 "sh ./add_chelou.sh"
elif [[ $PROJECT == "C00" ]]
then
    MAX_EXERCISE=8
    test_norminette 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C01" ]]
then
    MAX_EXERCISE=8
    test_norminette 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C02" ]]
then
    MAX_EXERCISE=11
    test_norminette 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done
    echo " >> Your result <<"
    compile 12
    ./test_ex12 | cat -te
    rm -rf test_ex12


elif [[ $PROJECT == "C03" ]]
then
    MAX_EXERCISE=5
    test_norminette 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C04" ]]
then
    MAX_EXERCISE=5
    test_norminette 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C05" ]]
then
    MAX_EXERCISE=7
    test_norminette 7 $MAX_EXERCISE
    for I in $(seq 7 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C06" ]]
then
    MAX_EXERCISE=3
    test_norminette 0 $MAX_EXERCISE
    test_c_exercise 00
    test_c_exercise 01 "test0 test1 test2 test3 teset2 test1 asda"
    test_c_exercise 02 "test0 test1 test2 test3 teset2 test1 asda"
    test_c_exercise 03 "test0 test1 zxcacas34 Trew4Sa "!!235ADFF" GoGol HelloWorld helloworld test2 test3 teset2 test1 asda"


elif [[ $PROJECT == "C07" ]]
then
    MAX_EXERCISE=5
    test_norminette 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C08" ]]
then
    MAX_EXERCISE=5
    test_norminette_real 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_c_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C09" ]]
then
    # TODO Test C09-ex00 (libft_creator.sh)
    # TODO Test C09-ex01 (Makefile)
    test_norminette_real 2 2
    test_c_exercise 02


elif [[ $PROJECT == "C10" ]]
then
    MAX_EXERCISE=3
    test_norminette_real 0 $MAX_EXERCISE
    for I in $(seq 0 $MAX_EXERCISE)
    do
        test_program_exercise $(printf "%02d" "$I")
    done


elif [[ $PROJECT == "C11" ]]
then
    test_norminette_real 0 7
    test_c_exercise 00
    test_c_exercise 01
    test_c_exercise 02
    test_c_exercise 03
    test_c_exercise 04
    test_program_exercise 05
    test_c_exercise 06
    test_c_exercise 07

fi
