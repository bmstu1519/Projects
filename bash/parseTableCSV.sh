#!/bin/bash

file_source="test.csv"
file_output="test.txt"
ddl=
sql_attrs=
tb_check=
{
read 
while IFS=";" read system shema table_name atr impala_types 
do
if [[ $tb_check !=  $table_name && ! -z "$tb_check" ]]
then
	ddl="CREATE TABLE IF NOT EXISTS rrp_evr_$shema.$tb_check(${sql_attrs::-1});"
	echo "$ddl" >> "$file_output"
	sql_attrs=
fi
tb_check=$table_name
sql_attrs+="$atr String"$'\n'","
echo "$tb_check || $atr"
done }< "$file_source"

echo "$ddl" >> "$file_output"
#echo "$tb_schema $tb_check "

