<div class="front-latest-book">
	<h2><?php print render($fields['title']->content); ?></h2>
	<?php print render($fields['field_image_book']->content); ?>
	<br>
	<p>In <a class="gray-link" href="<?php print url('books'); ?>">Books</a></p>
</div>