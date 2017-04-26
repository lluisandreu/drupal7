<div id="node-<?php print $node->nid; ?>" class="iac-container <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>


  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php

      print render($content);
      
      global $user;
        if((in_array("administrator",$user->roles)) || ($user->uid == 1)) {
                print '<div class="iac iac-edit"><a href="'.url('node/'.$node->nid.'/edit').'" >&nbsp;</a></div>';
        }

    ?>
  </div>

</div>