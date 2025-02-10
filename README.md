# Push_swap - Projet 42

## Description

Le projet **Push_swap** de 42 est un exercice d'algorithmie visant à trier une pile de nombres en utilisant un ensemble limité d'opérations sur deux piles (`a` et `b`). L'objectif est d'implémenter un algorithme efficace qui réalise ce tri en un nombre minimal de mouvements.

## Objectifs
- Comprendre et implémenter des algorithmes de tri optimisés.
- Manipuler des structures de données comme les piles (*stacks*).
- Optimiser le nombre de mouvements pour trier efficacement.
- Gérer les erreurs et vérifier la validité des entrées.

## Règles et Contraintes
- Utilisation de deux piles : `a` (initialement remplie) et `b` (vide au début).
- Utilisation d'un ensemble restreint d'opérations :
  - `sa` : Échanger les deux premiers éléments de `a`.
  - `sb` : Échanger les deux premiers éléments de `b`.
  - `ss` : Appliquer `sa` et `sb` simultanément.
  - `pa` : Pousser le premier élément de `b` sur `a`.
  - `pb` : Pousser le premier élément de `a` sur `b`.
  - `ra` : Faire une rotation ascendante de `a`.
  - `rb` : Faire une rotation ascendante de `b`.
  - `rr` : Appliquer `ra` et `rb` simultanément.
  - `rra` : Faire une rotation descendante de `a`.
  - `rrb` : Faire une rotation descendante de `b`.
  - `rrr` : Appliquer `rra` et `rrb` simultanément.

## Approche Algorithmique

Différentes stratégies peuvent être utilisées pour implémenter **Push_swap** :
- **Tri simple (cas de 2-5 nombres)** : Utilisation de conditions spécifiques et d’opérations directes.
- **Algorithme du tri rapide optimisé** : Segmentation des nombres en sous-groupes et utilisation efficace des opérations.
- **Algorithmes avancés** : Implémentation d’un tri à base de `Radix Sort` ou d’autres stratégies minimisant les mouvements.

## Étapes de Développement
1. **Parsing et validation des entrées** : Vérifier que seules des valeurs numériques sont fournies.
2. **Implémentation des opérations** : Développement des commandes de manipulation des piles.
3. **Choix et implémentation de l’algorithme** : Optimisation du tri pour obtenir un minimum de mouvements.
4. **Gestion des erreurs et tests** : Vérification de la robustesse du programme avec divers scénarios.

## Compilation et Exécution

1. Compiler le programme :
   ```sh
   make
   ```
2. Lancer Push_swap avec une liste de nombres :
   ```sh
   ./push_swap 4 67 3 87 23
   ```

## Conclusion

**Push_swap** est un projet demandant une réflexion algorithmique poussée et une optimisation fine des mouvements. Il constitue une excellente introduction à la manipulation des structures de données et à l'optimisation des performances.

Bonne programmation et bon tri ! 🚀

