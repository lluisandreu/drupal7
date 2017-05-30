<div class="off-canvas-wrap" data-offcanvas>
  <div class="inner-wrap">
    <nav class="tab-bar show-for-small-only">
      <div class="left-small">
        <a role="button" aria-expanded="false" aria-controls="idOfRightMenu" class="left-off-canvas-toggle menu-icon" ><span></span></a>
      </div>
    </nav>
    <aside class="left-off-canvas-menu">
      <?php if ($top_bar_main_menu) : ?>
          <?php print $top_bar_main_menu; ?>
        <?php endif; ?>
    </aside>
    <section class="main-section">
      <header id="header">
        <div class="row">
          <div class="column text-left">
            <div class="site-name"><a href="<?php print url('<front>'); ?>">Jean McNeil</a></div>
          </div>
        </div>
      </header>
      <main id="main">
        <div class="row">
          <?php if (!$is_front && $title): ?>
            <div class="column">
              <h1><?php print $title ?></h1>
            </div>
          <?php endif; ?>
        </div>
        <?php if ($breadcrumb && !$is_front): ?>
          <div class="row">
            <div id="breadcrumb" class="column"><?php print $breadcrumb; ?></div>
          </div>
        <?php endif; ?>
        <div class="row">
          <div class="column">
            <?php print $messages; ?>
          </div>
        </div>
        <?php if($tabs): ?>
        <div class="row">
          <div class="column">
            <?php print render($tabs); ?>
          </div>
        </div>
        <?php endif; ?>
        <div class="row">
          <div class="medium-8 columns">
            <?php print render($page['content']); ?>
          </div>
          <nav id="main-nav" class="medium-3 columns hide-for-small">
            <?php print render($page['nav']); ?>
          </nav>
        </div>
        <?php if($is_front): ?>
          <div class="row front-featured">
            <div class="medium-4 columns">
              <?php print render_block_content('views', "latest_on_homepage-block_1"); ?>
            </div>
            <div class="medium-4 columns">
              <?php print render_block_content('views', "latest_on_homepage-block_2"); ?>
            </div>
            <div class="medium-4 columns">
              <?php print render_block_content('views', "latest_on_homepage-block_3"); ?>
            </div>
          </div>
        <?php endif; ?>
      </main>
      <footer id="footer">
        <div class="row">
          <div class="medium-6 columns">
            <p>Jean McNeil &copy; 2017</p>
            <small>Site designed and developed by <a href="http://lluisandreu.com/" target="_blank">lluisandreu.com</a></small>
          </div>
          <div class="medium-6 columns">
            <p class="text-right">
              <a href="https://twitter.com/jeanmcneilwrite" target="_blank">Twitter&nbsp;</a>
              <a href="https://www.instagram.com/jean_mcneil08/" target="_blank"> Instagram</a>
            </p>
          </div>
        </div>
      </footer>
    </section>
  <a class="exit-off-canvas"></a>
  </div>
</div>