//Evento focus

var campoNombre = document.getElementById('nombre');

campoNombre.addEventListener('focus', () => {

	campoNombre.setAttribute('value', 'Tengo el foco');

});

//Evento blur

campoNombre.addEventListener('blur', () => {

	campoNombre.setAttribute('value', 'Ya no tengo el foco');

});