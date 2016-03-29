<?php
/**
 * @file
 * panels_and_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_and_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_75f5774f-6e50-40f4-a293-02e5f7cc4841';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Product page',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'producto' => 'producto',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '509ec1e1-022a-40ba-91ed-19a2f93739fd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f750575e-1da8-4b9c-8f98-c2f616bb288b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'f750575e-1da8-4b9c-8f98-c2f616bb288b';
  $display->content['new-f750575e-1da8-4b9c-8f98-c2f616bb288b'] = $pane;
  $display->panels['left'][0] = 'new-f750575e-1da8-4b9c-8f98-c2f616bb288b';
  $pane = new stdClass();
  $pane->pid = 'new-c73badb4-4d9a-4384-b86c-27236a8614a7';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'product_node_desktop',
      'image_link' => '',
      'picture_mapping' => 'product_thumb',
      'fallback_image_style' => 'product_image_thumb_desktop',
      'lazyload' => 0,
      'lazyload_aspect_ratio' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'c73badb4-4d9a-4384-b86c-27236a8614a7';
  $display->content['new-c73badb4-4d9a-4384-b86c-27236a8614a7'] = $pane;
  $display->panels['right'][0] = 'new-c73badb4-4d9a-4384-b86c-27236a8614a7';
  $pane = new stdClass();
  $pane->pid = 'new-b3de9ce3-3114-4389-8437-d91c46f89035';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product_price';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '.',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Oferta',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b3de9ce3-3114-4389-8437-d91c46f89035';
  $display->content['new-b3de9ce3-3114-4389-8437-d91c46f89035'] = $pane;
  $display->panels['right'][1] = 'new-b3de9ce3-3114-4389-8437-d91c46f89035';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f750575e-1da8-4b9c-8f98-c2f616bb288b';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_75f5774f-6e50-40f4-a293-02e5f7cc4841'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_e5f528e4-2092-4cbe-a49b-c5e625452da4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node_2',
        'name' => 'entity:node',
        'entity_id' => '9',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/2',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '886dbacc-9e7b-45b1-8b68-cd8e8c64f0a7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'moneia',
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
  $pane->uuid = '8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
  $display->content['new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e'] = $pane;
  $display->panels['left'][0] = 'new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
  $pane = new stdClass();
  $pane->pid = 'new-2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Contacto',
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
  $pane->uuid = '2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6';
  $display->content['new-2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6'] = $pane;
  $display->panels['right'][0] = 'new-2ab15f3f-7bd0-4f15-bad1-022b6d7cdea6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8bd25bc2-4d82-4644-8d9a-6d4e1577c90e';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_e5f528e4-2092-4cbe-a49b-c5e625452da4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_b68e6f3e-52c3-442c-aae2-11012764d5ea';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Products',
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
              'product_categories' => 'product_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:product_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'taxonomy_body' => NULL,
      'taxonomy_image' => NULL,
      'taxonomy_childs' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '17d530d5-6654-4537-8451-5c9dc61eb826';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6648b29a-d466-4c8e-a7d6-3180aac88c22';
  $pane->panel = 'taxonomy_body';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6648b29a-d466-4c8e-a7d6-3180aac88c22';
  $display->content['new-6648b29a-d466-4c8e-a7d6-3180aac88c22'] = $pane;
  $display->panels['taxonomy_body'][0] = 'new-6648b29a-d466-4c8e-a7d6-3180aac88c22';
  $pane = new stdClass();
  $pane->pid = 'new-d898f51b-de9a-4c30-95ab-91d833ff79c9';
  $pane->panel = 'taxonomy_childs';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_childs-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd898f51b-de9a-4c30-95ab-91d833ff79c9';
  $display->content['new-d898f51b-de9a-4c30-95ab-91d833ff79c9'] = $pane;
  $display->panels['taxonomy_childs'][0] = 'new-d898f51b-de9a-4c30-95ab-91d833ff79c9';
  $pane = new stdClass();
  $pane->pid = 'new-13d44081-8bfd-4ddb-848b-c6aa063cb894';
  $pane->panel = 'taxonomy_childs';
  $pane->type = 'views_panes';
  $pane->subtype = 'product_by_category_line_items-panel_pane_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '13d44081-8bfd-4ddb-848b-c6aa063cb894';
  $display->content['new-13d44081-8bfd-4ddb-848b-c6aa063cb894'] = $pane;
  $display->panels['taxonomy_childs'][1] = 'new-13d44081-8bfd-4ddb-848b-c6aa063cb894';
  $pane = new stdClass();
  $pane->pid = 'new-0bfccceb-0c6a-45cb-a32d-338a7a2b3e10';
  $pane->panel = 'taxonomy_image';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_taxonomy_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'picture',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
      'picture_mapping' => 'product_thumb',
      'fallback_image_style' => 'product_image_thumb_desktop',
      'lazyload' => 1,
      'lazyload_aspect_ratio' => 0,
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
  $pane->uuid = '0bfccceb-0c6a-45cb-a32d-338a7a2b3e10';
  $display->content['new-0bfccceb-0c6a-45cb-a32d-338a7a2b3e10'] = $pane;
  $display->panels['taxonomy_image'][0] = 'new-0bfccceb-0c6a-45cb-a32d-338a7a2b3e10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_b68e6f3e-52c3-442c-aae2-11012764d5ea'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_and_layouts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_products';
  $page->task = 'page';
  $page->admin_title = 'All products';
  $page->admin_description = '';
  $page->path = 'productos';
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
  $handler->name = 'page_all_products__panel';
  $handler->task = 'page';
  $handler->subtask = 'all_products';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Productos y servicios';
  $display->uuid = 'da205dc4-2d3e-425e-8bb3-27d4626e26dd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'all_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
  $display->content['new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4'] = $pane;
  $display->panels['middle'][0] = 'new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_products'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'front';
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
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Inicio| [current-page:pager][site:name]',
        ),
        'robots' => array(
          'value' => array(
            'index' => 'index',
            'follow' => 'follow',
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
        'rating' => array(
          'value' => 'general',
        ),
        'referrer' => array(
          'value' => 'no-referrer',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
      'about' => NULL,
      'offers' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '134c7930-46d8-4955-8371-c1502aae405a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-27a9752d-9887-49c9-8c2d-fda7daced052';
  $pane->panel = 'about';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '1',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 0,
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
  $pane->uuid = '27a9752d-9887-49c9-8c2d-fda7daced052';
  $display->content['new-27a9752d-9887-49c9-8c2d-fda7daced052'] = $pane;
  $display->panels['about'][0] = 'new-27a9752d-9887-49c9-8c2d-fda7daced052';
  $pane = new stdClass();
  $pane->pid = 'new-3b6d3cce-fa50-4958-aa96-faf86808738d';
  $pane->panel = 'about';
  $pane->type = 'views_panes';
  $pane->subtype = 'brands-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'override_title' => 1,
    'override_title_text' => 'Nuestros proveedores',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3b6d3cce-fa50-4958-aa96-faf86808738d';
  $display->content['new-3b6d3cce-fa50-4958-aa96-faf86808738d'] = $pane;
  $display->panels['about'][1] = 'new-3b6d3cce-fa50-4958-aa96-faf86808738d';
  $pane = new stdClass();
  $pane->pid = 'new-ee923216-f842-4500-8226-d59a26786259';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Productos y servicios',
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
  $pane->uuid = 'ee923216-f842-4500-8226-d59a26786259';
  $display->content['new-ee923216-f842-4500-8226-d59a26786259'] = $pane;
  $display->panels['center'][0] = 'new-ee923216-f842-4500-8226-d59a26786259';
  $pane = new stdClass();
  $pane->pid = 'new-b76e1255-d9d6-4528-8f21-3a0cb0b93cc5';
  $pane->panel = 'offers';
  $pane->type = 'views_panes';
  $pane->subtype = 'offers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Ofertas recientes',
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
  $pane->uuid = 'b76e1255-d9d6-4528-8f21-3a0cb0b93cc5';
  $display->content['new-b76e1255-d9d6-4528-8f21-3a0cb0b93cc5'] = $pane;
  $display->panels['offers'][0] = 'new-b76e1255-d9d6-4528-8f21-3a0cb0b93cc5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'offers';
  $page->task = 'page';
  $page->admin_title = 'Offers';
  $page->admin_description = '';
  $page->path = 'ofertas';
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
  $handler->name = 'page_offers__panel';
  $handler->task = 'page';
  $handler->subtask = 'offers';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6cecfc70-6aa5-4e35-8f27-a798b0d98441';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9dd41c80-a478-49d0-86c3-3144046ecbd9';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'offers-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9dd41c80-a478-49d0-86c3-3144046ecbd9';
  $display->content['new-9dd41c80-a478-49d0-86c3-3144046ecbd9'] = $pane;
  $display->panels['middle'][0] = 'new-9dd41c80-a478-49d0-86c3-3144046ecbd9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9dd41c80-a478-49d0-86c3-3144046ecbd9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['offers'] = $page;

  return $pages;

}
