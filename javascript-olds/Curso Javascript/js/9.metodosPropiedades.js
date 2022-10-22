/*
	Una propiedad es una característica del objeto mientras que un método es una acción
*/

//object.nombreDelMetodo(); //Esto es un método
//bject.nombrePropiedad;	//Esto es una propiedad

//MÉTODOS Y PRPIEDADES PARA CADENAS DE TEXTO

var texto = 'Esto es un texto';

var longitud = texto.length; //Propiedad

var mayus = texto.toUpperCase(); 
var minus = texto.toLowerCase();
var extraido = texto.substring(11, 16); //Extrae un texto de un lugar a otro
var reemplazado = texto.replace('texto', 'niño');
var buscandoE = texto.indexOf('e');
var ultimaE = texto.lastIndexOf('e');
var arreglo = texto.split(' '); //Lo convierte en un arreglo

//-----------------------------------------------------------------------------------------

//MÉTODOS Y PROPIEDADES PARA ARREGLOS

var familia = ['Alejandro', 'Maria', 'Pedro'];

//length devuelve la cantidad de elementos

var cantidadElementos = familia.length;

//concat permite unir arreglos

//join contrario a split - mostrar todos los elementos el arreglo en una cadena de texto

//pop eliminar el ultimo elemento

//push agregar un elemento al fnal

//shift eliminar el primer elemento

//unshift agregar un elemento al principio 

//reverse ordena el arreglo al reves