/* Copyright 2022, Laboratorio de Microprocesadores 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 * http://www.microprocesadores.unt.edu.ar/
 * Copyright 2022, German Moyano <germoyanoh1@gmail.com>
 */

/** \brief Definicion de Entradas y salidas digitales
 ** 
 ** \addtogroup hal HAL
 ** \brief Capa de abstraccion de Hardware
 ** @{ */

/* === Inclusiones de cabeceras ============================================ */
#include "digital.h"
#include "chip.h"
/* === Definicion y Macros privados ======================================== */

struct salida_digital_s {
    uint8_t puerto;
    uint8_t pin;

};

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

static struct salida_digital_s instancia;

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

salida_digital_p crearsalidadigital(uint8_t puerto, uint8_t pin){
    instancia.puerto = puerto;
    instancia.pin = pin;
    return &instancia;
}

void activarsalidadigital(salida_digital_p salida){
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, salida->puerto, salida->pin, true);
}

void desactivarsalidadigital(salida_digital_p salida){
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, salida->puerto, salida->pin, false);
}

void cambiarsalidadigital(salida_digital_p salida){

}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */