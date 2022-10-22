/*
	CICLO FOR: DEFINIDO
*/

for (var i = 0; i < 10; i++){
	document.write(i);
}
	
document.write('<br><br>');


var semana = ['Lunes', 'Martes', 'Miércoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'];

for(i in semana){
	document.write(semana[i] + '<br>');
}

document.write('<br><br>');

/*
	CICLO WHILE: INDEFINIDO
*/

var i = 0;

while(i < 10){
	document.write(i);
	i++;
}

document.write('<br><br>');


/*
	CICLO DO WHILE: PARECIDO AL WHILE
	PERO EL CÓDIGO SE EJECUTA AUNQUE SEA UNA VEZ ASI NO SE CUMPLA LA CONDICIÓN
*/

var i = 0;

do{
	document.write(i);
	i += 2;
}while(i < 10);



/*
	break; SE UTILIZA PARA DETENER CUALQUIER BUCLE SIN IMPORTAR SI LA CONDICIÓN AUN SE CUMPLA
	continue; SE UTILIZA PARA SALTARSE UN ELEMENTO O UNA POSICIÓN DEL BUCLE
*/