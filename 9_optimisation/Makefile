COMPILER = g++ # or CC if you prefer it on Hercules

DRIVER = optimisation

CXXFLAGS = -std=c++11 -Wall -Wvla -Werror -g

GTESTFLAGS = -lgtest -pthread -lgtest_main


all: $(DRIVER)

$(DRIVER) : $(DRIVER).o  #the first character on the next line is a tab 
	$(COMPILER) $(CXXFLAGS) -o $(DRIVER) $(DRIVER).o $(GTESTFLAGS)
	./$(DRIVER)

$(DRIVER).o :  $(DRIVER).cpp  
	$(COMPILER) -c $(DRIVER).cpp  -o $(DRIVER).o -std=c++11


clean:
	@ /bin/rm -f *.o

##############################################
# installs that should be done once
##############################################
installonce: gtestinstall makedependinstall valgrindinstall

gtestinstall: 
	sudo apt-get install libgtest-dev
	sudo apt-get install cmake
	cd /usr/src/gtest; \
	sudo cmake CMakeLists.txt; \
	sudo make; \
	sudo cp *.a /usr/lib
	sudo chmod u+r /usr/lib/libgtest.a
	sudo chmod u+r /usr/lib/libgtest_main.a

makedependinstall:
	sudo apt-get install xutils-dev

valgrindinstall:
	sudo apt-get install valgrind
##############################################

.PHONY: all clean depend installonce gtestinstall makedependinstall valgrindinstall


# DO NOT DELETE THIS LINE -- make depend depends on it.