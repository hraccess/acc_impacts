<?php
/**
 * @file
 * acc_impacts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_impacts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
