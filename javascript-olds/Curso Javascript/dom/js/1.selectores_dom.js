//Selectores individuales

var segundo_parrafo = document.getElementById('segundo');

var segundo_parrafo_2 = document.querySelector('#segundo'); //Selecciona como si fuese css pero devuelve el primer elemento que coincida


//Selectores múltiples

var primer_parrafo = document.getElementsByClassName('texto'); //Devuelve un arreglo

var titulo = document.getElementsByTagName('h1'); //Seleccionar elementos por etiqueta, devuelve un arreglo a pesar de ser solamente 1 porque es un selector múltiple

var parrafo = document.querySelectorAll('.texto'); //Devuelve todos los valores, como css

