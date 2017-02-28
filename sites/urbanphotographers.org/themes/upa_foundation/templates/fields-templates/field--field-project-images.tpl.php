<ul class="small-block-grid-2 medium-block-grid-3">
	<?php foreach ($items as $delta => $item): ?>
	  <li><?php print render($item); ?></li>
	<?php endforeach; ?>
</ul>
<small><i class="fa fa-info"></i> Click to enlarge</small>