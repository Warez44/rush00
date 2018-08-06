ldapsearch -xLLL "uid=z*" cn | grep "^cn: " | cut -d ":" -f2 | sort -rf
