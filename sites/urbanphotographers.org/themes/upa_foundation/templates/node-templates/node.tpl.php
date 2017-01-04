<div class="node-default-template">
	<div class="node-page-content node-main <?php print (isset($content['field_images'])) ? 'large-8 column' : 'column'; ?>" >
		<?php print render($content['body']); ?>
	</div>
	<?php if(isset($content['field_images'])): ?>
		<aside class="large-4 column">
			<?php print render($content['field_images']); ?>
		</aside>
	<?php endif; ?>
</div>