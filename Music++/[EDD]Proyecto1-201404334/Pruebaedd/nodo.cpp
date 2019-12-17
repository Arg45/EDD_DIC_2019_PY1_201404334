/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   nodo.cpp
  * Author: argue
  *
  * Created on 11 de diciembre de 2019, 10:59
  */

#include "nodo.h"
#include <stdlib.h>
nodo::nodo() {
	ID = 0;
	siguiente = NULL;
}
nodo::nodo(int id) {
	ID = id;
	siguiente = NULL;
}

