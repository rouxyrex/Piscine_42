ldapsearch -LLL -Q  uid="z*" cn | sort -rf | grep "cn" | cut -c5-
