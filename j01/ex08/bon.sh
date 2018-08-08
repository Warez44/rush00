ldapsearch -Q "sn=*bon*" sn | grep "^sn: " | sed 's/sn: // g' | wc -l
