<div class="upa-front-banner container-fluid">
	<?php print render($content['top']); ?>
</div>
<div class="upa-front-main container">
	<div class="upa-front-sitename row">
		<?php print render($content['main']); ?>
	</div>
	<div class="row upa-front-tryptic clearfix">
		<div class="col-md-4">
			<?php print render($content['first_tryptic']); ?>
		</div>
		<div class="col-md-4">
			<?php print render($content['second_tryptic']); ?>
		</div>
		<div class="col-md-4">
			<?php print render($content['third_tryptic']); ?>
		</div>
	</div>
	<div class="row upa-front-bottom">
		<?php print render($content['bottom']); ?>
	</div>
</div>