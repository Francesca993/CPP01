# 🎯 COSA CHIEDE L’ESERCIZIO (in parole semplici)
Il programma deve prendere 3 parametri da riga di comando:
- il nome di un file
- una stringa s1
- una stringa s2
Deve:
- aprire il file originale
- leggere tutto il contenuto
- creare un nuovo file <filename>.replace
- in questo nuovo file, sostituire ogni occorrenza di s1 con s2

📌 Vietato usare std::string::replace (di proposito).
Deviation: puoi usare qualsiasi altra funzione di std::string.

**Aprire un file in lettura → std::ifstream**
```c++
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open input file" << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return 1;
    }
```
**Sintassi chiave:**
- std::ifstream → lettura
- std::ofstream → scrittura
- filename + ".replace" → nome del nuovo file

**Stringhe e ricerca di sottostringhe**
- find() → per trovare dove si trova s1 dentro una stringa
- substr() → per ritagliare parti della stringa
- concatenazione → per costruire la nuova stringa
```c++
pos = line.find(s1);
if (pos != std::string::npos) { ... }
```

**Leggere il file riga per riga**
```c++
    std::string line;
    while (std::getline(infile, line))
    {
        // qui dentro modifichi la linea sostituendo s1 con s2
        // poi la scrivi in outfile
    }

```

**💡 std::string::npos — CHE COS’È?**

È una costante speciale usata da std::string::find().
Significa:
👉 “non trovato”
Infatti:
```c++
line.find(s1)
```
se trova s1 → ti dà la posizione (0, 5, 10…)
se NON trova s1 → ti restituisce std::string::npos


**outfile.open(outputFileName.c_str(), std::ios::out | std::ios::trunc);**
Ottima osservazione, questa è una di quelle righe “magiche” che tutti copiano senza capire 😄
1️⃣ outputFileName.c_str()
outputFileName è una std::string
open() vuole un const char* (stile C, tipo "file.txt")
.c_str() serve a convertire std::string → const char*
👉 Quindi: outputFileName.c_str() = nome del file in formato che open() accetta.

2️⃣ std::ios::out
È un flag che dice:
"Apri questo file per scrivere (output)."
È l’equivalente di w in C (fopen("file", "w")), ma in stile C++ con i flag.

3️⃣ std::ios::trunc
Significa:
"Se il file esiste già, cancella tutto il contenuto e ricomincia da zero."
(trunc = truncate = troncare)
Quindi, combinati:
```c++
std::ios::out | std::ios::trunc
```
vuol dire:
"Apri il file in scrittura, e se il file esiste già, svuotalo."

Se non mettessi std::ios::trunc e aprissi in modalità append (tipo std::ios::app), ogni esecuzione attaccherebbe il nuovo contenuto in fondo al vecchio → caos 😅

4️⃣ Piccolo confronto utile
std::ios::out | std::ios::trunc → scrivo da zero, file pulito
std::ios::out | std::ios::app → scrivo in fondo al file, senza cancellare prima

**aprire un file in scrittura → std::ofstream**

Una volta che hai:
```c++
std::ofstream outfile((filename + ".replace").c_str(),
                      std::ios::out | std::ios::trunc);
```

puoi scrivere nel file esattamente come con std::cout:
```c++
outfile << "Ciao mondo" << std::endl;
```
- outfile funziona come un “cout su file”
- << è lo stesso operatore di output
- std::endl va a capo e fa flush del buffer

Nel caso dell’esercizio:
```c++
std::string line;

while (std::getline(infile, line))
{
    // qui fai le sostituzioni di s1 con s2 dentro "line"

    outfile << line << std::endl;   // scrivi la linea modificata nel file .replace
}
```