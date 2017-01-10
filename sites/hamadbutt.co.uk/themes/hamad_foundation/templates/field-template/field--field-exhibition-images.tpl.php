<div class="field-exhibiton-images">
	<ul class="large-block-grid-3 medium-block-grid-2">
		<?php foreach($items as $item): ?>
			<li>
				<figure>
					<?php print render($item); ?>
					<?php if(!empty($item['#item']['title'])): ?>
						<figcaption><?php print $item['#item']['title']; ?></figcaption>
					<?php endif; ?>
					<span class="colorbox-icon"><i class="fa fa-expand"></i></span>
				</figure>
			</li>
		<?php endforeach; ?>
	</ul>
</div>