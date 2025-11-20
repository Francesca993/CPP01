# 🎯 Cosa chiede l’esercizio 05 – Harl 2.0
Devi creare una classe Harl con:
* 4 funzioni membro private:
    - void debug(void);
    - void info(void);
    - void warning(void);
    - void error(void);
Ognuna stampa un messaggio diverso (quelli del pdf, o i tuoi, non importa).
E una funzione membro pubblica:
- void complain(std::string level);
che:
- riceve una stringa ("DEBUG", "INFO", "WARNING", "ERROR")
- chiama una delle 4 funzioni private a seconda del livello.
Devi creare dei test nel main per far “lamentare” Harl un po’ 😄

Cosa vuole farti imparare questo esercizio
- Puntatori a funzioni membro
- Mappare stringhe → funzioni
- Dato un std::string level, come scelgo la funzione giusta senza mille if?
Incapsulamento della logica dentro una classe
Tutta la logica dei messaggi sta in Harl.
Il main deve solo creare un Harl e chiamare complain("DEBUG"), ecc.

### 🔍 Ricapitolino: cosa vuole l’esercizio in 1 frase
Definire una classe Harl che, data una stringa di livello ("DEBUG", "INFO", "WARNING", "ERROR"), chiama la funzione privata corrispondente per stampare il messaggio, usando puntatori a funzioni membro invece di tanti if/else.

### Quando il subject parla di “level” (livello):
è solo un modo per classificare i messaggi che Harl dice.
Nel pdf te li elenca così:
"DEBUG" → messaggi di debug (dettagli tecnici)
"INFO" → informazioni generali sul funzionamento
"WARNING" → avvisi, qualcosa potrebbe essere un problema
"ERROR" → errori gravi, situazione critica
Questi sono chiamati livelli di log (logging levels).

### 3️⃣ Concetto nuovo: puntatore a funzione membro
Facciamo un mini esempio separato, non con Harl.
Immagina una classe:
```c++
class Foo {
public:
    void a() { std::cout << "A\n"; }
    void b() { std::cout << "B\n"; }
};
```
Un puntatore a funzione membro che punta a una funzione void senza parametri dentro Foo si dichiara così:
```c++
void (Foo::*fptr)();
```
* Foo::* → “puntatore a funzione membro di Foo”
* void (...)() → “funzione che non ritorna niente e non prende parametri”
Per assegnarlo:
```c++
fptr = &Foo::a;
```
Per chiamarla su un oggetto foo:
```c++
Foo foo;
(foo.*fptr)();     // chiama foo.a()
```
Se hai un puntatore a oggetto, tipo Foo* p = &foo;:
```c++
(p->*fptr)();      // chiama foo.a() tramite il puntatore
```


```c++
void Harl::complain(std::string level)
{
    // Array di stringhe
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    // Array di puntatori a funzioni membro
    HarlFunc funcs[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // Ciclo che cerca il livello giusto
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            // CHIAMATA DELLA FUNZIONE A CUI PUNTA funcs[i]
            (this->*funcs[i])();
            return;
        }
    }
}
```
