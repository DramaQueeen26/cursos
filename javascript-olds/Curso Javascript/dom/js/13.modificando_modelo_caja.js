var parrafo = document.getElementsByClassName('texto');

var boton = document.getElementById('boton');

boton.addEventListener('click', () => {
	
	(parrafo[0].style.width == '80%') //Son las propiedades css
		? parrafo[0].style.width = '400px'
		: parrafo[0].style.width = '80%';
});