cat /etc/passwd | sed '/^#/d' | tail -n +2 | sed 'n;d' | awk -F':' '{print $1}' | rev | sort -r | awk 'NR>=ENVIRON["FT_LINE1"] && NR<=ENVIRON["FT_LINE2"]' | sed '$!s/$/,/' | tr '\n' ' ' | sed 's/\(.*\)/\1./' | tr -d '\n'

