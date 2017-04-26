<div id="page">

  <header id="header" ">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
    <?php endif; ?>

    <?php print render($page['header']); ?>

  </header>
  <div id="main">
    <aside>
    <?php print render($page['aside']); ?>
    </aside>
    <div id="content" class="column" role="main">
    <div class="content_region">
  
      <?php if (($title) && !$is_front): ?>
        <h1 class="title" class="page-title"><?php print $title; ?></h1>
      <?php endif; ?>

      <?php print render($page['content']); ?>
      </div>
    </div><!-- /#content -->
  </div>
  <footer>
    <div class="credits">Jean McNeil Site © - 2013 | Designed by <a href="http://www.lluisandreu.com">lluisandreu.com</a> |
    <a href="<?php print url('user/login'); ?>">Sign In </a></div>
  </footer>
  <div class="clearfix">&nbsp;</div>
</div>