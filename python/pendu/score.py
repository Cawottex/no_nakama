#!/usr/bin/python
# -*- coding: utf-8 -*-

def search_score(answer):
    i = 0
    score = 0
    while (i < len(answer)):
        if (answer[i] == '*'):
            score += 1
        i += 1
    return (score)
