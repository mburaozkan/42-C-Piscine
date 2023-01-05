cat /etc/passwd | sed -e 's/#.*//' -e '/^$/ d' -e 's/:.*//g' | rev | sort -r | tr "\n" "," | sed -e 's/, */, /g' -e 's/.$//' -e 's/.\{1\}$//'
