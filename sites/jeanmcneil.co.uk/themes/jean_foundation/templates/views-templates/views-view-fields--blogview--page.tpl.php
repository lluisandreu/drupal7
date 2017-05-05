<article class="blog-article row article-padding">
	<?php if(isset($fields['field_image_blog'])): ?>
		<div class="small-4 columns">
		<?php print render($fields['field_image_blog']->content); ?>
		</div>
	<?php endif; ?>
	<div class="columns <?php print (isset($fields['field_image_blog']) ? 'small-8' : ''); ?>">
		<h2><?php print render($fields['title']->content); ?></h2>
		<em><?php print render($fields['created']->content); ?></em>
		<?php print render($fields['body']->content); ?>
	</div>
</article>