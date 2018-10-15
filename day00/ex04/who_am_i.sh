#!/bin/bash
#this script returns the value of the distinguished name

ldapsearch -h ldap-master.42.us.org uid=mputra | sed -n 's/^dn: \(.*\),\(.*\),\(.*\),\(.*\),\(.*\),\(.*\),\(.*\)/\1,\3,\4,\5,\6/p'
