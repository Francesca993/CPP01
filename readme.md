Dal Modulo 02 al 09: Orthodox Canonical Form (Rule of Three in C++98).
Ogni classe deve definire esplicitamente:
* Costruttore di default,
* Copy constructor,
* Operatore di assegnazione di copia,
* Distruttore.

```
class Foo {
public:
    Foo();                                // default ctor
    Foo(const Foo& other);                // copy ctor
    Foo& operator=(const Foo& other);     // copy assign
    ~Foo();                               // dtor
private:
    // membri, magari puntatori/risorse
};
```

* **Mini-checklist veloce prima di consegnare**
Compila con -Wall -Wextra -Werror -std=c++98.
Tutti gli header hanno guard e includono le loro dipendenze.
Nessuna funzione non-template implementata in header.
Distruttori corretti e niente leak (soprattutto su horde).
Output esattamente come negli esempi (con \n).
Makefile ok e nomi dei file/classi come richiesto.

Tema del modulo:
* allocazione memoria (stack vs heap, new/delete)
* puntatori a member (es. in Harl 2.0 per evitare if-else nidificati)
* reference (alias obbligatoriamente inizializzati)
* switch (usato nel filtro dei log)

# Stack vs Heap

**Stack**
- Oggetti con durata automatica: si creano entrando nello scope e si distruggono uscendo (distruttore chiamato automaticamente).
- Nessun delete, zero rischi di leak se non fai cose strane.
- Costi/benefici: velocissimo, niente new/delete, minori rischi di leak.
- Limiti/attenzioni: dimensione limitata; NON restituire mai riferimenti/puntatori a variabili locali (diventano dangling).
Quando conviene lo stack
- Oggetti piccoli/medi con vita breve e locale.
- Non devono sopravvivere allo scope attuale.
- Non hai bisogno di “possedere” l’oggetto oltre la funzione.

**Heap**
Cos’è: memoria dinamica che richiedi esplicitamente con new e liberi con delete.
- Oggetti con durata dinamica, creati con new e obbligo di delete (o delete[] per array).
- Usa heap quando la vita dell’oggetto deve superare lo scope corrente, o ti serve restituirlo/gestirne molti in modo dinamico (es. horde nel prossimo esercizio).

- Vita degli oggetti: decidi tu quando finiscono: finché non fai delete rimangono vivi.
- Costi/benefici: flessibilità (dimensione/lifetime a piacere), utile per strutture dinamiche.
- Limiti/attenzioni: più lento, rischio memory leak, double delete, use-after-free; per array serve delete[].

### Dereferenziare” (dereferenziazione): che significa e come si fa

Idea: un puntatore contiene un indirizzo di memoria. Dereferenziare vuol dire “seguire” quell’indirizzo per accedere all’oggetto a cui punta.

**Con i puntatori**

*p → ottieni l’oggetto referenziato (lvalue).
p->m → scorciatoia per (*p).m.

**Con i reference** 
Un reference (T&) è un alias di un oggetto: non contiene un indirizzo “maneggiabile” come un puntatore, e non si dereferenzia con *. Lo usi direttamente:

**Differenze chiave puntatore vs reference**

* Il reference deve essere inizializzato e non può essere null né riassegnato.
* Il puntatore può essere null e può cambiare target; ma richiede */-> per accedere al valore.

```


```

```

```

```

```