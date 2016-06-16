#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *

def create_fridge():
    fridge = dict()
    fridge["tomato"] = 50
    fridge["pasta"] = 50
    fridge["ham"] = 50
    fridge["cheese"] = 50
    return (fridge)

def aff_help():
    print("Voici les différentes commandes possibles:")
    print("help: affiche ce help")
    print("quit: Quitte le frigo")
    print("disp fridge: Affichage les ingrédient présent dans le frigo")
    print("eat: Permet de manger un ingrédient")
    print("add: Permet d'ajouter un ingrédient")
    print("prepare: Permer de préparer un repas")
    print("Voici la liste des différents meal disponibles:")
    print("pizza | pasta")

def my_strcmp(str1, str2):
    i = 0
    if (len(str1) != len(str2)):
        return (1)
    while (i < len(str1)):
        if (str1[i] != str2[i]):
            return (1)
        i += 1
    return (0)

def aff_fridge(fridge):
    for food, nbr in fridge.items():
        print("{}: {}".format(food, nbr))

def is_food(food):
    if (my_strcmp(food, "tomato") == 0):
        return (0)
    if (my_strcmp(food,"cheese") == 0):
        return (0)
    if (my_strcmp(food,"ham") == 0):
        return (0)
    if (my_strcmp(food,"pasta") == 0):
        return (0)
    return (1)

def eat_food(fridge):
    food = raw_input("Chosissez l'ingrédient à manger: ")
    if (is_food(food) == 1):
        print("Mauvais ingrédient")
        return (0)
    qnt = raw_input("Choisissez la quantité: ")
    try:
        qnt = int(qnt)
    except:
        print("Mauvaise quantité")
        return (0)
    if (my_strcmp(food, "tomato") == 0):
        if (fridge["tomato"] >= qnt):
            fridge["tomato"] -= qnt
        else:
            print("Not enough tomatoes")
            return (0)
    if (my_strcmp(food,"cheese") == 0):
        if (fridge["cheese"] >= qnt):
            fridge["cheese"] -= qnt
        else:
            print("Not enough cheese")
            return (0)
    if (my_strcmp(food,"ham") == 0):
        if (fridge["ham"] >= qnt):
            fridge["ham"] -= qnt
        else:
            print("Not enough ham")
            return (0)
    if (my_strcmp(food,"pasta") == 0):
        if (fridge["pasta"] >= qnt):
            fridge["pasta"] -= qnt
        else:
            print("Not enough pasta")
            return (0)
    print("Vous avez mangé {} {}".format(qnt, food))

def the_fridge(fridge):
    command = "lol"
    while (my_strcmp(command, "quit") != 0):
        command = raw_input("Veuillez entrer votre commande: ")
        if (my_strcmp(command, "disp fridge") == 0):
            aff_fridge(fridge)
        if (my_strcmp(command, "help") == 0):
            aff_help()
        if (my_strcmp(command, "eat") == 0):
            eat_food(fridge)

def main():
    print("Bienvenue dans le frigo")
    aff_help()
    fridge = create_fridge()
    the_fridge(fridge)

if __name__ == "__main__":
    main()
