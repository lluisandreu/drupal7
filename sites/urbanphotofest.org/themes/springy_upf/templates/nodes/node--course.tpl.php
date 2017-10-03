<div id="node-<?php print $node->nid; ?>" class="node clearfix iac-container">
<?php print render($title_prefix); ?>
<?php print render($title_suffix); ?>
  <div class="node__content"<?php print $content_attributes; ?>>
  <?php if(isset($content['field_page_subtitle'])): ?>
  	<h2><?php print $node->field_page_subtitle[LANGUAGE_NONE][0]['value']; ?></h2>
  <?php endif; ?>
  <?php if(isset($content['field_course_date'])): ?>
  	<div class="field-date">
  		<?php print $content['field_course_date'][0]['#markup']; ?>
  	</div>
  <?php endif; ?>
  <div class="row">
    <div class="eight columns">
      <?php print render($content['body']); ?>
      <h3>Course price</h3>
        <?php print render($content['product:commerce_price']); ?>
      <?php print render($content['field_course_product']); ?>
    </div>
  </div>
  </div>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$node->nid.'/edit').'">Edit</a></div>';
}
?>
</div>
<?php dpm($node); ?>
