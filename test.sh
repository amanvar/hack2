#!/bin/bash
# new='\n'
cat file.json | jq '.Description' | while read lines
do
	# echo "$lines"
	curl -d "text=$lines" URL
done
