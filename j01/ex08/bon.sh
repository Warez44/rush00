ldapsearch -Q "cn=*bon*" cn | grep "^cn: " | sed 's/cn: // g' | wc -l
