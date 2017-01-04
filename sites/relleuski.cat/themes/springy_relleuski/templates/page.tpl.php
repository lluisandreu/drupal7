<div class="container" id="top">
	<div class="mobile-bar clearfix">
		<div class="row">
			<div class="logo-mobile">
				<a href="<?php print $front_page; ?>">
					<img src="<?php print $logo; ?>" alt="Relleu Ski Logo" role="logo">
				</a>
			</div>
			<div class="menu-mobile">
				<?php print render($page['mobile_bar']); ?>
			</div>
		</div>
	</div>
	<nav class="desktop-nav">
		<div class="row">
			<div class="logo two columns">
				<a href="<?php print $front_page; ?>">
					<img src="<?php print $logo; ?>" alt="Relleu Ski Logo" role="logo">
				</a>
			</div>
			<div class="nav ten columns clearfix">
				<?php print render($page['nav']); ?>
			</div>
		</div>
	</nav>
	<?php if($is_front): ?>
	<div class="front-hero" id="hero">
		<div class="row">
			<?php print render($page['content']); ?>
		</div>
	</div>
	<div class="title">
		<div class="row">
			<h1><?php print $title; ?></h1>
		</div>
	</div>
	<section class="about" id="about">
		<div class="row about-top">
			<?php print $messages; ?>
			<?php print render($page['front_about']); ?>
		</div>
		<div class="row about-bottom">
			<div class="six columns">
				<?php print render($page['front_about_img']); ?>
			</div>
			<div class="six columns">
				<?php print render($page['front_about_img_2']); ?>
			</div>
		</div>
	</section>
	<section class="services" id="services">
		<div class="row">
			<div class="six columns">
				<?php print render($page['front_services']); ?>
			</div>
			<div class="six columns">
				<?php print render($page['front_services_img']); ?>
			</div>
		</div>
	</section>
	<section class="prices" id="prices">
		<div class="row">
			<?php print render($page['front_news']); ?>
		</div>
	</section>
	<footer class="footer" id="contact">
		<div class="row">
			<div class="footer-first six columns">
				<?php print render($page['front_footer_1']); ?>
			</div>
			<div class="footer-second six columns">
				<?php print render($page['front_footer_2']); ?>
			</div>
		</div>
	</footer>
	<?php else: ?>
	<section class="page-content">
		<div class="row">
			<h1><?php print $title; ?></h1>
			<?php print $messages; ?>
			<?php print render($page['content']); ?>
		</div>
		</content>
		<footer class="footer">
			<div class="row">
				<?php print render($page['footer']); ?>
			</div>
		</footer>
		<?php endif; ?>
		<div class="credits">
			<div class="row">
				<p>Relleu Ski 2014 &copy; ¦ <a href="<?php print url('user'); ?>">Admin login</a> ¦ Lloc web dissenyat per <a href="http://www.lluisandreu.com" target="_blank">lluisandreu.com</a></p>
			</div>
		</div>
	</div>