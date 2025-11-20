# 🎯 REFERENZA vs PUNTATORE

### 🔹 REFERENCE = soprannome di un oggetto
Una reference è solo un altro nome per un oggetto già esistente.
Cosa significa?
Deve essere inizializzata subito.
Non può essere cambiata per riferirsi ad altro.
Non può essere NULL.
Non richiede * o -> per accedere ai membri.

```
int a = 10;
int &r = a;    // r è un altro nome di a
r = 20;        // cambia anche a
```

### 🔹 POINTER = indirizzo di memoria di un oggetto
Un pointer contiene un indirizzo.
Cosa significa?
Può essere inizializzato dopo.
Può cambiare oggetto.
Può essere NULL (ovvero “non punta a niente”).
Per usarlo devi fare * (dereferenziare) o ->.
```
int a = 10;
int *p = &a;  // p contiene l'indirizzo di a
*p = 20;      // cambia a
p = NULL;     // può essere senza oggetto
```
# Esempi:

### Variabile normale

```c++
std::string str = "Hello";
```
Contiene direttamente il valore.
Per stampare il valore → str
Per stampare l’indirizzo → &str

esempio:
```c++
std::cout << str << std::endl;   // stampa: Hello
std::cout << &str << std::endl;  // stampa: indirizzo (tipo 0x7ff...)

```

### Puntatore
✔ Come si crea un puntatore
* std::string* → “ptr è un puntatore a una stringa”
* &str → gli metti dentro l’indirizzo di str
```c++
std::string* ptr = &str;

# Come si usa
std::cout << ptr << std::endl;    // indirizzo (lo stesso di &str)
std::cout << *ptr << std::endl;   // valore (come str)
```
📌 Regola d’oro:
* ptr → indirizzo
* *ptr → valore

### Referenza
* std::string& → “ref è una referenza a una stringa”
* ref è un alias, un secondo nome per str
📌 Regola d’oro:
* ref → valore
* &ref → indirizzo
Non esiste *ref perché una referenza non si dereferenzia.

```c++
std::string& ref = str;

std::cout << ref << std::endl;    // valore (come str)
std::cout << &ref << std::endl;   // indirizzo (lo stesso di &str)
```

### Esempio completo e chiaro
```c++
int main() {
    std::string str = "HI THIS IS BRAIN";

    std::string* ptr = &str;   // puntatore
    std::string& ref = str;    // referenza

    // Indirizzi
    std::cout << &str << std::endl;    // indirizzo originale
    std::cout << ptr << std::endl;     // stesso indirizzo
    std::cout << &ref << std::endl;    // stesso indirizzo

    // Valori
    std::cout << str << std::endl;     // valore
    std::cout << *ptr << std::endl;    // valore
    std::cout << ref << std::endl;     // valore
}

```