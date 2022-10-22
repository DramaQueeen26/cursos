//Validar formulario

var form = document.getElementById('formulario');

var nombre = document.getElementById('nombre');
var email = document.getElementById('email');
var verde = document.getElementById('verde');
var amarillo = document.getElementById('amarillo');
var azul = document.getElementById('azul');
var terminos = document.getElementById('terminos');




const validar = (e) => {
	if(nombre.value == ''){
		alert('Por favor escribe tu nombre');
		e.preventDefault();
	}
	if(email.value == ''){
		alert('Por favor escribe tu correo');
		e.preventDefault();
	}
	if(verde.checked == false && azul.checked == false && amarillo.checked == false){
		alert('Por favor selecciona un color');
		e.preventDefault();
	}
	if(terminos.checked == false){
		alert('Por favor tienes que aceptar los términos y condiciones');
		e.preventDefault();
	}
}

form.addEventListener('submit', validar);