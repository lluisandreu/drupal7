<?php

function jean_foundation_preprocess_html(&$variables) {
	drupal_add_css('//fonts.googleapis.com/css?family=Karla:400,700|Lora:400,400i,700,700i', array('type' => 'external'));
}

/**
 * Implements template_preprocess_html().
 */
function STARTER_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function STARTER_preprocess_page(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function STARTER_preprocess_node(&$variables) {
}

/**
 * Helper function to find and render a block.
 */
function render_block_content($module, $delta) {
  $output = '';
  if ($block = block_load($module, $delta)) {
    if ($build = module_invoke($module, 'block_view', $delta)) {
      $delta = str_replace('-', '_', $delta);
      drupal_alter(array('block_view', "block_view_{$module}_{$delta}"), $build, $block);

      if (!empty($build['content'])) {
        return is_array($build['content']) ? render($build['content']) : $build['content'];
      }
    }
  }
  return $output;
}


/**
 * Implements theme_links() targeting the main menu topbar.
 */
function jean_foundation_links__topbar_main_menu($variables) {
  // We need to fetch the links ourselves because we need the entire tree.
  $links = menu_tree_output(menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu')));
  $output = _jean_foundation_links($links);
  $variables['attributes']['class'][] = 'off-canvas-list';

  return '<ul' . drupal_attributes($variables['attributes']) . '>' . $output . '</ul>';
}

function _jean_foundation_links($links) {
  $output = '';

  foreach (element_children($links) as $key) {
    $output .= _jean_foundation_render_link($links[$key]);
  }

  return $output;
}

function _jean_foundation_render_link($link) {
  $output = '';

  // This is a duplicate link that won't get the dropdown class and will only
  // show up in small-screen.
  $small_link = $link;

  if (!empty($link['#below'])) {
    $link['#attributes']['class'][] = 'has-submenu';
  }

  // Render top level and make sure we have an actual link.
  if (!empty($link['#href'])) {
    $rendered_link = NULL;

    // Foundation offers some of the same functionality as Special Menu Items;
    // ie: Dividers and Labels in the top bar. So let's make sure that we
    // render them the Foundation way.
    if (module_exists('special_menu_items')) {
      if ($link['#href'] === '<nolink>') {
        $rendered_link = '<label>' . $link['#title'] . '</label>';
      }
      else {
        if ($link['#href'] === '<separator>') {
          $link['#attributes']['class'][] = 'divider';
          $rendered_link = '';
        }
      }
    }

    if (!isset($rendered_link)) {
      $rendered_link = theme('zurb_foundation_menu_link', array('link' => $link));
    }

    // Test for localization options and apply them if they exist.
    if (isset($link['#localized_options']['attributes']) && is_array($link['#localized_options']['attributes'])) {
      $link['#attributes'] = array_merge_recursive($link['#attributes'], $link['#localized_options']['attributes']);
    }
    $output .= '<li' . drupal_attributes($link['#attributes']) . '>' . $rendered_link;

    if (!empty($link['#below'])) {
      $sub_menu = '';
      // Build sub nav recursively.
      foreach ($link['#below'] as $sub_link) {
        if (!empty($sub_link['#href'])) {
          $sub_menu .= _jean_foundation_render_link($sub_link);
        }
      }

      $output .= '<ul class="left-submenu"><li class="back"><a href="#">Back</a></li>' . $sub_menu . '</ul>';
    }

    $output .= '</li>';
  }

  return $output;
}