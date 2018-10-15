#!/bin/bash

# displays the number of regular files and directories in the current directory
# and all its sub-directories. It should include ".", the starting directory.

find . -type f | wc -l | awk '{$1=$1; print}'
