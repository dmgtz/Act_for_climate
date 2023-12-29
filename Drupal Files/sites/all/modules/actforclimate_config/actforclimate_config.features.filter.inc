<?php
/**
 * @file
 * actforclimate_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function actforclimate_config_filter_default_formats() {
  $formats = array();

  // Exported format: Pure HTML.
  $formats['pure_html'] = array(
    'format' => 'pure_html',
    'name' => 'Pure HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(),
  );

  return $formats;
}
