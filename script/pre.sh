#!/bin/bash
#
# Run this before recreating the feature.
# Set the permissions so the webserver can update the files.
#

find . -name "script" -prune -o \
       -name "\.git*" -prune -o \
       -exec chmod g+w "{}" \;
