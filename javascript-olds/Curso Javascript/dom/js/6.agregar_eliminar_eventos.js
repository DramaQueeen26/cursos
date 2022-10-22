//Añadir un escuchador

var boton = document.getElementById('boton');

const alerta = () => {
	alert('Hola mundo');
}

boton.addEventListener('click', alerta);


//Eliminar un escuchador

boton.removeEventListener('click', alerta);

//Más referencias de eventos en
//https://developer.mozilla.org/es/docs/Web/Events