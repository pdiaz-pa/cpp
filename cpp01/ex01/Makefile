OBJS = Contact.Class.o Phonebook.Class.o cyberphonebook2077.o 
SOURCE = Contact.Class.cpp \
		Phonebook.Class.cpp \
		cyberphonebook2077.cpp \
HEADER = Contact.Class.hpp Phonebook.Class.hpp 
OUT = cyberphonebook2077 
CC  = g++ 
FLAGS  = -Wall -Werror -Wextra -std=c++98 
LFLAGS  =  
 
all: $(OBJS) 
 $(CC) $(OBJS) -o $(OUT) $(LFLAGS) 
 
Contact.Class.o: Contact.Class.cpp 
 $(CC) $(FLAGS) Contact.Class.cpp  
 
Phonebook.Class.o: Phonebook.Class.cpp 
 $(CC) $(FLAGS) Phonebook.Class.cpp  
 
cyberphonebook2077.o: cyberphonebook2077.cpp 
 $(CC) $(FLAGS) cyberphonebook2077.cpp  
 
 
clean: 
 rm -f $(OBJS) $(OUT)