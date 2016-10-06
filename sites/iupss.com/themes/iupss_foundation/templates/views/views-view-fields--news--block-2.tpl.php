<div class="news-masonry-item">
	<?php print render($fields['field_images']->content); ?>
	<h4><?php print render($fields['title']->content); ?></h4>
	<a href="<?php print url('node/' . $fields['nid']->content); ?>" class="read-more">Read more</a>
</div>