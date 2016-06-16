#!/usr/bin/python
# -*- coding: utf-8 -*-

class Fridge:
    def __init__(self):
        self._tomato = 10
        self.ham = 5
        self.water = 30

    def _get_tomato(self):
        return self._tomato

    def _set_tomato(self, qnt):
        self._tomato = qnt

    def remove_tomato(self, qnt):
        if (self._tomato > 0 and qnt < self._tomato):
            self._tomato -= qnt

    tomato = property(_get_tomato, _set_tomato)

def main():
    fridge = Fridge()
    print("Il y a {} tomates".format(fridge.tomato))
    fridge.remove_tomato(5)
    print("Il y a maintenant {} tomates".format(fridge.tomato))
    fridge.tomato = 10
    print("Il y a maintenant {} tomates".format(fridge.tomato))

if __name__ == "__main__":
    main()
