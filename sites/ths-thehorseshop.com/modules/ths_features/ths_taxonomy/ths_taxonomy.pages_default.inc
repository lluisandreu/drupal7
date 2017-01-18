<?php
/**
 * @file
 * ths_taxonomy.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ths_taxonomy_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__category';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'category',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'categories' => 'categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'taxonomy';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'taxonomy_description' => NULL,
      'taxonomy_image' => NULL,
      'products_in_this_taxonomy' => NULL,
      'extra_content' => NULL,
      'left' => NULL,
      'right' => NULL,
      'body' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '943131b0-9957-486d-8c4b-1691991c5796';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__category';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e84db5b2-2e00-40cc-9ebe-f05a43efbe79';
  $pane->panel = 'body';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_by_category-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e84db5b2-2e00-40cc-9ebe-f05a43efbe79';
  $display->content['new-e84db5b2-2e00-40cc-9ebe-f05a43efbe79'] = $pane;
  $display->panels['body'][0] = 'new-e84db5b2-2e00-40cc-9ebe-f05a43efbe79';
  $pane = new stdClass();
  $pane->pid = 'new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'override_title' => 1,
    'override_title_text' => 'Productos destacados',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $display->content['new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565'] = $pane;
  $display->panels['bottom'][0] = 'new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $pane = new stdClass();
  $pane->pid = 'new-7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $display->content['new-7fb8b50e-ce68-4538-991a-b4ed7e89626e'] = $pane;
  $display->panels['left'][0] = 'new-7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $pane = new stdClass();
  $pane->pid = 'new-a8872f30-f5ce-4e05-b194-ab20a2136ba7';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_subterms_menu-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a8872f30-f5ce-4e05-b194-ab20a2136ba7';
  $display->content['new-a8872f30-f5ce-4e05-b194-ab20a2136ba7'] = $pane;
  $display->panels['left'][1] = 'new-a8872f30-f5ce-4e05-b194-ab20a2136ba7';
  $pane = new stdClass();
  $pane->pid = 'new-02a99d16-5654-4082-8098-775e41d8f763';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_taxonomy_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
    ),
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '02a99d16-5654-4082-8098-775e41d8f763';
  $display->content['new-02a99d16-5654-4082-8098-775e41d8f763'] = $pane;
  $display->panels['right'][0] = 'new-02a99d16-5654-4082-8098-775e41d8f763';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__category'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_5e90e2c0-312c-4c29-b55f-ee065801a610';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Brands',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'brands' => 'brands',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'taxonomy';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'taxonomy_description' => NULL,
      'taxonomy_image' => NULL,
      'products_in_this_taxonomy' => NULL,
      'extra_content' => NULL,
      'left' => NULL,
      'right' => NULL,
      'body' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '943131b0-9957-486d-8c4b-1691991c5796';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_5e90e2c0-312c-4c29-b55f-ee065801a610';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41e9f874-923f-4e01-8c3b-b4066f85dee0';
  $pane->panel = 'body';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_by_brand-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'override_title' => 0,
    'override_title_text' => 'Productos',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41e9f874-923f-4e01-8c3b-b4066f85dee0';
  $display->content['new-41e9f874-923f-4e01-8c3b-b4066f85dee0'] = $pane;
  $display->panels['body'][0] = 'new-41e9f874-923f-4e01-8c3b-b4066f85dee0';
  $pane = new stdClass();
  $pane->pid = 'new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'override_title' => 1,
    'override_title_text' => 'Productos destacados',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $display->content['new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565'] = $pane;
  $display->panels['bottom'][0] = 'new-1dc99ae2-0041-4bd0-9597-1e0a5a5eb565';
  $pane = new stdClass();
  $pane->pid = 'new-7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $display->content['new-7fb8b50e-ce68-4538-991a-b4ed7e89626e'] = $pane;
  $display->panels['left'][0] = 'new-7fb8b50e-ce68-4538-991a-b4ed7e89626e';
  $pane = new stdClass();
  $pane->pid = 'new-02a99d16-5654-4082-8098-775e41d8f763';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_taxonomy_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'categories_large',
      'image_link' => '',
    ),
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '02a99d16-5654-4082-8098-775e41d8f763';
  $display->content['new-02a99d16-5654-4082-8098-775e41d8f763'] = $pane;
  $display->panels['right'][0] = 'new-02a99d16-5654-4082-8098-775e41d8f763';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_5e90e2c0-312c-4c29-b55f-ee065801a610'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ths_taxonomy_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'brands';
  $page->task = 'page';
  $page->admin_title = 'Brands';
  $page->admin_description = '';
  $page->path = 'marcas';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_brands__panel';
  $handler->task = 'page';
  $handler->subtask = 'brands';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Productos por marca';
  $display->uuid = '05cacecd-01cf-479c-a64e-6fecd4727c95';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_brands__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2d65e072-59dc-4a5e-9cc5-e1026d68981f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'brands-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '0',
    'override_title' => 0,
    'override_title_text' => 'Productos por marca',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2d65e072-59dc-4a5e-9cc5-e1026d68981f';
  $display->content['new-2d65e072-59dc-4a5e-9cc5-e1026d68981f'] = $pane;
  $display->panels['middle'][0] = 'new-2d65e072-59dc-4a5e-9cc5-e1026d68981f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2d65e072-59dc-4a5e-9cc5-e1026d68981f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['brands'] = $page;

  return $pages;

}
