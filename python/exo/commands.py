#!/usr/bin/python
# -*- coding: utf-8 -*-

def do_buy(costumers, medics):
    tmp_cost = ""
    tmp_medic = ""
    while (compare(tmp_cost, "Malfichu") != 0 and
           compare(tmp_cost, "Palichon") != 0):
        tmp_cost = raw_input("Nom du client: ")
    while (compare(tmp_cost, "Aspiron") != 0 and
           compare(tmp_cost, "Rhinoplexil") != 0):
        tmp_medic = raw_input("Nom du medicament: ")
    
