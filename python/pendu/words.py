#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *
from random import randrange

def modif_answer(carac, word, answer):
    i = 0
    res = 0
    new = str()
    while (i < len(word)):
        if (word[i] == carac):
            new += carac
            res = 1
        else:
            new += answer[i]
        i += 1
    if (res == 1):
        print("Bien joué !")
    else:
        print("Dommage, mauvaise lettre")
    return (new, res)

def create_answer(word):
    i = 0
    new = "*"
    while (i < len(word) - 1):
        new += "*"
        i += 1
    return (new)

def create_words():
    words = list()
    words.append("penser")
    words.append("suede")
    words.append("mime")
    words.append("tranche")
    words.append("couronne")
    words.append("etape")
    words.append("humain")
    words.append("hieroglyphe")
    words.append("bouteille")
    words.append("attirer")
    return (words)

def search_word():
    words = create_words()
    i = randrange(10)
    return (words[i])
