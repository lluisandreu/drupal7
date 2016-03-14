<?php
/**
 * @file
 * breakpoint_group.foundation.inc
 */

$api = '2.0.0';

$data = $breakpoint_group = new stdClass();
$breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
$breakpoint_group->api_version = 1;
$breakpoint_group->machine_name = 'foundation';
$breakpoint_group->name = 'Foundation';
$breakpoint_group->breakpoints = array(
  0 => 'custom.user.mobile',
  1 => 'custom.user.desktop',
  2 => 'custom.user.phablet',
);
$breakpoint_group->type = 'custom';
$breakpoint_group->overridden = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'breakpoints',
);
