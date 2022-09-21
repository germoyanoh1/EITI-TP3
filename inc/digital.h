/* Copyright 2022, Laboratorio de Microprocesadores 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 * http://www.microprocesadores.unt.edu.ar/
 * Copyright 2022, German Moyano <germoyanoh1@gmail.com>
 */

#ifndef DIGITAL_H   /*! @cond    */
#define DIGITAL_H   /*! @endcond */

/** \brief Definicion de Entradas y salidas digitales
 ** 
 ** \addtogroup hal HAL
 ** \brief Capa de abstraccion de Hardware
 ** @{ */

/* === Inclusiones de archivos externos ==================================== */

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */

#include <stdint.h>

/* == Declaraciones de tipos de datos publicos ============================= */

typedef struct salida_digital_s * salida_digital_p;


/* === Declaraciones de variables publicas ================================= */

/* === Declaraciones de funciones publicas ================================= */

salida_digital_p crearsalidadigital(uint8_t puerto, uint8_t pin);
void activarsalidadigital(salida_digital_p salida);
void desactivarsalidadigital(salida_digital_p salida);
void cambiarsalidadigital(salida_digital_p salida);

/* === Ciere de documentacion ============================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* DIGITAL_H */
