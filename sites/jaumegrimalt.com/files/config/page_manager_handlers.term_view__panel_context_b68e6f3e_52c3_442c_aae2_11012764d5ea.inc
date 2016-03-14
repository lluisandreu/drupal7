<?php
/**
 * @file
 * page_manager_handlers.term_view__panel_context_b68e6f3e_52c3_442c_aae2_11012764d5ea.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
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


$dependencies = array(
  'views_view.product_childs' => 'views_view.product_childs',
  'views_view.product_by_category_line_items' => 'views_view.product_by_category_line_items',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
