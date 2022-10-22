//Se usa para formularios

const elegir_color = () => {
	var estadoActivador = document.getElementById('activador').checked;

	if(estadoActivador){
		document.getElementById('verde').disabled = false;
		document.getElementById('amarillo').disabled = false;
		document.getElementById('azul').disabled = false;
	}else{
		document.getElementById('verde').disabled = true;
		document.getElementById('amarillo').disabled = true;
		document.getElementById('azul').disabled = true;
	}
}

//Ejecutando la función

var activador = document.getElementById('activador');

activador.addEventListener('change', elegir_color);