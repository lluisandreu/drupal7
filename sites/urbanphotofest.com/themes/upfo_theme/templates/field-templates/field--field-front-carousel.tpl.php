<div class="front-carousel owl-theme owl-carousel">
	<?php foreach ($items as $delta => $item): ?>
	  <div class="front-carousel-item"><?php print render($item); ?></div>
	<?php endforeach; ?>
</div>