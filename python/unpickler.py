#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *
import pickle

def main():
    test = open("file", "rb")
    my_unpickler = pickle.Unpickler(test)
    fridge = my_unpickler.load()
    test.close()
    for food, qnt in fridge.items():
        print("{}: {}".format(food, qnt))

if __name__ == "__main__":
    main()
