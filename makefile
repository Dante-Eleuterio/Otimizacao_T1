parametrosCompilacao=-Wall #-Wshadow
nomePrograma=producao

all: $(nomePrograma)

$(nomePrograma): t1.o
	g++ -o $(nomePrograma) t1.o $(parametrosCompilacao)

t1.o: t1.cpp
	g++ -c t1.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)