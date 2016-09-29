<div class="node-images">
	<?php print render($fields['field_page_images']->content); ?>
	<?php if(isset($fields['field_page_images_1']->content)): ?>
		<div class="node-images-title">
			<p><?php print render($fields['field_page_images_1']->content); ?></p>
		</div>
	<?php endif; ?>
</div>