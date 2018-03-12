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
    <?php if(!$is_front): ?>
      <div class="row">
        <div class="column">
          <h1><?php print $title; ?></h1>
        </div>
      </div>
    <?php endif; ?>
    <div class="row">
      <div class="column">
        <?php print $messages; ?>  
      </div>
    </div>
    <?php if ($tabs): ?>
      <div class="row">
        <div class="tabs column"><?php print render($tabs); ?></div>
      </div>
    <?php endif; ?>
    <?php if(!isset($node)): ?>
      <div class="row">
        <div class="column">
    <?php endif; ?>
    <?php print render($page['content']); ?>
    <?php if(!isset($node)): ?>
        </div>
      </div>
    <?php endif; ?>
  </main>
  <footer id="footer">
    <div class="row">
      <div class="footer-menu column large-6">
        <ul class="inline-list">
          <li>Hamad Butt 2017 &copy;</li>
          <li><a href="#">Cookies Policy</a></li>
          <?php if(!$logged_in): ?>
            <li><a href="<?php print url('user/login'); ?>">Login</li>
          <?php else: ?>
            <li><a href="<?php print url('user/logout'); ?>">Logout</li>
          <?php endif; ?>
          <li><a href="<?php print url('node/7'); ?>">Contact</a></li>
        </ul>
      </div>
      <div class="large-6 column">
        <p class="text-right"><small>Site designed and developed by <a target="_blank" href="http://www.mopisweb.com">mopisweb.com</a></small></p>
      </div>
    </div>
  </footer>
</div>