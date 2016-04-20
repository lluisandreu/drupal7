<div class="upa-basicpage">
	<div class="upa-basicpage-top row">
		<?php print render($content['top']); ?>
	</div>
	<div class="upa-basicpage-body row clearfix">
		<div class="col-sm-6 main">
			<?php print render($content['main']); ?>
		</div>
		<div class="col-sm-5 col-sm-offset-1 aside">
			<?php print render($content['aside']); ?>
		</div>
	</div>
	<div class="row upa-basicpage-bottom">
		<?php print render($content['bottom']); ?>
	</div>
</div>