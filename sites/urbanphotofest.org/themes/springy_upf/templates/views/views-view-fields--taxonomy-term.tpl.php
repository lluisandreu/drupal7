<?php
$page_tid = '';
$page_tid = $fields['field_page_type']->content;
?>
<div class="iac-container panel">
	<div class="panel-image">
		<?php print render($fields['field_page_images']->content); ?>
	</div>
	<div class="panel-body row">
		<div class="columns nine">
			<h2><?php print $fields['title']->content; ?></h2>
			<div class="panel-dates">
				<?php print render($fields['field_page_date']->content); ?>
				<?php if($page_tid == 3): ?>
					Posted on <?php print render($fields['created']->content); ?>
				<?php endif; ?>	
			</div>
		</div>
		<div class="columns three view-more">
			<a href="<?php print url('node/'.$fields['nid']->content); ?>" class="btn secondary">View</a>
		</div>
	</div>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$fields['nid']->content.'/edit').'">Edit</a></div>';
}
?>
</div>