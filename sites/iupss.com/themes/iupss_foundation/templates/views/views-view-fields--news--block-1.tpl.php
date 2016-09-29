<div class="news-featured">
	<?php print render($fields['field_images']->content); ?>
	<div class="news-featured-text">
		<h4><?php print $fields['title']->content; ?></h4>
		<time><?php print $fields['field_published_date']->content; ?></time>
		<div>
			<a href="<?php print url('node/' . $fields['nid']->content); ?>" class="read-more">Read more</a>
		</div>
	</div>
</div>