<?php
/**
 * @file
 * panels_and_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_and_layouts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
