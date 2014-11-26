Voice Cleaner
=============

Problema
--------

Muchos computadores actuales vienen con micrófonos de baja calidad por temas de presupuesto. Esto afecta de forma directa en la capacidad de ser entendido via VoIP o videochat. Parte de este problema pasa por la cantidad de ruido en la señal. Una solución sería aplicar un filtro a ésta mediante software especializado, pero el resultado no servirá como input para programas genéricos que deseen usar el input del micrófono.

Solución proyectada
-------------------

Nuestra idea es generar una interfaz virtual que reciba el input del micrófono, filtre el ruido mediante DSP y luego exponga esta señal limpia al sistema operativo como una interfaz de audio nueva, logrando transparencia hacia otros programas que requieran el input del micrófono filtrado.

Después de un análisis técnico vemos como mejor camino usar la API provista por *PulseAudio* para generar un *daemon* que limpie la voz del micrófono y la coloque en un dispositivo virtual.

Presentación explicativa
-------------------------

Adjunto está la presentación preparada sobre nuestra investigación técnica acerca de *Voice Cleaner*.

[LINK](etc/presentation/index.html)

Estado de avance
----------------

Decididos a usar *PulseAudio* creemos que debería tomar unas 40 horas hombres terminar la aplicación.

Otros links de interés
----------------------

http://dis-dot-dat.net/index.cgi?item=jacktuts/starting/

https://github.com/jackaudio/jackaudio.github.com/wiki/WalkThrough_Dev_SimpleAudioClient

http://idjc.sourceforge.net/install_first_run.html

http://www.onlinemictest.com/microphone-settings/ubuntu

http://tuxradar.com/content/how-it-works-linux-audio-explained#null

https://github.com/overtone/overtone/wiki/Installing-and-starting-jack

http://en.wikibooks.org/wiki/Digital_Music_Composition/Making_Sound

http://en.wikipedia.org/wiki/PulseAudio

Autores
-------

- Marco Benzi
- Andrés Ulloa