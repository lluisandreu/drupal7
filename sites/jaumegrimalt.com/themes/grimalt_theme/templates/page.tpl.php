<div class="off-canvas-wrap" data-offcanvas>
  <div class="inner-wrap">
    <div class="main-content">
      <header class="section-header">
        <div class="gradient">
        <div class="row">
          <div class="logo large-4 columns">
            <a href="<?php print $front_page; ?>">
              <img src="/<?php print drupal_get_path("theme", "grimalt_theme") . '/logo.svg'?>" alt="<?php print $site_name; ?>">
            </a>
          </div>
          <div class="header-right large-8 columns">
            <?php if($page['header']): ?>
            <div class="header-right-content">
              <?php print render($page['header']); ?>
            </div>
            <?php endif; ?>
          </div>
        </div>
        <?php if($page['header_banner']): ?>
        <div class="row header-notice">
          <div class="column">
            <?php print render($page['header_banner']); ?>
          </div>
        </div>
        <?php endif; ?>
        </div>
      </header>
      <?php if($page['search']): ?>
      <section class="section-search">
        <div class="row">
          <div class="column">
          <?php print render($page['search']); ?>
          </div>
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