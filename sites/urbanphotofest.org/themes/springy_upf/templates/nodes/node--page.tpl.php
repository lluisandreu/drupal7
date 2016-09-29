<?php
$node_tid = ''; 
$node_tid = $node->field_page_type['und'][0]['tid'];
?>
<div id="node-<?php print $node->nid; ?>" class="node clearfix iac-container">
<?php print render($title_prefix); ?>
<?php print render($title_suffix); ?>
  <div class="node__content"<?php print $content_attributes; ?>>
  <?php if(isset($content['field_page_subtitle'])): ?>
  	<h2><?php print $node->field_page_subtitle[LANGUAGE_NONE][0]['value']; ?></h2>
  <?php endif; ?>
  <?php if(isset($content['field_page_date'])): ?>
  	<div class="field-date">
  		<?php print $content['field_page_date'][0]['#markup']; ?>
  	</div>
  <?php elseif($node_tid == 3): ?>
    <div class="field-date">
      Posted on <?php print format_date($node->created, "short"); ?>
    </div>
  <?php endif; ?>
  <?php print render($content['body']); ?>
  <?php if(isset($content['field_page_info'])): ?>
  	<div class="field-extra-information">
  		<?php print render($content['field_page_info']); ?>
  	</div>
  <?php endif; ?>
  </div>
<?php
global $user;
if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
        print '<div class="iac iac-edit pretty medium primary btn icon-left icon-pencil"><a href="'.url('node/'.$node->nid.'/edit').'">Edit</a></div>';
}
?>
</div>
