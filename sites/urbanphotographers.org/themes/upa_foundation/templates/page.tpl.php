<div id="page">
  <header id="header">
    <div class="row">
      <div class="large-4 small-4 columns sitename">
        <h1><a href="<?php print $front_page; ?>">Urban Photographers Association</a></h1>
      </div>
      <div class="small-6 columns hide-for-large-up menu-toggler">
        <a href="#"><i class="fa fa-bars"></i></a>
      </div>
      <nav id="main-nav" class="large-8 small-12 columns">
        <?php print render($menu); ?>
      </nav>
    </div>
  </header>
  <main id="main">
    <div class="row">
      <div class="column">
        <?php if(!$is_front): ?>
          <h1><?php print $title; ?></h1>
        <?php endif; ?>
      </div>
      <div class="column">
        <?php print $messages; ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
      </div>
      <?php print render($page['content']); ?>
    </div>
  </main>
  <footer id="footer">
    <div class="row">
      <?php if($page['footer_firstcolumn']): ?>
        <div class="medium-4 columns footer-first">
          </div><?php print render($page['footer_firstcolumn']); ?>
        </div>
      <?php endif; ?>
    </div>
  </footer>
</div>