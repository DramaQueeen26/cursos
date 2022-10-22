var parrafos = document.getElementsByClassName('texto');

const cambiar_fondo = () => {
	// parrafos[0].classList.toggle('fondo-rojo'); //Acceder a todas las clases //toggle cambiar una clase por otra

 	//This es para acceder al que se le dio click
	this.classList.toggle('fondo-rojo'); //But no me agarra

}

for(var i = 0; i < parrafos.length; i++ ){
	parrafos[i].addEventListener('click', cambiar_fondo);
}
