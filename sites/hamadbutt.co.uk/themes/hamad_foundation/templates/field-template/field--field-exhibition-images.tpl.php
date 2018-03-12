<div class="field-exhibiton-images">
	<?php foreach($items as $item): ?>
		<figure>
			<?php print render($item); ?>
			<?php if(!empty($item['#item']['title'])): ?>
				<figcaption><?php print $item['#item']['title']; ?></figcaption>
			<?php endif; ?>
		</figure>
	<?php endforeach; ?>
</div>