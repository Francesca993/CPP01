# Stack vs Heap - Concetti Fondamentali

## Stack (Pila)


```
void funzione() {
    Zombie z;  // Allocato sullo stack
    // z viene automaticamente distrutto quando la funzione termina
}
```
Caratteristiche:
* Automatico: allocazione e deallocazione gestite automaticamente
* Veloce: molto efficiente
* Scope limitato: l'oggetto vive solo nel blocco dove è dichiarato
* Distruzione automatica: il distruttore viene chiamato automaticamente

## Heap (Memoria dinamica)

```
Zombie* funzione() {
    Zombie* z = new Zombie;  // Allocato sull'heap
    return z;  // Può essere usato fuori dalla funzione
    // ATTENZIONE: devi chiamare delete manualmente!
}

// Da qualche altra parte
Zombie* mioZombie = funzione();
delete mioZombie;  // OBBLIGATORIO!
```
Caratteristiche:
* Manuale: devi gestire allocazione (new) e deallocazione (delete)
* Persistente: l'oggetto vive finché non chiami delete
* Può essere restituito: puoi usarlo fuori dalla funzione
* Rischio memory leak: se dimentichi delete


## Differenza Pratica nell'Uso

- Esempio con newZombie:
```
int main() {
    Zombie* z = newZombie("Heap Zombie");
    z->announce();  // Uso il puntatore con ->
    // ... posso usare z per tutto il programma
    delete z;  // DEVO ricordarmi di distruggerlo!
    return 0;
}

```

- Esempio con randomChump:

```
int main() {
    randomChump("Stack Zombie");  // Viene creato e distrutto subito
    // Non posso più usare quello zombie qui
    return 0;
}

```
### Punti Chiave da Ricordare:
✅ Stack: veloce, automatico, ma scope limitato
✅ Heap: persistente, ma richiede delete manuale
✅ Costruttore: inizializza l'oggetto
✅ Distruttore: pulisce le risorse (chiamato automaticamente per stack, manualmente per heap dopo delete)
✅ Puntatore: usa -> per accedere ai membri
✅ Oggetto normale: usa . per accedere ai membri

# Cos’è una classe in C++ e come si definisce

```c++
class NomeClasse {
private:
    // attributi (variabili)
public:
    // costruttori
    // distruttore
    // funzioni membro
};
```
# Costruttore e Distruttore

🧱 Il costruttore
È una funzione speciale che:
* ha lo stesso nome della classe,
* viene chiamata automaticamente quando crei un oggetto,
* serve per inizializzare gli attributi.

```c++
class Zombie {
public:
    Zombie(std::string name) {
        this->name = name;
    }
};
```

💀 Il distruttore
Un’altra funzione speciale che:
* si chiama automaticamente quando un oggetto muore,
* ha il nome della classe preceduto da ~

```c++
~Zombie() {
    std::cout << name << " is destroyed\n";
}
```
