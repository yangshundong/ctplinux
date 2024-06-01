.PHONY: build clear  
  
build:  
	g++ -o demo -g main.cpp -L./ -lthosttraderapi_se -lthostmduserapi_se -Wl,-rpath=.  
  
clear:  
	rm -rf ./log
