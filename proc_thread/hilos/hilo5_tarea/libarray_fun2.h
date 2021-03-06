/*
 * array_fun.h
 * 
 * Copyright 2018 Lain Iwakura <lain@pavilion>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 /**
 * @file array_fun.h
 * @brief funciones auxiliares para trabajar con arreglos 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

typedef enum{ORDENA=0, PROMEDIO, MENOR, MAYOR}TAREAS;

int* init_array (int size);
void llena_array(int* array,int size, int max_r);
void print_array(int* array,int size, int row_size);
void printa     (int* array,int size);
int get_mayor   (int* array,int size);
int get_menor   (int* array,int size);
int get_promedio(int* array,int size);
