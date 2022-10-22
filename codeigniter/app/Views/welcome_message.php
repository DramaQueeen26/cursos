<?= $this->extend('layout/layout')?>
<?= $this->section('title')?>Codeigniter<?= $this->endSection('title')?>

<?= $this->section('content')?>
	
	<p>Lorem ipsum, dolor sit amet consectetur, adipisicing elit. Maiores, sed. Sint architecto officiis voluptates quas earum doloribus, vero aspernatur corporis magnam tempore eum quidem minima modi expedita necessitatibus! Vitae, eligendi!</p>

	<a href="<?= base_url().route_to('libros')?>">Libros</a>
	<br>

<?= $this->endSection('content')?>

