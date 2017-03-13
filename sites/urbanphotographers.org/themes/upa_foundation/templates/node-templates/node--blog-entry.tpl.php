<div class="node-default-template">
	<div class="node-page-content node-main <?php print (isset($content['field_cover_image'])) ? 'large-6 column' : 'column'; ?>" >
		<?php if($node->uid != '0'): ?>
			<p>By <?php print $node->name; ?></p>
		<?php endif; ?>
		<?php print render($content['body']); ?>
	</div>
	<?php if(isset($content['field_cover_image'])): ?>
		<aside id="main-aside" class="large-6 column">
			<?php print render($content['field_cover_image']); ?>
		</aside>
	<?php endif; ?>
</div>