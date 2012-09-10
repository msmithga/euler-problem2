CC = g++ 
CFLAGS = -Wall -Werror -Wextra -Weffc++ -pedantic

euler3: euler3.cpp
	$(CC) $(CFLAGS) -o euler3 euler3.cpp