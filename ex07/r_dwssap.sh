cat /etc/passwd | sed '/#/d' | sed 's/:.*$//' | sed -n 'n;p' | rev | sort -r | awk -v start=$FT_LINE1 -v end=$FT_LINE2 'NR==start, NR==end' | sed 's/$/, /' | tr -d '\n' | sed 's/..$/./' | tr -d '\n'
