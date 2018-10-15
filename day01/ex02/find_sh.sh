#!/bin/bash
#searches for all file names that end with ".sh" (without quotation marks) 
#in the current directory and all its sub-directories. It should display only the file names without the .sh.

find . -name '*.sh' -exec basename {} \; | sed 's/\.sh//'
