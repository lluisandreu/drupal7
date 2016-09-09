<div class="off-canvas-wrap" data-offcanvas>
<?php if ($top_bar): ?>
  <!--.top-bar -->
  <?php if ($top_bar_classes): ?>
    <div class="<?php print $top_bar_classes; ?>">
  <?php endif; ?>
  <nav class="top-bar" data-topbar <?php print $top_bar_options; ?>>
    <ul class="title-area">
      <li class="name"><h1><?php print $linked_site_name; ?></h1></li>
      <li class="toggle-topbar menu-icon">
        <a href="#"><span><?php print $top_bar_menu_text; ?></span></a></li>
    </ul>
    <section class="top-bar-section">
      <?php if ($top_bar_main_menu) : ?>
        <?php print $top_bar_main_menu; ?>
      <?php endif; ?>
    </section>
  </nav>
  <?php if ($top_bar_classes): ?>
    </div>
  <?php endif; ?>
  <!--/.top-bar -->
<?php endif; ?>

  <div class="inner-wrap">
    <div class="main-content">
      <header class="section-header">
        <div class="gradient">
        <div class="row">
          <div class="logo medium-6 small-12 columns">
            <a href="<?php print $front_page; ?>">
              <img src="/<?php print drupal_get_path("theme", "grimalt_theme") . '/logo.svg'?>" alt="<?php print $site_name; ?>">
            </a>
          </div>
          <div class="header-right medium-6 columns show-for-medium-up">
            <?php if($page['header']): ?>
            <div class="header-right-content">
              <?php print render($page['header']); ?>
            </div>
            <?php endif; ?>
          </div>
        </div>
        <nav class="main-navigation show-for-medium-up">
          <div class="row">
            <div class="column">
              <?php print render($page['nav']); ?>
            </div>
          </div>
        </nav>
        </div>
        <?php if($page['header_slideshow']): ?>
          <div class="header-slidehow hide-for-small-only">
              <?php print render($page['header_slideshow']); ?>
          </div>
        <?php endif; ?>
      </header>
      <?php if($page['search']): ?>
      <section class="section-search">
        <div class="row collapse">
          <?php print render($page['search']); ?>
        </div>
      </section>
      <?php endif; ?>
      <section class="section-content">
        <?php if ($messages && !$zurb_foundation_messages_modal): ?>
        <!--.l-messages -->
        <div class="l-messages row">
          <div class="columns">
            <?php if ($messages): print $messages; endif; ?>
          </div>
        </div>
        <!--/.l-messages -->
      <?php endif; ?>

        <div class="row">
          <div class="column">
          <?php if ($breadcrumb): print $breadcrumb; endif; ?>
          <?php if ($title): ?>
            <?php print render($title_prefix); ?>
            <h1 id="page-title" class="title"><?php print $title; ?></h1>
            <?php print render($title_suffix); ?>
          <?php endif; ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
            <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
          <?php endif; ?>
          <?php print render($page['content']); ?>
          </div>
        </div>
      </section>
      <footer class="section-footer">
        <div class="row">
          <?php if($page['footer_first']): ?>
            <div class="footer-first large-4 columns">
              <?php print render($page['footer_first']); ?>
            </div>
          <?php endif; ?>
          <?php if($page['footer_second']): ?>
            <div class="footer-last large-8 columns">
              <?php print render($page['footer_second']); ?>
            </div>
          <?php endif; ?>
        </div>
      </footer>
    </div>
  </div>
</div>