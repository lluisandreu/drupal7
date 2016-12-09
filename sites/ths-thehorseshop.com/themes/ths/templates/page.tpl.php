<!--.page -->
<div role="document" class="page">

  <!--.l-header -->
  <header role="banner" class="l-header">

    <?php if ($top_bar): ?>
      <!--.top-bar -->
      <?php if ($top_bar_classes): ?>
        <div class="<?php print $top_bar_classes; ?>">
      <?php endif; ?>
      <nav class="top-bar" data-topbar <?php print $top_bar_options; ?>>
        <ul class="title-area">
          <li class="name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="/<?php print drupal_get_path('theme', 'ths'); ?>/logo.svg" alt="<?php print t('Home'); ?>" />
          </a></li>
          <li class="toggle-topbar menu-icon">
            <a href="#"><span><?php print $top_bar_menu_text; ?></span></a></li>
        </ul>
        <section class="top-bar-section">
          <?php if ($top_bar_main_menu) : ?>
            <?php print $top_bar_main_menu; ?>
          <?php endif; ?>
        </section>
        <section class="top-bar-section cart right">
          <ul>
            <li><a href="#">Contacto</a></li>
          </ul>
          <?php print render($page['cart']); ?>
        </section>
      </nav>
      <?php if ($top_bar_classes): ?>
        </div>
      <?php endif; ?>
      <!--/.top-bar -->
    <?php endif; ?>

  </header>
  <!--/.l-header -->

  <?php if (!empty($page['featured']) && $is_front): ?>
    <!--.l-featured -->
    <section class="l-featured">
      <?php print render($page['featured']); ?>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if (!empty($page['search'])): ?>
    <!--.l-featured -->
    <section class="l-search">
      <div class="row">
        <div class="columns">
          <?php print render($page['search']); ?>
        </div>
      </div>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--.l-messages -->
    <section class="l-messages row">
      <div class="columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>
  <?php if($breadcrumb): ?>
  <section class="breadcrumb">
    <div class="row">
      <div class="column">
        <?php print $breadcrumb;  ?>
      </div>
    </div>
  </section>
  <?php endif; ?>
  <!--.l-main -->
  <main role="main" class="l-main">
    <!-- .l-main region -->
    <div class="<?php print $main_grid; ?> main">
      <?php if ($title): ?>
        <div class="row">
          <div class="column">
            <?php print render($title_prefix); ?>
            <h1 id="page-title" class="title"><?php print $title; ?></h1>
            <?php print render($title_suffix); ?>
          </div>
        </div>
      <?php endif; ?>

      <?php if (!empty($tabs)): ?>
        <div class="row">
          <div class="column">
            <?php print render($tabs); ?>
            <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
          </div>
        </div>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <div class="page-content">
        <?php print render($page['content']); ?>
      </div>
    </div>
    <!--/.l-main region -->
  </main>
  <!--/.l-main -->

  <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn'])): ?>
    <!--.footer-columns -->
    <section class="l-footer-columns">
      <div class="row">
      <?php if (!empty($page['footer_firstcolumn'])): ?>
        <div class="footer-first medium-4 columns">
          <?php print render($page['footer_firstcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_secondcolumn'])): ?>
        <div class="footer-second medium-4 columns">
          <?php print render($page['footer_secondcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_thirdcolumn'])): ?>
        <div class="footer-third medium-4 columns">
          <?php print render($page['footer_thirdcolumn']); ?>
        </div>
      <?php endif; ?>
      </div>
    </section>
    <!--/.footer-columns-->
  <?php endif; ?>

  <!--.l-footer -->
  <footer class="l-footer" role="contentinfo">
    <div class="row">
    <?php if (!empty($page['footer'])): ?>
      <div class="footer columns">
        <?php print render($page['footer']); ?>
      </div>
    <?php endif; ?>
    </div>
  </footer>
  <!--/.l-footer -->

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
<!--/.page -->
