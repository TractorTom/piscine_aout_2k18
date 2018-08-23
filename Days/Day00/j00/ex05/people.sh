ldapsearch uid="z*" cn | grep "^cn" | cut -c5- | sort -fr
