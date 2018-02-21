<div class="product-teaser-item">
	<?php print render(($fields['field_images']->content)); ?>
	<h3><?php print render($fields['title']->content); ?></h3>
	<?php if(isset($fields['price'])): ?>
		<div class="product-teaser-price">
			<?php print render($fields['price']['comment']); ?>
			<?php print render($fields['price']['amount']); ?>
		</div>
	<?php endif; ?>
</div>