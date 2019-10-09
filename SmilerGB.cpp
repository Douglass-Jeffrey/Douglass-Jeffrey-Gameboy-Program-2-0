// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program determines if a number is positive negative or 0

#include <gb/gb.h>
#include <stdio.h>
#include "SmilerSprites.c"

void main(){
    UINT8 currentspriteindex = 0;

    set_sprite_data(0, 2, Smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}