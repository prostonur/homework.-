@echo off
chcp 1251 > NUL
md %1 & cd %1
md "AlgAndGeom" "MathAnalysis" "DiscreteMath" "BasicsOfprogramming"
cd "AlgAndGeom" && echo "Балыкина Юлия ЕФимовна" > readme.txt. && echo "Начало занятий:%time%" >>readme.txt
cd..
cd "MathAnalysis" && echo "Мышков Станислав Константинович" > readme.txt. && echo "Начало занятий:%time%" >>readme.txt
cd..
cd "DiscreteMath" && echo "Воронкова Ева Боруховна" > readme.txt. && echo "Начало занятий:%time%" >>readme.txt
cd..
cd "BasicsOfprogramming" && echo "Погожев Сергей Владимирович" > readme.txt. && echo "Начало занятий:%time%" >>readme.txt
cd..
copy "op.bat" "semestr1"
copy "algem.bat" "semestr1"
