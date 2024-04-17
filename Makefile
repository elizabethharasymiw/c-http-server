target:
	gcc -o http-server http-server.c 

run: target
	./http-server

clean:
	rm http-server
