# get_next_line 📖

Implémentation de la fonction **`get_next_line`** en C, réalisée dans le cadre du cursus **42**.

Le projet consiste à écrire une fonction capable de lire un fichier **ligne par ligne**, en conservant les données non consommées entre plusieurs appels.

## Fonctionnalités

* 📄 Lecture d'un fichier ligne par ligne
* 🔄 Conservation du contenu restant entre les appels
* 📁 Gestion de différents descripteurs de fichiers
* 🧠 Gestion dynamique de la mémoire
* 📦 Utilisation d'un buffer de taille configurable avec `BUFFER_SIZE`
* ⚙️ Gestion de la fin de fichier (`EOF`)
* 🔀 Support de plusieurs appels successifs à `get_next_line`

## Fonctionnement

La fonction principale est :

```c
char *get_next_line(int fd);
```

À chaque appel, elle retourne la prochaine ligne disponible dans le fichier.

Pour un fichier :

```text
Hello
World
42
```

Les appels successifs retournent :

```text
"Hello\n"
"World\n"
"42\n"
NULL
```

## Structure

```text
get_next_line/
├── get_next_line.c
├── get_next_line.h
├── get_next_line_utils.c
└── README.md
```

### `get_next_line.c`

Contient l'implémentation principale de `get_next_line` ainsi que la gestion de la lecture et du contenu restant.

### `get_next_line_utils.c`

Contient les fonctions utilitaires nécessaires au fonctionnement de `get_next_line`.

### `get_next_line.h`

Contient les prototypes et définitions nécessaires au projet.

## Concepts étudiés

Ce projet permet notamment de travailler sur :

* Descripteurs de fichiers
* `open()`
* `read()`
* `close()`
* Allocation dynamique avec `malloc()`
* Gestion de la mémoire avec `free()`
* Buffers
* Chaînes de caractères
* Gestion de l'EOF
* Variables `static`

## Compilation

La fonction peut être compilée avec une taille de buffer définie à la compilation :

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 \
    get_next_line.c get_next_line_utils.c
```

`BUFFER_SIZE` peut être modifié pour tester différents comportements :

```bash
-D BUFFER_SIZE=1
-D BUFFER_SIZE=42
-D BUFFER_SIZE=1000
```

## Objectif du projet

L'objectif de **get_next_line** est de comprendre comment fonctionne la lecture de fichiers en C et de manipuler efficacement les données lues sans perdre les caractères appartenant à la ligne suivante.

Ce projet constitue également une première approche de la gestion de données persistantes entre plusieurs appels grâce aux **variables `static`**.

## Auteur

IQiyuu

Projet réalisé dans le cadre du **cursus 42**.
