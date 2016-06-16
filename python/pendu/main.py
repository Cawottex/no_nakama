#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *
import pickle
import words
import score

def the_game(word):
    count = 8
    answer = words.create_answer(word)
    while (count != 0):
        print("Mot actuel: {}".format(answer))
        carac = raw_input("Entrez une lettre: ")
        while (len(carac) != 1):
            carac = raw_input("Entrez une lettre: ")
        answer, res = words.modif_answer(carac, word, answer)
        i = score.search_score(answer)
        if (i == 0):
            return (i)
        if (res == 0):
            count -= 1
        print("Nombre de vie(s) restante(s): {}".format(count))
    return (i)

def main():
    print("Bienvenue dans le jeu du pendu")
    name = raw_input("Entrez votre nom: ")
    word = words.search_word()
    score = the_game(word)
    if (score == 0):
        print("Bravo, vous avez gagné. Le mot était bien {}".format(word))
    else:
        print("Désolé, vous avez perdu. Le mot était {}".format(word))

if __name__ == "__main__":
    main()
