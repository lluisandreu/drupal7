<?php

/**
 * Implements template_preprocess_html().
 */
function upa_foundation_preprocess_html(&$variables) {
	drupal_add_js('//use.fontawesome.com/b0789a050e.js', array('type' => 'external'));
	drupal_add_css('//fonts.googleapis.com/css?family=Nunito:400,400i,600,600i', array('type' => 'external'));
	if($variables['is_front']) {
		drupal_add_js(drupal_get_path('theme', 'upa_foundation') . '/vendor/owl.carousel/owl.carousel.min.js');
		drupal_add_css(drupal_get_path('theme', 'upa_foundation') . '/vendor/owl.carousel/assets/owl.carousel.min.css');
		drupal_add_css(drupal_get_path('theme', 'upa_foundation') . '/vendor/owl.carousel/assets/owl.theme.default.min.css');
		drupal_add_css(drupal_get_path('theme', 'upa_foundation') . '/vendor/animate/animate.min.css');
	}
	if(arg(1) == '75' && arg(0) == "node") {
		drupal_add_js('//unpkg.com/masonry-layout@4/dist/masonry.pkgd.min.js', array('type' => 'external'));
	}
}

/**
 * Implements template_preprocess_page.
 */
function upa_foundation_preprocess_page(&$variables) {
	$main_menu = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
	$variables['menu'] = $main_menu;

  $editor_menu = menu_tree(variable_get('menu_main_links_source', 'menu-editor-menu'));
  $variables['editor_menu'] = $editor_menu;
}

/**
 * Implements template_preprocess_node.
 */
function upa_foundation_preprocess_node(&$variables) {
	$block_news = views_embed_view('news', 'block_1');
	$variables['block_news'] = $block_news;

	$block_members = views_embed_view('members', 'block_1');
	$variables['block_members'] = $block_members;

  $block_blog = views_embed_view('blog', 'block_1');
  $variables['block_blog'] = $block_blog;

  $block_events = views_embed_view('events', 'block_1');
  $variables['block_events'] = $block_events;

  $block_webform = module_invoke('webform', 'block_view', 'client-block-221');
  $variables['block_webform'] = $block_webform;

  $block_last_blog = views_embed_view('member', 'block_1');
  $variables['block_last_blog'] = $block_last_blog;
}

function upa_foundation_preprocess_user_profile(&$variables) {
    $block_last_blog = views_embed_view('member', 'block_1');
    $variables['block_last_blog'] = $block_last_blog;

    $block_last_forum = views_embed_view('member', 'block_2');
    $variables['block_last_forum'] = $block_last_forum;
}

/**
 * Implements hook_form_alter().
 */
function upa_foundation_form_alter(&$form, &$form_state, $form_id) {
  /*
   *if (isset($form['type']) && $form['type']['#value'] . '_node_settings' == $form_id) {
   *  $form['workflow']['upload_' . $form['type']['#value']] = array(
   *    '#type' => 'radios',
   *    '#title' => t('Attachments'),
   *    '#default_value' => variable_get('upload_' . $form['type']['#value'], 1),
   *    '#options' => array(t('Disabled'), t('Enabled')),
   * );
   *}
   */
  //dpm($form_id);
  switch ($form_id) {
  	case 'views_exposed_form':
  		if($form['#id'] == 'views-exposed-form-members-block-1') {
  			$form['submit']['#value'] = '<i class="fa fa-search"></i>';
  			//dpm($form);
  		}
  		break;
  	case 'comment_node_forum_form':
      //dpm($form);
      $form['#attributes']['class'][] = 'panel white';
      break;
  	default:
  		# code...
  		break;
  }
}

function upa_foundation_preprocess_views_exposed_form(&$variables) {
	$variables['button'] = '<button id="edit-submit-members" name="" value="search" type="submit" class="form-submit"><i class="fa fa-search"></i></button>';
}
