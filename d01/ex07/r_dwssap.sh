cat /etc/passwd | grep -v "#" | sed '1d;n;d' | cut -d ":" -f 1 | rev | sort -r | sed ''$FT_LINE1','$FT_LINE2'!d' | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed  's/$/./' | tr -d "\n"