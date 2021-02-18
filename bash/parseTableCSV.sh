#!/bin/bash

file_source="test.csv"
file_output="test.txt"
ddl=
sql_attrs=
tb_check=
tb_schema=
{
read 
while IFS=";" read system shema table_name atr impala_types 
do
if [[ $tb_check !=  $table_name && ! -z "$tb_check" ]]
then
	ddl="CREATE TABLE IF NOT EXISTS rrp_evr_$shema.$tb_check(${sql_attrs::-1});"
	echo "$ddl" >> "$file_output"
	tb_schema=$shema
	sql_attrs=
fi
tb_check=$table_name
sql_attrs+="$atr String"$'\n'","
echo "$tb_check || $atr"

done }< "$file_source"

ddl="CREATE TABLE IF NOT EXISTS rrp_evr_$tb_schema.$tb_check(${sql_attrs::-1});"
echo "$ddl" >> "$file_output"
#echo "$tb_schema $tb_check "

