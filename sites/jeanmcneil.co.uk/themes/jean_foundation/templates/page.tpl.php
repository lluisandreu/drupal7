<div class="off-canvas-wrap" data-offcanvas>
  <div class="inner-wrap">
    <nav class="tab-bar">
      <div class="right-small">
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
            <div class="site-name">Jean McNeil</div>
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
          <div class="medium-9 columns">
            <?php print render($page['content']); ?>
          </div>
          <nav class="medium-3 columns">
            <?php print render($page['nav']); ?>
          </nav>
        </div>
        <?php if($is_front): ?>
          <div class="row front-featured">
            <div class="column">
              
            </div>
          </div>
        <?php endif; ?>
      </main>
      <footer></footer>
    </section>
  <a class="exit-off-canvas"></a>
  </div>
</div>