<div class="page">
  <section id="topbar" class="topbar show-for-small-only">
    <div class="row">
      <div class="column">
        <div class="topbar-toggle">
          <span class="element-invisible">Menu</span>
          <a href="#"><i class="fa fa-bars"></i></a>
        </div>
        <div class="topbar-menu">
          <?php if ($top_menu): ?>
            <?php print render($top_menu); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </section>
  <header id="header">
    <div class="row">
      <div class="logo sitename medium-3 columns">
        <a href="<?php print $front_page; ?>">Hamad Butt</a>
      </div>
      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation" class="medium-9 columns hide-for-small-only">
          <?php print render($main_menu); ?>
        </nav>
      <?php endif; ?>
    </div>
  </header>
  <main id="main">
    <div class="row">
      <?php if(!$is_front): ?>
        <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <div class="tabs column"><?php print render($tabs); ?></div>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </div>
  </main>
  <footer></footer>
</div>