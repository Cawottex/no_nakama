#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *
from random import randrange

def find_number(max_val):
    tofind = randrange(max_val)
    while (1):
        nbr = raw_input("Veuillez entrer un nombre: ")
        try:
            nbr = int(nbr)
            if (nbr < tofind):
                print("Trop bas")
            if (nbr > tofind):
                print("Trop haut")
            if (nbr == tofind):
                print("Bravo, c'était bien %d" %(tofind))
                return (0)
        except:
            print("Veuillez entrer un nombre correct")

def main():
    print("Bienvenue dans le jeu")
    max_val = raw_input("Choisissez votre palier maximum")
    try:
        max_val = int(max_val)
        find_number(max_val)
    except:
        print("Veuillez entrer un pallier correct")

if __name__ == "__main__":
    main()
