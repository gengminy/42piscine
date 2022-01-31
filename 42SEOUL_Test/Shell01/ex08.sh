#!/bin/bash
V1=$(echo $FT_NBR1 | tr \'\\ 01 | tr \"\?\! 234)
V2=$(echo $FT_NBR2 | tr mrdoc 01234)
RESULT=$(echo "ibase=5;obase=D;$(echo "$V1 + $V2")")
echo $RESULT | bc | tr 0123456789ABC 'gtaio luSnemf'
