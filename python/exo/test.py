#!/usr/bin/python
# -*- coding: utf-8 -*-

import commands
import create

def print_commands():
    print("1 : Achat de medicament")
    print("2 : Approvisionnement en médicaments")
    print("3 : Etats des stocks et des credits")
    print("4 : Quitter")

def compare(str1, str2):
    i = 0
    if (len(str1) != len(str2)):
        return (1)
    while (i < len(str1)):
        if (str1[i] != str2[i]):
            return (1)
        i += 1
    return (0)

def main():
    command = ""
    medics = create_medics()
    costumers = create_costumers()
    while (compare(command, "4") != 0):
        print_commands()
        command = raw_input()
        if (compare(command, "1") == 0):
            do_buy(costumers, medics)
        elif (compare(command, "2") == 0):
            do_approv()
        elif (compare(command, "3") == 0):
            do_stocks()
        elif (compare(command, "4") == 0):
            print("Buy ")
        else:
            print("Wrong number")

if __name__ == "__main__":
    main()
