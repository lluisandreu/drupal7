<?php
/**
 * @file
 * variable.language_negotiation_language_content.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'language_negotiation_language_content',
  'content' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
