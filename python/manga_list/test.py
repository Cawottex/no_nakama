#!/usr/bin/python
# -*- coding: utf-8 -*-

import init_class

def main():
    manga = init_class.Manga()
    manga.nom = "One Piece"
    manga.genre = "Action / Aventure / Humour"
    manga.nbr = 81
    manga.en_cours = True
    init_class.Manga.print_manga(manga)

if __name__ == "__main__":
    main()
