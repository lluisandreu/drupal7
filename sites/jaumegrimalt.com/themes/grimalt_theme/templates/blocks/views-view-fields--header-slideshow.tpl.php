<?php print render($fields['field_slide_image']->content); ?>
<?php if($fields['field_slide_text']->content): ?>
	<div class="header-text-wrapper">
		<div class="header-text-block">
			<?php print render($fields['field_slide_text']->content); ?>
		</div>
	</div>
<?php endif; ?>
