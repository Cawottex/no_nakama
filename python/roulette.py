#!/usr/bin/python
# -*- coding: utf-8 -*-

from random import randrange
from math import ceil

def receive_num():
    num = 50
    while (1):
        num = raw_input("Choisissez un numero à parier: ")
        try:
            num = int(num)
            if num < 0 or num >= 50:
                print("Mauvais numéro,entrez un numéro entre 0 et 49")
            else:
                return (num)
        except:
            print("Veuillez entrer un numéro")

def receive_money():
    while (1):
        money = raw_input("Choisissez votre argent de départ: ")
        try:
            money = int(money)
            return (money)
        except:
            print("Mauvaise somme d'argent")

def receive_bet(money):
    while (1):
        bet = raw_input("Choisissez votre mise: ")
        try:
            bet = int(bet)
            if (bet > money):
                print("Vous ne pouvez pas miser autant")
            if (bet > 0):
                print("Vous avez misé %d$" %(bet))
                return (bet)
            else:
                print("Veuillez entrer un nombre positif")
        except:
            print("Veuillez entrer un nombre correct")

def tab_mult(money):
    print("Vous avez %d$" %(money))
    bet = receive_bet(money)
    num = receive_num()
    res = randrange(50)
    print("\nLe numéro tiré est le %d" %(res))
    if num == res:
        print("Nombres identiques: Vous avez gagné %d$" %(bet * 3))
        return (money + bet * 3)
    if (num % 2 == 1 and res % 2 == 1) or (num % 2 == 0 and res % 2 == 0):
        print("Couleur indentique: Vous avez gagné %d$" %(ceil(bet / 2)))
        return (money + ceil(bet / 2))
    print("Vous perdez votre mise")
    return (money - bet)

def main():
    money = receive_money()
    while money != 0:
        money = tab_mult(money)
    print("Désolé, vous avez perdu")

if __name__ == "__main__":
    main()
