#!/usr/bin/python
# -*- coding: utf-8 -*-

class Manga:

    def __init__(self):
        self.nom = ""
        self.genre = ""
        self.nbr = 0
        self.en_cours = True

    def print_manga(self):
        if (self.en_cours == True):
            answer = "Oui"
        else:
            answer = "Non"
        print("Manga: {}\nGenre: {}\nTomes disponibles: {}\nEn cours ? {}".format(self.nom, self.genre, self.nbr, answer))
