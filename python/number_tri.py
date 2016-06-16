#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *

def tri_list(fruit_list):
    while (len(fruit_list) > 0):
        tmp = fruit_list[0]
        i = 0
        while (i < len(fruit_list)):
            if (fruit_list[i] > tmp):
                tmp = fruit_list[i]
            i += 1
        print("{}".format(tmp))
        fruit_list.remove(tmp)

def main():
    chaine = raw_input("Veuillez entrer vos nombres à trier: ")
    fruit_list = chaine.split(" ")
    i = 0
    while (i < len(fruit_list)):
        try:
            fruit_list[i] = int(fruit_list[i])
        except:
            return (0)
        i += 1
    tri_list(fruit_list)

if __name__ == "__main__":
    main()
