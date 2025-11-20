# Allocazione di array di oggetti sull'heap.

```
Zombie* horde = new Zombie[5];   // ARRAY di 5 oggetti
delete[] horde;                   // Cancella l'ARRAY (nota le [])
```

## ATTENZIONE CRITICA:

```
Zombie* horde = new Zombie[10];
delete horde;    // ❌ ERRORE! Memory leak e undefined behavior
delete[] horde;  // ✅ CORRETTO!
```
### Come Funziona new Zombie[N]
```
Zombie* horde = new Zombie[5];
```

**Cosa succede:**
1. Alloca memoria per **5 zombie consecutivi**
2. Chiama il **costruttore DEFAULT** per ogni zombie (5 volte!)
3. Ritorna un puntatore al **primo elemento**

**Struttura in memoria:**
```
horde → [Zombie0][Zombie1][Zombie2][Zombie3][Zombie4]
         ↑
         puntatore ritornato

```
