@ECHO OFF
rem This batch script is used for my C learning
rem this file will generate a new folder and move the proper tempates into the 
rem folder. All files and folders will be named from the comand line variables
echo:
echo Creating new folder
mkdir %1
echo moving templates
copy ".\templates\main.c" ".\%1\%1.c"
echo:
echo complete
pause