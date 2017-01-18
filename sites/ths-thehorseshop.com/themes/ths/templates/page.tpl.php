<!--.page -->
<div role="document" class="page">
  <!--.l-header -->
  <header id="header" role="banner" class="l-header clearfix">
    <div class="small-6 large-2 logo-container columns">
      <?php if ($linked_logo): print $linked_logo; endif; ?>
    </div>
    <div class="small-6 columns menu-toggle hide-for-large-up">
      <a href="#" id="toggle-menu"><i class="fa fa-bars"></i></a>
    </div>
    <div class="small-12 large-6 columns no-relative">
      <div id="main-menu">
        <?php print render($main_menu); ?>
      </div>
    </div>
    <div class="small-12 large-3 columns no-relative">
      <div id="shop-menu">
        <ul>
          <?php if($cart): ?>
            <li class="site-cart">
              <i class="fa fa-shopping-bag"></i> <?php print $cart; ?>
            </li>
          <?php endif; ?>
          <li class="site-search">
            <a href="<?php print url('busqueda/productos'); ?>"><i class="fa fa-search"></i></a>
            <div class="search-block">
              <?php print render($search); ?>
            </div>
          </li>
          <li><a href="<?php print url('contacto'); ?>">Contacto</a></li>
        </ul>
      </div>
    </div>
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
    <?php if($is_front): ?>
    <!--.l-featured -->
      <section class="l-search">
        <div class="row">
          <div class="columns">
            <?php print render($page['search']); ?>
          </div>
        </div>
      </section>
    <?php endif; ?>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--.l-messages -->
    <section class="l-messages">
      <div class="row">
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
            <h1 id="page-title" class="title"><?php print ucfirst(strtolower($title)); ?></h1>
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
