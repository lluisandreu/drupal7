<div id="page" class="off-canvas-wrap" data-offcanvas>
	<div class="inner-wrap">
		<nav class="tab-bar hide-for-large-up">
			<div class="row">
				<a class="left-off-canvas-toggle small-6 columns" href="#"><i class="fa fa-bars"></i></a>
				<a href="<?php print $front_page; ?>" class="small-6 columns logo">
					<img src="<?php print $white_logo; ?>" alt="<?php print $site_name; ?>">
				</a>
			</div>
		</nav>
		<aside class="left-off-canvas-menu">
			<?php print render($menu); ?>
		</aside>
		<section>
			<header id="header">
				<div class="row show-for-large-up">
					<div class="large-2 columns">
						<a href="<?php print $front_page; ?>" class="logo">
							<img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
						</a>
					</div>
					<nav class="large-menu large-10 columns right">
						<?php print render($menu); ?>
					</nav>
				</div>
			</header>
			<main id="main">
				<?php if(!$is_front && $title): ?>
				<div class="row">
					<div class="column">
						<h1><?php print $title; ?></h1>
					</div>
				</div>
				<?php endif; ?>
				<div class="row">
					<div class="main-content <?php print ($page['sidebar'] ? 'medium-7 columns' : 'column'); ?>">
						<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
						<?php print $messages; ?>
						<?php print render($page['content']); ?>
					</div>
					<?php if($page['sidebar']): ?>
					<aside class="main-aside medium-5 columns">
						<?php print render($page['sidebar']); ?>
					</aside>
					<?php endif; ?>
				</div>
				<?php if(isset($page['bottom'])): ?>
					<div class="row main-bottom">
						<div class="column">
							<?php print render($page['bottom']); ?>
						</div>
					</div>
				<?php endif; ?>
			</main>
			<footer id="footer">
				<div class="row">
					<div class="footer-left large-6 columns">
						<?php print render($page['footer_firstcolumn']); ?>
					</div>
					<div class="footer-right large-6 columns">
						<?php print render($page['footer_secondcolumn']); ?>
					</div>
				</div>
			</footer>
		</section>
	</div>
</div>