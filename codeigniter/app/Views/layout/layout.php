<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title><?php echo $this->renderSection('title')?></title>
	<style>
		p{
			color: blue;
			font-size: 1.5em;
		}
	</style>
</head>
<body>

	<?= $this->include('layout/menu')?>

	<?= $this->renderSection('content')?>

</body>
</html>