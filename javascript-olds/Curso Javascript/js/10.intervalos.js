/*
	Ejecutar una función cada cierto tiempo
*/

var segundos = 0;

setInterval(function(){
	document.write(segundos++);
}, 1000);