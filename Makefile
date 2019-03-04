all:
	@echo "Compiling for the year $(year)"
	g++ src/code/codewars$(year).cpp -o out/$(year).exe
	@echo "Compiled!"
	out/$(year).exe
