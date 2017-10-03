<div class="page offcanvas-page-wrapper">
<div class="offcanvas-page-container">
    <div class="mobile-bar clearfix">
        <?php print render($page['mobile']); ?>
        <div class="mobile-bar__icons">
            <a href="https://www.facebook.com/UrbanPhotoFest?fref=ts&ref=br_tf" target="_blank"><i class="icon-facebook-circled"></i></a>
            <a href="https://twitter.com/UrbanPhotoFest" target="_blank"><i class="icon-twitter-circled"></i></a>
        </div>
    </div>
	<header class="header">
		<div class="row">
			<div class="four columns logo">
				<a href="<?php print $front_page; ?>">
					<img class="mobile" src="/<?php print path_to_theme() . '/small-logo.svg'; ?>" alt="Urban Photo Fest Logo" title="Home"> 
					<img class="desktop" src="/<?php print path_to_theme() . '/logo.svg'; ?>" alt="Urban Photo Fest Logo" title="Home"> 
				</a>
			</div>
			<div class="eight columns header-content">
				<?php print render($page['header']); ?>
				<?php if($cart['quantity']): ?>
					<div class="upf-basket">
						<a href="<?php print url('cart'); ?>" title="View cart">
							<i class="icon-basket"></i>
							<?php print $cart['total']; ?>
							(<?php print $cart['quantity']; ?>)
						</a>
					</div>
				<?php endif; ?>
			</div>
		</div>
	</header>
	<nav class="nav">
		<div class="row">
			<div class="eleven columns main-nav">
				<?php print render($page['nav']); ?>
			</div>
			<div class="one columns social-icons">
				<?php print render($page['social']); ?>
			</div>
		</div>
	</nav>
	<?php if($is_front): ?>
		<section class="front-banner">
			<div class="row">
				<?php print render($page['banner']); ?>
			</div>
		</section>
	<?php endif; ?>
	<section class="main-content">
		<?php if(isset($page['aside']) && !empty($page['aside'])): ?>
			<?php if(!$is_front): ?>
				<div class="row">
					<h1><?php print $title; ?></h1>
				</div>
			<?php endif; ?>
			<div class="row">
				<div class="main-content-left six columns">
					<?php if($is_front): ?>
						<h1><?php print $title; ?></h1>
					<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
					<?php endif; ?>
					<?php print $messages; ?>
					<?php print render($page['content']); ?>
				</div>
				<div class="main-content-aside five columns push_one">
					<?php print render($page['aside']); ?>
				</div>
			</div>
		<?php else: ?>
			<div class="row">
				<div class="main-content-full">
					<h1><?php print $title; ?></h1>
					<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
					<?php print $messages; ?>
					<?php print render($page['content']); ?>
				</div>
			</div>
		<?php endif; ?>

	</section>
	<?php if(isset($page['bottom']) && !empty($page['bottom'])): ?>
		<section class="bottom-content">
			<div class="row">
				<?php print render($page['bottom']); ?>
			</div>
		</section>
	<?php endif; ?>
	<footer class="footer">
		<div class="row">
			<div class="footer-first footer-region four columns">
				<?php print render($page['footer_first']); ?>
			</div>
			<div class="footer-second footer-region eight columns">
				<?php print render($page['footer_second']); ?>
			</div>
		</div>
	</footer>
</div>
</div>