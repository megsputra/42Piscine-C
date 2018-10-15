#!/bin/sh
# file called people.sh, type in the command that will list the cn list for all accounts that have a uid starting with ’z’. This list will only show the cn, in reverse alphabetical order, and NOT case-sensitive. There shouldn’t be any unecessary empty lines.
ldapsearch -h ldap-master.42.us.org -LLL "(uid=z*)" cn | grep '^cn:' | sort -r
