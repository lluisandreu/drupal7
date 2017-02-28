<div class="node-project">
	<div class="node-project-name column">
		<h2><a href="<?php print url($author_profile); ?>">
			By <?php print $author_name; ?>
		</a></h2>
	</div>
	<div class="node-page-content node-main column" >
		<?php print render($content['body']); ?>
	</div>
	<?php if(isset($content['field_project_images'])): ?>
		<div class="node-images column">
			<?php print render($content['field_project_images']); ?>
		</div>
		<br>
	<?php endif; ?>
	<div class="node-comments column end">
		<div class="panel">
			<?php print render($content['comments']); ?>
		</div>
	</div>
</div>