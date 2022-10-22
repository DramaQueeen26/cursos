//SCOPE
//El scope es el alcance de una variable que puede ser local o global

//Variable global - se declara fuera de una función

// var mensaje = 'Hola, soy un texto';

// function hola (){
// 	alert(mensaje);
// }

// hola();

// ------------------------------------

// Variable local - se declara dentro de una función

//Esto permite proteger nuestro codigo para que desde afuera no lo modifiquen

function adios(){

	var despedida = 'Hasta luego';

	alert(despedida);

}

adios();


//Función autoejecutada
//Ideal para que las variables no se sobreescriban

(function(){

	alert("Esta es una función autoejecutada");
}())