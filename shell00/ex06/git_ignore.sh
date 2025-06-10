#!/bin/sh

gitIgnoreFile="$HOME/git_repo/.gitignore"
TMP_FILE="tmp.txt"

cat $gitIgnoreFile > $TMP_FILE

echo "Ficheros de .gitignore:"
cat $gitIgnoreFile

echo ""

echo "Ficheros encontrados:"
while read line
do
    find $HOME -name $line
done < $TMP_FILE

rm $TMP_FILE