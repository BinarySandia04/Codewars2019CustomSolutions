ifdef OS
	WINDOWS=1
endif

all:
ifdef WINDOWS
		# Windows
		@echo "--------------------------------------"
		@echo "Compiling for the year $(year)"
		g++ src/code/codewars$(year).cpp -o out/$(year).exe
		@echo "Compiled!"
		@echo "--------------------------------------"
		@out/$(year).exe
else
		# Linux
		clear
		@echo "--------------------------------------"
		@echo "Compiling for the year $(year)"
		g++ src/code/codewars$(year).cpp -o out/$(year)
		@echo "Compiled!"
		@echo "--------------------------------------"
		clear
		@out/$(year)
endif
