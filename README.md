# Tarea 3: Generación de imágenes a escala de grises usando OpenCV v2.4.9 #

## Desarrollado por David Corrales, Isaac Núñez y Pablo Rodríguez ##

### Copyright (C) 2018 - ITCR ###

Esta tarea cumple la función de crear la imagen de Campbell-Robson en C++ usando OpenCV v2.4.9

#### Requisitos antes de ejecutar ####

Verificar que python2.7 esté instalado, sino es así puede instalarlo en:

> $ sudo apt install python-dev

Verificar que matplotlib esté instalado, sino puede instalarlo mediante:

> $ sudo apt install python-pip

> $ pip install matplotlib

Además, si se presenta el error que no reconoce el módulo matplotlib.pyplot, puede corregir el error instalando python-tk mediante:

> $ sudo apt install python-tk

Debe tener instalado Boost 1.65.1, si no lo tiene puede descargarlo en http://bit.ly/2ErTbV9 y al descomprimir el archivo en la carpeta \< directory \>/boost_1_65_1/ ejecutar ./bootstrap.sh y luego como root ejecutar:

> $ ./b2 install.

Debe tener instalado OpenCV rev2.4.9, esta versión se encuentra de los repositorios de la distro de Linux 16.04 LTS, se instala ejecutando:

> $ sudo apt install libopencv-dev

## Instrucciones de uso ##

> $ cmake .

> $ make

> $ ./image_viewer [-h | --help] [-l | --linear] [-r | --rows [arg]] [-c | --cols [arg]] [-x | --xrow [arg]]

```Para cerrar la ventaja de la imagen y continuar con la ejecución presione alguna tecla.```

* Para eliminar los archivos creados por cmake y make, puede ejecutar el script:

> $ ./clean.sh
