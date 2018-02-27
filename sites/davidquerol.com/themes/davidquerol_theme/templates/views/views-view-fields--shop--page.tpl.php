<div class="product-teaser-item">
	<?php print render(($fields['field_images']->content)); ?>
	<h4><?php print render($fields['title']->content); ?></h4>
	<?php if(isset($fields['price'])): ?>
		<div class="product-teaser-price">
			<?php print render($fields['price']['comment']); ?>
			<?php print render($fields['price']['amount']); ?>
		</div>
	<?php endif; ?>
</div>