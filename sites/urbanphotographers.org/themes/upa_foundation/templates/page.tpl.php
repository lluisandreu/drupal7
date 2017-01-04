<div id="page" class="off-canvas-wrap" data-offcanvas>
  <div class="inner-wrap">
    <nav class="tab-bar">
      <div class="row">
        <a class="right-off-canvas-toggle right" href="#"><i class="fa fa-bars"></i></a>
      </div>
    </nav>
    <aside class="right-off-canvas-menu">
      <?php print render($menu); ?>
    </aside>
    <section>
      <header id="header">
        <div class="row show-for-large-up">
          <div class="large-6 column sitename">
            <h1>Urban Photographers Association</h1>
          </div>
          <nav class="large-6 column">
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
        </div>
      </footer>
    </section>
  </div>
</div>