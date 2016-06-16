#!/usr/bin/python
# -*- coding: utf-8 -*-

from string import *
import pickle

def create_fridge():
    fridge = dict()
    fridge["tomato"] = 12
    fridge["cheese"] = 20
    fridge["ham"] = 6
    fridge["pizza"] = 2
    return (fridge)

def main():
    fridge = create_fridge()
    test = open("file", "wb")
    my_pickler = pickle.Pickler(test)
    my_pickler.dump(fridge)
    test.close()

if __name__ == "__main__":
    main()
