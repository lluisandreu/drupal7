<?php
/**
 * @file
 * jean_updates.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function jean_updates_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/58
  $menu_links['main-menu:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Tracking',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'projects',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Tracking');


  return $menu_links;
}
